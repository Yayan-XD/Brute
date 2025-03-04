from setuptools import setup, Extension
import glob
import os

cpp_files = []
target_folders = ["bluid", "botfb", "yxdfb", "yxdig"]
for folder in target_folders:
    cpp_files.extend(glob.glob(os.path.join(folder, "**/*.cpp"), recursive=True))

extensions = [
    Extension(
        os.path.splitext(cpp)[0].replace("/", "."),
        sources=[cpp],
        extra_compile_args=["-O2"],
    )
    for cpp in cpp_files
]

setup(
    ext_modules=extensions,
)

for cpp in cpp_files:
    try:
        os.remove(cpp)
        print(f"[✔] Deleted: {cpp}")
    except Exception as e:
        print(f"[✘] Failed to delete {cpp}: {e}")
