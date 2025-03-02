import os
import sys
import platform
import subprocess
import importlib.util
import ctypes

M = "\x1b[0;31m"  # Merah
H = "\x1b[0;32m"  # Hijau
N = "\x1b[0m"     # Reset warna

OS_NAME = platform.system().lower()  
ARCH = platform.architecture()[0]    

FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]

def cek_file_so():
    for folder in FOLDERS:
        for file in os.listdir(folder):
            if file.endswith(".so") and OS_NAME in file and ARCH in file:
                so_path = os.path.join(folder, file)
                try:
                    ctypes.CDLL(so_path)  
                    return so_path
                except OSError:
                    continue
    return None

def compile_c_to_so():
    print(f"\n{M}✘ Tidak ada file .so yang sesuai dengan OS Anda ({OS_NAME}-{ARCH})!{N}")
    print(f"{H}Memulai proses kompilasi ulang dari file .c...{N}")
    
    subprocess.run([sys.executable, "setup.py"], check=True)

    print(f"\n{H}✓ Kompilasi selesai! Coba jalankan ulang:{N} python run.py")
    sys.exit(0)

class ModuleManager:
    REQUIRED_MODULES = ["requests", "rich", "bs4"]

    def __init__(self):
        self.missing_modules = self.check_modules()

    def check_modules(self):
        return [module for module in self.REQUIRED_MODULES if importlib.util.find_spec(module) is None]

    def install_modules(self):
        for module in self.missing_modules:
            try:
                subprocess.check_call([sys.executable, "-m", "pip", "install", module])
                print(f"\n {H}✓{N} Berhasil menginstal {module}")
            except subprocess.CalledProcessError:
                print(f"\n {M}!{N} Gagal menginstal {module}")

    def handle_installation(self):
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
        self.module_manager = ModuleManager()
        self.module_manager.handle_installation()

    def run(self):
        file_so = cek_file_so()

        if "--yxd" in sys.argv:
            compile_c_to_so()

        if file_so:
            print(f"\n{H}✓ Menjalankan {file_so}{N}")
            try:
                lib = ctypes.CDLL(file_so)  
                lib.main()  
            except Exception as e:
                print(f"{M}✘ Gagal menjalankan: {e}{N}")
        else:
            print(f"{M}✘ Tidak ada file .so yang sesuai! Jalankan:{N} python run.py --yxd")
            sys.exit(1)

        from bluid.menu import yayanxd
        yayanxd().hapus()
        yayanxd().menu()

if __name__ == "__main__":
    if sys.version_info < (3, 6):
        print(f"{M}✘ Script ini membutuhkan Python 3.6 atau lebih tinggi!{N}")
        sys.exit(1)

    kyna = Kynara()
    kyna.run()
