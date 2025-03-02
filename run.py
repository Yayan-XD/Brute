import os
import sys
import platform
import subprocess
import importlib.util

M = "\x1b[0;31m"  # Merah
H = "\x1b[0;32m"  # Hijau
N = "\x1b[0m"     # Reset warna

OS_NAME = platform.system().lower()
ARCH = platform.architecture()[0]

FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]

# Periksa dan instal Cython jika belum terinstal
REQUIRED_MODULES = ["requests", "rich", "bs4", "cython"]

def ensure_cython_installed():
    if importlib.util.find_spec("Cython") is None:
        print(f"{H}Menginstal Cython...{N}")
        subprocess.check_call([sys.executable, "-m", "pip", "install", "cython"])
        print(f"{H}✓ Cython berhasil diinstal!{N}")

ensure_cython_installed()

def needs_recompile():
    for folder in FOLDERS:
        for file in os.listdir(folder):
            if file.endswith(".c"):
                so_file = os.path.join(folder, file.replace(".c", ".so"))
                c_file = os.path.join(folder, file)

                if not os.path.exists(so_file) or os.path.getmtime(c_file) > os.path.getmtime(so_file):
                    return True
    return False

def cek_file_so():
    for folder in FOLDERS:
        for file in os.listdir(folder):
            if file.endswith(".so"):
                return True
    return False

def compile_c_to_so():
    print(f"\n{M}✘ Tidak ada file .so yang sesuai dengan OS Anda ({OS_NAME}-{ARCH})!{N}")
    print(f"{H}Memulai proses kompilasi ulang dari file .c...{N}")
    subprocess.run([sys.executable, "setup.py", "build_ext", "--inplace"], check=True)
    print(f"\n{H}✓ Kompilasi selesai! Coba jalankan ulang:{N} python run.py")
    sys.exit(0)

class ModuleManager:
    def __init__(self):
        self.missing_modules = self.check_modules()

    def check_modules(self):
        return [module for module in REQUIRED_MODULES if importlib.util.find_spec(module) is None]

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
        from bluid.menu import yayanxd
        yayanxd().hapus()
        yayanxd().menu()

if __name__ == "__main__":
    if sys.version_info < (3, 12):
        print(f"{M}✘ Script ini membutuhkan Python 3.12 atau lebih tinggi!{N}")
        sys.exit(1)

    ModuleManager().handle_installation()

    if needs_recompile():
        print("\n🔄 File .c telah diperbarui! Mengompilasi ulang ke .so...")
        subprocess.run([sys.executable, "setup.py", "build_ext", "--inplace"], check=True)
        print("✅ Kompilasi selesai!\n")
    
    if cek_file_so():
        kyna = Kynara()
        kyna.run()
    else:
        print(f"{M}✘ Tidak ada file .so yang sesuai! Jalankan:{N} python run.py --yxd")
        sys.exit(1)
