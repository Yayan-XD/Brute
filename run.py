import os
import glob
import sys
import subprocess
import importlib.util
from distutils.core import setup, Extension

M = "\x1b[0;31m"
H = "\x1b[0;32m"
N = "\x1b[0m"

class Logo:
    loz = (
                f"""{H}
           ___       _       ___ _
          / __\ ___ | |_    / __\ |__
         /__\/// _ \| __|  / _\ | '_ \\
        / \/  \ (_) | |_  / /   | |_) |
        \_____/\___/ \__| \/    |_.__/
{N}""")
    print(loz)


class PythonVersionChecker:
    def __init__(self, required_version):
        self.required_version = required_version
        self.current_version = sys.version_info

    def check_version(self):
        Logo()
        if self.current_version[:2] == self.required_version:
            pass
        elif self.current_version[:2] < self.required_version:
            print(f"{M}Notice:{N} Versi Python Anda terlalu rendah. Silakan upgrade.")
            sys.exit(1)
        else:
            print(f"{M}Notice:{N} Versi Python Anda terlalu tinggi. Silakan downgrade.")
            sys.exit(1)

class ModuleManager:
    REQUIRED_MODULES = ["requests", "rich", "bs4", "pytz"]

    def __init__(self):
        self.missing_modules = self.check_modules()

    def check_modules(self):
        return [module for module in self.REQUIRED_MODULES if importlib.util.find_spec(module) is None]

    def install_modules(self):
        Logo()
        for module in self.missing_modules:
            try:
                subprocess.check_call([sys.executable, "-m", "pip", "install", module])
                print(f"\n {H}✓{N} Berhasil menginstal {module}")
            except subprocess.CalledProcessError:
                print(f"\n {M}!{N} Gagal menginstal {module}")

    def handle_installation(self):
        Logo()
        if "--install" in sys.argv:
            print(f"\n {H}•{N} Menginstal modul yang diperlukan...")
            self.install_modules()
            print(f" {H}✓{N} Semua modul telah diinstal. Silakan jalankan skrip lagi.")
            sys.exit(0)

        if self.missing_modules:
            print(f" {M}!{N} Modul berikut belum terinstal:", ", ".join(self.missing_modules))
            print(f" {H}>{N} Silakan jalankan perintah:\npython {sys.argv[0]} --install")
            sys.exit(1)

class Kynara:
    TARGET_FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]
    
    def __init__(self):
        python_checker = PythonVersionChecker((3, 12))
        python_checker.check_version()
        self.module_manager = ModuleManager()
        self.module_manager.handle_installation()

    def compile_cpp_to_so(self):
        cpp_files = []
        for folder in self.TARGET_FOLDERS:
            cpp_files.extend(glob.glob(os.path.join(folder, "*.cpp")))

        if not cpp_files:
            return False

        # Konfigurasi kompilasi
        extra_compile_args = []
        extra_link_args = []
        if sys.platform.startswith("linux"):
            extra_compile_args = ["-std=c++11", "-O3", "-fPIC"]
            extra_link_args = ["-shared"]
        elif sys.platform == "darwin":
            extra_compile_args = ["-std=c++11", "-O3", "-mmacosx-version-min=10.9"]
            extra_link_args = ["-shared"]
        elif sys.platform == "win32":
            extra_compile_args = ["/O2"]
            extra_link_args = []

        extensions = [
            Extension(
                name=os.path.splitext(file)[0].replace(os.sep, "."),
                sources=[file],
                extra_compile_args=extra_compile_args,
                extra_link_args=extra_link_args,
                language="c++"
            )
            for file in cpp_files
        ]

        try:
            setup(
                name="encrypted_files",
                ext_modules=extensions,
                script_args=["build_ext", "--inplace", "--force"]
            )
            return True
        except Exception as e:
            print(f"{M}Kompilasi gagal: {e}{N}")
            return False

    def run(self):
        Logo()
        so_files = []
        for folder in self.TARGET_FOLDERS:
            so_files.extend(glob.glob(os.path.join(folder, "*.so")))

        if not so_files:
            print(f"\n{M}!{N} Tunggu sebentar, sedang proses beberapa menit...")
            if self.compile_cpp_to_so():
                print(f"{H}✓{N} Kompilasi berhasil!")
                try:
                    from bluid.menu import yayanxd
                    yayanxd().hapus()
                    yayanxd().menu()
                except ImportError as e:
                    print(f"{M}Gagal memuat modul: {e}{N}")
            else:
                print(f"{M}!{N} Gagal kompilasi file .cpp!")
        else:
            try:
                from bluid.menu import yayanxd
                yayanxd().hapus()
                yayanxd().menu()
            except ImportError as e:
                print(f"{M}Gagal memuat modul: {e}{N}")

if __name__ == "__main__":
    kyna = Kynara()
    kyna.run()
