import os
import glob
import sys
import subprocess
import importlib.util
from Cython.Build import cythonize
from distutils.core import setup, Extension
from bluid.logo import Logo

M = "\x1b[0;31m"  # Merah
H = "\x1b[0;32m"  # Hijau
N = "\x1b[0m"     # Reset ke default

class PythonVersionChecker:
    def __init__(self, required_version):
        self.required_version = required_version
        self.current_version = sys.version_info

    def check_version(self):
        Logo("barme")
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
        Logo("barme")
        for module in self.missing_modules:
            try:
                subprocess.check_call([sys.executable, "-m", "pip", "install", module])
                print(f"\n {H}✓{N} Berhasil menginstal {module}")
            except subprocess.CalledProcessError:
                print(f"\n {M}!{N} Gagal menginstal {module}")

    def handle_installation(self):
        Logo("barme")
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
            cpp_files.extend(glob.glob(f"{folder}/*.cpp"))

        if not cpp_files:
            return False

        extensions = [
            Extension(file.replace(".cpp", ""), [file], extra_compile_args=["-std=c++11"], language="c++")
            for file in cpp_files
        ]

        setup(
            name="encrypted_files",
            ext_modules=cythonize(extensions, language_level=3),
            script_args=["build_ext", "--inplace", "--force"]
        )

        for file in cpp_files:
            os.remove(file)

        return True

    def run(self):
        so_files = []
        for folder in self.TARGET_FOLDERS:
            so_files.extend(glob.glob(f"{folder}/*.so"))

        if so_files:
            from bluid.menu import yayanxd
            yayanxd().hapus()
            yayanxd().menu()
        else:
            Logo("barme")
            print(f"{M}!{N} Tunggu sebentar, memerlukan beberapa menit saja.")
            if self.compile_cpp_to_so():
                from bluid.menu import yayanxd
                yayanxd().hapus()
                yayanxd().menu()
            else:
                print(f"{M}!{N} Gagal mengompilasi file .cpp!")

if __name__ == "__main__":
    kyna = Kynara()
    kyna.run()
