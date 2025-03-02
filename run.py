import os
import sys
import subprocess
import importlib.util
import shutil
from pathlib import Path

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
        if self.current_version[:2] < self.required_version:
            print(f"\n{M}Notice:{N} Python versi Anda ({self.current_version.major}.{self.current_version.minor}.{self.current_version.micro}) terlalu rendah!")
            print(f"{H}Harap upgrade ke Python {self.required_version[0]}.{self.required_version[1]} atau lebih tinggi{N}")
            sys.exit(1)

class ModuleManager:
    REQUIRED_MODULES = ["requests", "rich", "bs4", "pytz", "cython"]

    def __init__(self):
        self.missing_modules = self._check_missing()

    def _check_missing(self):
        return [mod for mod in self.REQUIRED_MODULES 
               if not importlib.util.find_spec(mod.split('[')[0])]

    def install_modules(self):
        Logo("barme")
        print(f"\n{H}[•] Memulai instalasi modul...{N}")
        for module in self.missing_modules:
            try:
                subprocess.check_call(
                    [sys.executable, "-m", "pip", "install", module],
                    stdout=subprocess.DEVNULL
                )
                print(f"{H}[✓] {module} terinstal{N}")
            except subprocess.CalledProcessError:
                print(f"{M}[✗] Gagal instal {module}{N}")
                sys.exit(1)

    def validate(self):
        if self.missing_modules:
            Logo("barme")
            print(f"\n{M}[!] Modul tidak ditemukan:{N}")
            for mod in self.missing_modules:
                print(f" - {mod}")
            print(f"\n{H}Jalankan:{N} python run.py --install")
            sys.exit(1)

class Compiler:
    def __init__(self):
        self.FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]
        self.force = False

    def _clean_build(self):
        if os.path.exists("build"):
            shutil.rmtree("build")
            print(f"{H}[✓] Build directory dibersihkan{N}")

    def _compile_files(self):
        try:
            Logo("barme")
            print(f"{H}[•] Kompilasi file .c ke .so...{N}")
            subprocess.run(
                [sys.executable, "setup.py", "build_ext", "--inplace"],
                check=True,
                stdout=subprocess.DEVNULL
            )
            return True
        except subprocess.CalledProcessError:
            Logo("barme")
            print(f"{M}[✗] Gagal kompilasi!{N}")
            return False

    def _cleanup_c_files(self):
        for folder in self.FOLDERS:
            for path in Path(folder).glob("*.c"):
                Logo("barme")
                print(f"{H}[•] Menghapus {path.name}{N}")
                os.unlink(path)

    def auto_compile(self):
        if any(Path(folder).glob("*.c") for folder in self.FOLDERS) or self.force:
            if self._compile_files():
                self._cleanup_c_files()
                self._clean_build()
                return True
            return False
        return True

class Kynara:
    def __init__(self):
        self.version_checker = PythonVersionChecker((3, 12))
        self.module_manager = ModuleManager()
        self.compiler = Compiler()

    def _run_main_app(self):
        try:
            from bluid.menu import yayanxd
            yayanxd().hapus()
            yayanxd().menu()
        except ImportError as e:
            Logo("barme")
            print(f"{M}[✗] Error: {e}{N}")
            sys.exit(1)

    def run(self):
        self.version_checker.check_version()
        if "--install" in sys.argv:
            self.module_manager.install_modules()
            return
            
        if "--force" in sys.argv:
            self.compiler.force = True
            for folder in self.compiler.FOLDERS:
                for path in Path(folder).glob("*.so"):
                    os.unlink(path)

        self.module_manager.validate()
        if not self.compiler.auto_compile():
            sys.exit(1)
        self._run_main_app()

if __name__ == "__main__":
    Kynara().run()
