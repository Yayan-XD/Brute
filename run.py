import os
import glob
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
            print(f"{M}Notice:{N} Versi Python Anda terlalu rendah. Silakan upgrade ke Python {self.required_version[0]}.{self.required_version[1]}.")
            sys.exit(1)
        else:
            print(f"{M}Notice:{N} Versi Python Anda terlalu tinggi. Disarankan menggunakan Python {self.required_version[0]}.{self.required_version[1]}.")
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
                print(f"\n {H}\u2713{N} Berhasil menginstal {module}")
            except subprocess.CalledProcessError:
                print(f"\n {M}!{N} Gagal menginstal {module}")

    def handle_installation(self):
        Logo("barme")
        if "--install" in sys.argv:
            print(f"\n {H}\u2022{N} Menginstal modul yang diperlukan...")
            self.install_modules()
            print(f" {H}\u2713{N} Semua modul telah diinstal. Silakan jalankan skrip lagi.")
            sys.exit(0)

        if self.missing_modules:
            print(f" {M}!{N} Modul berikut belum terinstal:", ", ".join(self.missing_modules))
            print(f" {H}>{N} Silakan jalankan perintah:\npython {sys.argv[0]} --install")
            sys.exit(1)

class Kynara:
    TARGET_FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]
    PYTHON_INCLUDE = "/data/data/com.termux/files/usr/include/python3.12"

    def __init__(self):
        python_checker = PythonVersionChecker((3, 12))  # Versi Python 3.12
        python_checker.check_version()
        self.module_manager = ModuleManager()
        self.module_manager.handle_installation()

    def compile_cpp_to_so(self):
        cpp_files = []
        for folder in self.TARGET_FOLDERS:
            cpp_files.extend(glob.glob(f"{folder}/*.cpp"))

        if not cpp_files:
            print(f"{M}!{N} Tidak ada file .cpp yang ditemukan untuk dikompilasi.")
            return False

        print(f"{H}\u2713{N} Ditemukan {len(cpp_files)} file .cpp, memulai kompilasi...")

        for file in cpp_files:
            output_file = file.replace(".cpp", ".so")
            compile_command = [
                "g++", "-shared", "-fPIC", "-O2", "-std=c++11",
                f"-I{self.PYTHON_INCLUDE}", file, "-o", output_file
            ]
            print(f"• Menjalankan: {' '.join(compile_command)}")
            result = subprocess.run(compile_command, capture_output=True, text=True)

            if result.returncode != 0:
                print(f"{M}!{N} Error saat mengompilasi {file}:")
                print(result.stderr)
                return False
            else:
                print(f"{H}\u2713{N} Berhasil mengompilasi {file} -> {output_file}")

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
            print(f"{M}!{N} Tidak ditemukan file .so, memulai proses enkripsi...")
            if self.compile_cpp_to_so():
                print(f"{H}\u2713{N} Enkripsi selesai, menjalankan program...")
                from bluid.menu import yayanxd
                yayanxd().hapus()
                yayanxd().menu()
            else:
                print(f"{M}!{N} Gagal mengompilasi file .cpp!")

if __name__ == "__main__":
    kyna = Kynara()
    kyna.run()
