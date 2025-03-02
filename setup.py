# setup.py
import os
from setuptools import setup, Extension
from Cython.Build import cythonize

FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]

extensions = []
for folder in FOLDERS:
    if not os.path.exists(folder):
        continue
    for file in os.listdir(folder):
        if file.endswith(".c"):
            module_path = os.path.join(folder, file)
            module_name = module_path.replace("/", ".").replace(".c", "")
            extensions.append(
                Extension(
                    module_name,
                    [module_path],
                    extra_compile_args=["-O3", "-w"]
                )
            )

setup(
    ext_modules=cythonize(
        extensions,
        language_level=3,
        compiler_directives={'binding': True}
    )
)
