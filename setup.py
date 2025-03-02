import os
import sys
from setuptools import setup, Extension
from Cython.Build import cythonize

FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]

extensions = []
for folder in FOLDERS:
    for file in os.listdir(folder):
        if file.endswith(".c"):
            module_name = os.path.splitext(file)[0]
            module_path = os.path.join(folder, file)  
            extensions.append(Extension(f"{folder}.{module_name}", [module_path]))

setup(
    ext_modules=cythonize(extensions, language_level=3),
    script_args=["build_ext", "--inplace"]
)
