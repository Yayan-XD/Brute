import os
import sys
from setuptools import setup, Extension
from setuptools.command.build_ext import build_ext
from Cython.Build import cythonize

FOLDERS = ["bluid", "botfb", "yxdfb", "yxdig"]

class BuildExtWithCleanup(build_ext):
    def run(self):
        super().run()
        for ext in self.extensions:
            for source in ext.sources:
                if source.endswith('.c'):
                    try:
                        os.remove(source)
                        print(f"🔄 Menghapus file sumber C: {source}")
                    except OSError as e:
                        print(f"⚠️ Gagal menghapus {source}: {e}")

extensions = []
for folder in FOLDERS:
    folder_path = os.path.join(os.getcwd(), folder)
    if not os.path.exists(folder_path):
        print(f"⚠️ Folder {folder} tidak ditemukan!")
        continue
        
    for file in os.listdir(folder_path):
        if file.endswith(".c"):
            module_name = os.path.splitext(file)[0]
            module_path = os.path.join(folder_path, file)
            extensions.append(
                Extension(
                    name=f"{folder}.{module_name}",
                    sources=[module_path],
                    extra_compile_args=["-O3", "-w"]
                )
            )

setup(
    ext_modules=cythonize(extensions, language_level=3),
    cmdclass={
        'build_ext': BuildExtWithCleanup,
    },
    script_args=["build_ext", "--inplace"]
)
