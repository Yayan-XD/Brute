import os
import sys
import platform
import subprocess
import importlib.util
import shutil

from bluid.logo import Logo

M = "\x1b[0;31m"  # Merah
H = "\x1b[0;32m"  # Hijau
N = "\x1b[0m"     # Reset warna

class App:
    def __init__(self):
        self.FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]
        self.REQUIRED_MODULES = ["requests", "rich", "bs4", "pytz"]
        self.force_compile = False

    def _clean_build(self):
        if os.path.exists("build"):
            shutil.rmtree("build")
            print(f"{H}[+] Build directory cleaned{N}")

    def _show_logo(self, style="barme"):
        Logo(style).display()

    class ModuleManager:
        def __init__(self, required_modules):
            self.required_modules = required_modules
            self.missing = self._check_missing()

        def _check_missing(self):
            return [mod for mod in self.required_modules 
                   if not importlib.util.find_spec(mod.split('[')[0])]

        def install(self):
            for mod in self.missing:
                try:
                    subprocess.run(
                        [sys.executable, "-m", "pip", "install", mod],
                        check=True,
                        stdout=subprocess.DEVNULL
                    )
                    print(f"{H}[✓] {mod} installed{N}")
                except Exception as e:
                    print(f"{M}[!] Failed install {mod}: {e}{N}")
                    sys.exit(1)

        def validate(self):
            if self.missing:
                print(f"\n{M}[!] Missing modules: {', '.join(self.missing)}{N}")
                print(f"{H}[>] Run: python run.py --install{N}")
                sys.exit(1)

    def _get_c_files(self):
        files = []
        for folder in self.FOLDERS:
            if not os.path.exists(folder):
                continue
            for file in os.listdir(folder):
                if file.endswith(".c"):
                    c_file = os.path.join(folder, file)
                    so_file = c_file.replace(".c", ".so")
                    
                    if self.force_compile or not os.path.exists(so_file):
                        files.append(c_file)
                    else:
                        # Cek timestamp
                        c_time = os.path.getmtime(c_file)
                        so_time = os.path.getmtime(so_file)
                        if c_time > so_time:
                            files.append(c_file)
        return files

    def _compile_files(self, files):
        self._show_logo()
        print(f"\n{H}[~] Compiling {len(files)} files...{N}")
        
        try:
            self._clean_build()
            subprocess.run(
                [sys.executable, "setup.py", "build_ext", "--inplace"],
                check=True,
                stdout=subprocess.DEVNULL
            )
            
            for root, _, files in os.walk("build"):
                for file in files:
                    if file.endswith(".so"):
                        src = os.path.join(root, file)
                        dest = os.path.join(root.split(os.sep)[1], file)
                        shutil.copy2(src, dest)
            
            self._clean_build()
            print(f"{H}[✓] Compile success!{N}")
            
        except Exception as e:
            print(f"{M}[!] Compile failed: {e}{N}")
            sys.exit(1)

    def run(self):

        if "--install" in sys.argv:
            manager = self.ModuleManager(self.REQUIRED_MODULES)
            manager.install()
            return
            
        if "--force" in sys.argv:
            self.force_compile = True
            print(f"{H}[!] Force compile enabled{N}")

        manager = self.ModuleManager(self.REQUIRED_MODULES)
        manager.validate()

        files_to_compile = self._get_c_files()
        if files_to_compile:
            self._compile_files(files_to_compile)
        else:
            print(f"{H}[✓] All files are up-to-date{N}")

        try:
            from bluid.menu import yayanxd
            self._show_logo()
            yayanxd().hapus()
            yayanxd().menu()
        except ImportError as e:
            print(f"{M}[!] Failed to start app: {e}{N}")
            sys.exit(1)

if __name__ == "__main__":
    App().run()
