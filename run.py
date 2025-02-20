import os, sys, subprocess, importlib.util

M = "\x1b[0;31m"  # Merah
H = "\x1b[0;32m"  # Hijau
N = "\x1b[0m"     # Reset ke default

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
            print(f"\n {H}✓{N} Semua modul telah diinstal. Silakan jalankan skrip lagi.")
            sys.exit(0)

        if self.missing_modules:
            print(f" {M}!{N} Modul berikut belum terinstal:", ", ".join(self.missing_modules))
            print(f" {H}>{N} Silakan jalankan perintah berikut untuk menginstal modul yang diperlukan:\npython {sys.argv[0]} --install")
            sys.exit(1)

class Kynara:

    def __init__(self):
        self.module_manager = ModuleManager()
        self.module_manager.handle_installation()

    def run(self):
        from config.Fesnuk import Wangsaff
        os.system("git pull")
        Wangsaff()

if __name__ == "__main__":
    kyna = Kynara()
    kyna.run()