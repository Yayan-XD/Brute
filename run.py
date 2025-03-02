import os
import sys
import subprocess
import importlib.util
import platform
from bluid.logo import Logo

M = "\x1b[0;31m"  # Merah
H = "\x1b[0;32m"  # Hijau
N = "\x1b[0m"     # Reset ke default

FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]

class PythonVersionChecker:
    def __init__(self, required_version):
        self.required_version = required_version
        self.current_version = sys.version_info

    def check_version(self):
        Logo("barme")
        if self.current_version[:2] == self.required_version:
            pass
        elif self.current_version[:2] < self.required_version:
            print(f"{M}Notice:{N} Script ini membutuhkan Python {self.required_version[0]}.{self.required_version[1]}. Versi Anda terlalu rendah ({self.current_version.major}.{self.current_version.minor}.{self.current_version.micro}). Silakan upgrade Python Anda.")
            sys.exit(1)
        else:
            print(f"{M}Notice:{N} Script ini membutuhkan Python {self.required_version[0]}.{self.required_version[1]}. Versi Anda terlalu tinggi ({self.current_version.major}.{self.current_version.minor}.{self.current_version.micro}). Silakan downgrade Python Anda.")
            sys.exit(1)

class ModuleManager:
    REQUIRED_MODULES = ["requests", "rich", "bs4", "cython"]

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
            print(f" {H}>{N} Jalankan perintah berikut untuk menginstalnya:\npython {sys.argv[0]} --install")
            sys.exit(1)

class Kynara:
    def __init__(self):
        python_checker = PythonVersionChecker((3, 11))
        python_checker.check_version()
        self.module_manager = ModuleManager()
        self.module_manager.handle_installation()

    def run(self):
        from bluid.menu import yayanxd
        yayanxd().hapus()
        yayanxd().menu()

def cek_file_so():
    for folder in FOLDERS:
        for file in os.listdir(folder):
            if file.endswith(".so"):
                return True
    return False

def compile_c_to_so():
    print(f"\n{M}✘ Tidak ada file .so yang sesuai!{N}")
    print(f"{H}Memulai proses kompilasi ulang dari file .c...{N}")
    subprocess.run([sys.executable, "setup.py", "build_ext", "--inplace"], check=True)
    print(f"\n{H}✓ Kompilasi selesai! Silakan jalankan ulang:{N} python {sys.argv[0]}")
    sys.exit(0)

if __name__ == "__main__":
    if "--yxd" in sys.argv:
        compile_c_to_so()
    if cek_file_so():
        kyna = Kynara()
        kyna.run()
    else:
        print(f"{M}✘ Tidak ada file .so yang sesuai! Jalankan:{N} python {sys.argv[0]} --yxd")
        sys.exit(1)
