import sys
import subprocess
import importlib.util

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
            print(f"{M}Notice:{N} Script ini membutuhkan Python {self.required_version[0]}.{self.required_version[1]}, tetapi Anda menggunakan {self.current_version.major}.{self.current_version.minor}.{self.current_version.micro}. Silakan upgrade Python Anda.")
            sys.exit(1)
        else:
            print(f"{M}Notice:{N} Script ini membutuhkan Python {self.required_version[0]}.{self.required_version[1]}, tetapi Anda menggunakan {self.current_version.major}.{self.current_version.minor}.{self.current_version.micro}. Silakan downgrade Python Anda.")
            sys.exit(1)

class ModuleManager:
    REQUIRED_MODULES = ["requests", "rich", "bs4", "pytz", "setuptools"]

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

class Kynara:
    def __init__(self):
        python_checker = PythonVersionChecker((3, 12))
        python_checker.check_version()
        self.module_manager = ModuleManager()
        self.module_manager.handle_installation()

    def run(self):
        from bluid.menu import yayanxd
        yayanxd().hapus()
        yayanxd().menu()

if __name__ == "__main__":
    kyna = Kynara()
    kyna.run()
