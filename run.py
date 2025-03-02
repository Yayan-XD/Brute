import os
import sys
import platform
import subprocess
import importlib.util

from bluid.logo import Logo

M = "\x1b[0;31m"  # Merah
H = "\x1b[0;32m"  # Hijau
N = "\x1b[0m"     # Reset warna

class App:
    def __init__(self):
        self.OS_NAME = platform.system().lower()
        self.ARCH = platform.architecture()[0]
        self.FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]
        self.REQUIRED_MODULES = ["requests", "rich", "bs4", "cython"]

    def ensure_cython_installed(self):
        if importlib.util.find_spec("Cython") is None:
            Logo("barme")
            print(f"{H}Menginstal Cython...{N}")
            subprocess.check_call([sys.executable, "-m", "pip", "install", "cython", "pytz"])
            print(f"{H}✓ Cython berhasil diinstal!{N}")

    def needs_recompile(self):
        files_to_recompile = []
        for folder in self.FOLDERS:
            if not os.path.exists(folder):
                continue
            for file in os.listdir(folder):
                if file.endswith(".c"):
                    so_file = os.path.join(folder, file.replace(".c", ".so"))
                    c_file = os.path.join(folder, file)

                    if not os.path.exists(so_file) or os.path.getmtime(c_file) > os.path.getmtime(so_file):
                        files_to_recompile.append(c_file)
        return files_to_recompile

    def cek_file_so(self):
        for folder in self.FOLDERS:
            if not os.path.exists(folder):
                continue
            for file in os.listdir(folder):
                if file.endswith(".so"):
                    return True
        return False

    def compile_c_to_so(self, files_to_recompile):
        if not files_to_recompile:
            Logo("barme")
            print(f"\n{H}✓ Semua file .so sudah sesuai. Tidak perlu kompilasi ulang.{N}")
            return

        Logo("barme")
        print(f"\n{M}✘ File .c berikut perlu dikompilasi ulang ke .so:{N}")
        for file in files_to_recompile:
            print(f" - {file}")

        print(f"\n{H}Memulai proses kompilasi ulang...{N}")
        try:
            subprocess.run([sys.executable, "setup.py", "build_ext", "--inplace"], check=True)
            print(f"\n{H}✓ Kompilasi selesai! Coba jalankan ulang:{N} python run.py")
        except subprocess.CalledProcessError as e:
            print(f"{M}✗ Gagal mengompilasi file .c: {e}{N}")
        sys.exit(0)

    class ModuleManager:
        def __init__(self, required_modules):
            self.required_modules = required_modules
            self.missing_modules = self.check_modules()

        def check_modules(self):
            return [module for module in self.required_modules if importlib.util.find_spec(module) is None]

        def install_modules(self):
            Logo("barme")
            for module in self.missing_modules:
                try:
                    subprocess.check_call([sys.executable, "-m", "pip", "install", module])
                    print(f"\n {H}✓{N} Berhasil menginstal {module}")
                except subprocess.CalledProcessError:
                    print(f"\n {M}!{N} Gagal menginstal {module}")

        def handle_installation(self):
            if "--install" in sys.argv:
                Logo("barme")
                print(f"\n {H}•{N} Menginstal modul yang diperlukan...")
                self.install_modules()
                print(f" {H}✓{N} Semua modul telah diinstal. Silakan jalankan skrip lagi.")
                sys.exit(0)

            if self.missing_modules:
                Logo("barme")
                print(f" {M}!{N} Modul berikut belum terinstal:", ", ".join(self.missing_modules))
                print(f" {H}>{N} Jalankan perintah berikut untuk menginstalnya:\npython {sys.argv[0]} --install")
                sys.exit(1)

    class Kynara:
        def __init__(self, module_manager):
            self.module_manager = module_manager
            self.module_manager.handle_installation()

        def run(self):
            try:
                from bluid.menu import yayanxd
                yayanxd().hapus()
                yayanxd().menu()
            except ImportError as e:
                Logo("barme")
                print(f"{M}✗ Gagal mengimpor modul: {e}{N}")
                sys.exit(1)

    def main(self):
        Logo("barme")
        if sys.version_info < (3, 12):
            print(f"{M}✘ Script ini membutuhkan Python 3.12 atau lebih tinggi!{N}")
            sys.exit(1)

        module_manager = self.ModuleManager(self.REQUIRED_MODULES)
        module_manager.handle_installation()

        files_to_recompile = self.needs_recompile()
        self.compile_c_to_so(files_to_recompile)

        if self.cek_file_so():
            kyna = self.Kynara(module_manager)
            kyna.run()
        else:
            Logo("barme")
            print(f"\n{M}✘ Tidak ada file .so yang ditemukan!{N}")
            print(f"{H}> Jalankan perintah berikut untuk mengompilasi ulang:{N} python run.py --yxd")
            sys.exit(0)

if __name__ == "__main__":
    app = App()
    app.main()
