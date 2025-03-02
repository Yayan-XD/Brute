import os
from setuptools import setup, Extension
from Cython.Build import cythonize
import shutil

FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]

extensions = []
for folder in FOLDERS:
    if not os.path.exists(folder):
        print(f"[!] Folder {folder} tidak ditemukan")
        continue
    for file in os.listdir(folder):
        if file.endswith(".c"):
            module_name = f"{folder}.{file.replace('.c', '')}"
            module_path = os.path.join(folder, file)
            extensions.append(
                Extension(
                    module_name,
                    [module_path],
                    extra_compile_args=["-O3"]
                )
            )

if os.path.exists("build"):
    shutil.rmtree("build")

setup(
    ext_modules=cythonize(extensions, language_level=3, build_dir="build"),
    script_args=["build_ext", "--inplace"]
)
