import os
import sys
import platform
import subprocess
import importlib.util

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
            print(f"{M}Notice:{N} Script ini membutuhkan Python {self.required_version[0]}.{self.required_version[1]}. Versi Anda: {self.current_version.major}.{self.current_version.minor}.")
            sys.exit(1)
        else:
            print(f"{M}Notice:{N} Script ini membutuhkan Python {self.required_version[0]}.{self.required_version[1]}. Versi Anda: {self.current_version.major}.{self.current_version.minor}.")
            sys.exit(1)

class ModuleManager:
    REQUIRED_MODULES = ["requests", "rich", "bs4"]

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
            print(f" {H}>{N} Silakan jalankan:\npython {sys.argv[0]} --install")
            sys.exit(1)

class SharedObjectChecker:
    def __init__(self):
        self.system_arch = platform.architecture()[0]
        self.system_os = platform.system()
        self.missing_files = []

    def check_shared_objects(self):
        for folder in FOLDERS:
            folder_path = os.path.join(os.getcwd(), folder)
            if not os.path.exists(folder_path):
                continue
            
            for file in os.listdir(folder_path):
                if file.endswith(".so"):
                    file_path = os.path.join(folder_path, file)
                    
                    result = subprocess.run(["ldd", file_path], capture_output=True, text=True)
                    if "not found" in result.stdout or result.returncode != 0:
                        self.missing_files.append(file_path)

        if self.missing_files:
            print(f"\n❌ Beberapa file .so tidak cocok dengan sistem Anda!\n")
            print(f"🔹 OS Anda: {self.system_os} ({self.system_arch})\n")
            print("File yang bermasalah:")
            for mf in self.missing_files:
                print(f" - {mf}")
            print("\n⚠️  Silakan ketik perintah berikut untuk tetap menjalankan script:\n")
            print(f"    python {sys.argv[0]} --yxd\n")
            sys.exit(1)

class Kynara:
    def __init__(self):
        python_checker = PythonVersionChecker((3, 11))
        python_checker.check_version()
        self.module_manager = ModuleManager()
        self.module_manager.handle_installation()
        yayanxd().hapus()

        if "--yxd" in sys.argv:
            print("\n🔄 Anda memilih '--yxd', script tetap berjalan...\n")
            return

        # Cek file .so
        so_checker = SharedObjectChecker()
        so_checker.check_shared_objects()

    def run(self):
        from bluid.menu import yayanxd
        yayanxd().menu()

if __name__ == "__main__":
    kyna = Kynara()
    kyna.run()
