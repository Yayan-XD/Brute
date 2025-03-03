import os
import glob
import sys
import subprocess
import importlib.util
import platform
from distutils.core import setup, Extension
from bluid.logo import Logo

M = "\x1b[0;31m"
H = "\x1b[0;32m"
N = "\x1b[0m"

def is_termux():
    return os.path.exists('/data/data/com.termux/files/usr')

class PythonVersionChecker:
    def __init__(self):
        self.required = (3, 12)
        self.current = sys.version_info

    def check_version(self):
        Logo("barme")
        if self.current >= self.required:
            return
        print(f"{M}Error:{N} Python 3.12+ required (current: {platform.python_version()})")
        if is_termux():
            print(f"\n{H}Untuk Termux:{N}\n1. pkg install python3.12\n2. pkg install python3.12-dev")
        sys.exit(1)

class TermuxManager:
    @staticmethod
    def setup():
        if not is_termux():
            return
            
        print(f"{H}•{N} Setting up Termux environment...")
        cmds = [
            "pkg upgrade -y",
            "pkg install -y python3.12 python3.12-dev clang make libffi openssl libjpeg-turbo",
            "pip3.12 install --upgrade pip setuptools cython"
        ]
        
        try:
            for cmd in cmds:
                subprocess.run(cmd.split(), check=True)
            print(f"{H}✓{N} Termux setup completed")
        except Exception as e:
            print(f"{M}Error:{N} Termux setup failed: {str(e)}")
            sys.exit(1)

class Kynara:
    TARGET_FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]
    
    def __init__(self):
        TermuxManager.setup()
        PythonVersionChecker().check_version()
        self.check_arch()
        self.module_check()

    def check_arch(self):
        arch = platform.machine()
        bits = 64 if sys.maxsize > 2**32 else 32
        print(f"{H}•{N} Architecture: {arch} ({bits}-bit)")

    def module_check(self):
        required = ["requests", "rich", "bs4", "pytz"]
        missing = [m for m in required if not importlib.util.find_spec(m)]
        
        if missing:
            print(f"{M}Missing modules:{N} {', '.join(missing)}")
            self.install_modules(missing)

    def install_modules(self, modules):
        print(f"{H}•{N} Installing dependencies...")
        py_exec = "python3.12" if is_termux() else sys.executable
        try:
            subprocess.run([py_exec, "-m", "pip", "install"] + modules, check=True)
            print(f"{H}✓{N} Dependencies installed")
        except Exception as e:
            print(f"{M}Install failed:{N} {str(e)}")
            sys.exit(1)

    def get_compile_args(self):
        args = {
            "extra_compile_args": [
                "-O3", 
                "-Wno-unreachable-code",
                "-Wno-unused-function",
                "-fPIC"
            ],
            "extra_link_args": [],
            "include_dirs": []
        }

        if is_termux():
            args["extra_compile_args"] += [
                "-I/data/data/com.termux/files/usr/include/python3.12",
                "-march=armv8-a" if "aarch64" in platform.machine() else "-march=armv7-a"
            ]
            args["extra_link_args"] += [
                "-L/data/data/com.termux/files/usr/lib",
                "-llog",
                "-landroid"
            ]
        elif sys.platform == "linux":
            args["extra_compile_args"].append("-std=c++11")
            args["extra_link_args"].append("-shared")
        elif sys.platform == "win32":
            args["extra_compile_args"].append("/O2")
            
        return args

    def build_extensions(self):
        cpp_files = []
        for folder in self.TARGET_FOLDERS:
            cpp_files += glob.glob(os.path.join(folder, "**/*.cpp"), recursive=True)

        if not cpp_files:
            print(f"{M}Error:{N} No .cpp files found")
            sys.exit(1)

        flags = self.get_compile_args()
        
        extensions = [
            Extension(
                name=os.path.splitext(f)[0].replace("/", "."),
                sources=[f],
                **flags
            ) for f in cpp_files
        ]

        try:
            setup(
                name="app_modules",
                ext_modules=extensions,
                script_args=["build_ext", "--force", "--inplace"],
                options={'build_ext': {'debug': False, 'inplace': True}}
            )
            return True
        except Exception as e:
            print(f"{M}Build failed:{N} {str(e)}")
            return False

    def run(self):
        if not any(glob.glob(os.path.join(f, "*.so")) for f in self.TARGET_FOLDERS):
            print(f"\n{H}🚀 Starting build for Python 3.12...{N}")
            if self.build_extensions():
                print(f"\n{H}✅ Build successful!{N}")
            else:
                sys.exit(1)
        
        try:
            from bluid.menu import yayanxd
            yayanxd().hapus()
            yayanxd().menu()
        except ImportError as e:
            print(f"{M}Fatal error:{N} {str(e)}")
            if is_termux():
                print(f"{H}💡 Tip:{N} Run: export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:{os.getcwd()}")

if __name__ == "__main__":
    Kynara().run()
