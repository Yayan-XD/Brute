import os
import shutil
from setuptools import setup, Extension
from Cython.Build import cythonize

FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]

extensions = []
for folder in FOLDERS:
    for file in os.listdir(folder):
        if file.endswith(".c"):
            module_name = f"{folder}.{os.path.splitext(file)[0]}"  
            extensions.append(Extension(module_name, [os.path.join(folder, file)]))

setup(
    ext_modules=cythonize(extensions, language_level=3),
    script_args=["build_ext", "--inplace"]
)

for folder in FOLDERS:
    os.makedirs(f"{folder}_so", exist_ok=True)
    for file in os.listdir(folder):
        if file.endswith(".so"):
            shutil.move(os.path.join(folder, file), os.path.join(f"{folder}_so", file))
            print(f"File {file} dipindahkan ke {folder}_so/")
