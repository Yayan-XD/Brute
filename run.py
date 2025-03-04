import sys
import subprocess
import importlib.util
import os
import glob

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
            print(f"{M}Notice:{N} Script ini menggunakan Python versi {self.required_version[0]}.{self.required_version[1]}. Versi Python Anda {self.current_version.major}.{self.current_version.minor}.{self.current_version.micro} terlalu rendah. Silakan upgrade Python Anda.")
            sys.exit(1)
        else:
            print(f"{M}Notice:{N} Script ini menggunakan Python versi {self.required_version[0]}.{self.required_version[1]}. Versi Python Anda {self.current_version.major}.{self.current_version.minor}.{self.current_version.micro} terlalu tinggi. Silakan downgrade Python Anda.")
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
            print(f" {H}>{N} Silakan jalankan perintah berikut untuk menginstal modul yang diperlukan:\npython {sys.argv[0]} --install")
            sys.exit(1)

class SharedObjectManager:
    TARGET_FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]

    def __init__(self):
        self.cpp_files = []
        self.so_files = []
        self.collect_files()

    def collect_files(self):
        for folder in self.TARGET_FOLDERS:
            self.cpp_files.extend(glob.glob(os.path.join(folder, "**/*.cpp"), recursive=True))
            self.so_files.extend(glob.glob(os.path.join(folder, "**/*.so"), recursive=True))

    def needs_rebuild(self):
        for cpp in self.cpp_files:
            so_file = cpp.replace(".cpp", ".so")
            if not os.path.exists(so_file):  
                print(f"{M}⏳ File {so_file} tunggu sedang proses beberapa saat...{N}")
                return True  
            if os.path.getmtime(cpp) > os.path.getmtime(so_file):  
                print(f"{M}⏳ File {cpp} diperbarui, membangun ulang {so_file}...{N}")
                return True
        return False  

    def build_shared_objects(self):
        if self.needs_rebuild():
            try:
                subprocess.check_call([sys.executable, "setup.py", "build_ext", "--inplace"])
                print(f"{H}✓ suksess, proses ke menu.{N}")
            except subprocess.CalledProcessError:
                print(f"{M}! error{N}")
                sys.exit(1)

class Kynara:
    def __init__(self):
        python_checker = PythonVersionChecker((3, 12))
        python_checker.check_version()
        self.module_manager = ModuleManager()
        self.module_manager.handle_installation()
        self.shared_object_manager = SharedObjectManager()
        self.shared_object_manager.build_shared_objects()

    def run(self):
        from bluid.menu import yayanxd
        yayanxd().hapus()
        yayanxd().menu()

if __name__ == "__main__":
    kyna = Kynara()
    kyna.run()
