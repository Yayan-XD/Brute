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
            print(f"{H}✓{N} Python versi {self.current_version[0]}.{self.current_version[1]} OK!")
        elif self.current_version[:2] < self.required_version:
            print(f"{M}!{N} Versi Python terlalu rendah. Upgrade ke {self.required_version[0]}.{self.required_version[1]}.")
            sys.exit(1)
        else:
            print(f"{M}!{N} Versi Python lebih tinggi dari yang disarankan.")
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
                print(f"{H}✓{N} Berhasil menginstal {module}")
            except subprocess.CalledProcessError:
                print(f"{M}!{N} Gagal menginstal {module}")

    def handle_installation(self):
        Logo("barme")
        if "--install" in sys.argv:
            print(f"{H}•{N} Menginstal modul yang diperlukan...")
            self.install_modules()
            print(f"{H}✓{N} Semua modul telah diinstal. Jalankan skrip lagi.")
            sys.exit(0)

        if self.missing_modules:
            print(f"{M}!{N} Modul berikut belum terinstal:", ", ".join(self.missing_modules))
            print(f"{H}>{N} Jalankan: python {sys.argv[0]} --install")
            sys.exit(1)

class Kynara:
    TARGET_FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]

    def __init__(self):
        print(f"{H}•{N} Memulai Kynara...")
        python_checker = PythonVersionChecker((3, 12))
        python_checker.check_version()
        self.module_manager = ModuleManager()
        self.module_manager.handle_installation()

    def check_gpp(self):
        try:
            subprocess.run(["g++", "--version"], check=True, capture_output=True, text=True)
            print(f"{H}✓{N} Compiler g++ ditemukan.")
            return True
        except FileNotFoundError:
            print(f"{M}!{N} Compiler g++ tidak ditemukan! Instal dulu.")
            return False

    def compile_cpp_to_so(self):
        if not self.check_gpp():
            return False

        cpp_files = []
        for folder in self.TARGET_FOLDERS:
            cpp_files.extend(glob.glob(f"{folder}/*.cpp"))

        if not cpp_files:
            print(f"{M}!{N} Tidak ada file .cpp yang ditemukan untuk dikompilasi.")
            return False

        print(f"{H}✓{N} Ditemukan {len(cpp_files)} file .cpp, memulai kompilasi...")

        try:
            for cpp_file in cpp_files:
                output_name = cpp_file.replace(".cpp", ".so")
                compile_cmd = f"g++ -shared -fPIC -O2 -std=c++11 {cpp_file} -o {output_name}"
                print(f"{H}•{N} Menjalankan: {compile_cmd}")

                result = subprocess.run(compile_cmd, shell=True, capture_output=True, text=True)

                if result.returncode != 0:
                    print(f"{M}!{N} Error saat mengompilasi {cpp_file}:")
                    print(result.stderr)
                    return False
                else:
                    print(f"{H}✓{N} Berhasil mengompilasi: {cpp_file} -> {output_name}")

            return True
        except Exception as e:
            print(f"{M}!{N} Gagal mengompilasi: {e}")
            return False

    def run(self):
        print(f"{H}•{N} Memeriksa file .so yang tersedia...")

        so_files = []
        for folder in self.TARGET_FOLDERS:
            so_files.extend(glob.glob(f"{folder}/*.so"))

        if so_files:
            print(f"{H}✓{N} File .so ditemukan, menjalankan program...")
            from bluid.menu import yayanxd
            yayanxd().hapus()
            yayanxd().menu()
        else:
            print(f"{M}!{N} Tidak ditemukan file .so, memulai proses enkripsi...")
            if self.compile_cpp_to_so():
                print(f"{H}✓{N} Enkripsi selesai, menjalankan program...")
                from bluid.menu import yayanxd
                yayanxd().hapus()
                yayanxd().menu()
            else:
                print(f"{M}!{N} Gagal mengompilasi file .cpp!")

if __name__ == "__main__":
    kyna = Kynara()
    kyna.run()
