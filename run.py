import os
import sys
import subprocess
import importlib.util

M = "\x1b[0;31m"  # Merah
H = "\x1b[0;32m"  # Hijau
N = "\x1b[0m"     # Reset ke default

class PythonVersionChecker:
    def __init__(self, required_version):
        self.required_version = required_version
        self.current_version = sys.version_info

    def check_version(self):
        ModuleManager().logo()
        if self.current_version[:2] == self.required_version:pass
        elif self.current_version[:2] < self.required_version:
            print(f"{M}Notice:{N} Script ini menggunakan Python versi {self.required_version[0]}.{self.required_version[1]}. Versi Python Anda {self.current_version.major}.{self.current_version.minor}.{self.current_version.micro} terlalu rendah. Silakan upgrade Python Anda.")
            sys.exit(1)
        else:
            print(f"{M}Notice:{N} Script ini menggunakan Python versi {self.required_version[0]}.{self.required_version[1]}. Versi Python Anda {self.current_version.major}.{self.current_version.minor}.{self.current_version.micro} terlalu tinggi. Silakan downgrade Python Anda.")
            sys.exit(1)

class ModuleManager:
    REQUIRED_MODULES = ["requests", "rich", "bs4"]

    def __init__(self):
        self.missing_modules = self.check_modules()

    def logo(self):
        if "linux" in sys.platform.lower():
            try:os.system("clear")
            except:pass
        elif "win" in sys.platform.lower():
            try:os.system("cls")
            except:pass
        else:os.system("clear")
        print(
            f"""
   ___  ____  ________  ___  _______ __
  / _ )/ __/ / ___/ _ \/ _ |/ ___/ //_/
 / _  / _/  / /__/ , _/ __ / /__/ ,<   
/____/_/    \___/_/|_/_/ |_\___/_/|_|  
            Coded by: yayanxd
---------------------------------------""")

    def check_modules(self):
        return [module for module in self.REQUIRED_MODULES if importlib.util.find_spec(module) is None]

    def install_modules(self):
        self.logo()
        for module in self.missing_modules:
            try:
                subprocess.check_call([sys.executable, "-m", "pip", "install", module])
                print(f"\n {H}✓{N} Berhasil menginstal {module}")
            except subprocess.CalledProcessError:
                print(f"\n {M}!{N} Gagal menginstal {module}")

    def handle_installation(self):
        self.logo()
        if "--install" in sys.argv:
            print(f"\n {H}•{N} Menginstal modul yang diperlukan...")
            self.install_modules()
            print(f" {H}✓{N} Semua modul telah diinstal. Silakan jalankan skrip lagi.")
            sys.exit(0)

        if self.missing_modules:
            print(f" {M}!{N} Modul berikut belum terinstal:", ", ".join(self.missing_modules))
            print(f" {H}>{N} Silakan jalankan perintah berikut untuk menginstal modul yang diperlukan:\npython {sys.argv[0]} --install")
            sys.exit(1)

    def hapus(self):
        os.system("git pull")
        patch = [
            "data/cache/apcb.txt",
            "data/HASIL-CEK-CP/CP/apcb.txt", "data/HASIL-CEK-CP/OK/apcb.txt", "data/HASIL-CEK-CP/json/apcb.txt",
            "data/result/OK/apcb.txt", "data/result/CP/apcb.txt"
        ]
        for file in patch:
            if os.path.exists(file):
                try:
                    os.remove(file)
                except:pass
            else:pass

class Kynara:
    def __init__(self):
        python_checker = PythonVersionChecker((3, 12))
        python_checker.check_version()
        self.module_manager = ModuleManager()
        self.module_manager.handle_installation()
        self.module_manager.hapus()

    def run(self):
        from config.Fesnuk import Wangsaff
        Wangsaff()

if __name__ == "__main__":
    kyna = Kynara()
    kyna.run()
