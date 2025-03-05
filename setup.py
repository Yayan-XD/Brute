from setuptools import setup, Extension
import glob
import os
from rich.progress import Progress, BarColumn, TextColumn
from rich.console import Console

from bluid.logo import Logo

console = Console()

Logo("barme")

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

with Progress(
    TextColumn("[cyan]🚀 loading..."),
    BarColumn(),
    TextColumn("[progress.percentage]{task.percentage:>3.0f}%"),
) as progress:
    task = progress.add_task("Compiling .cpp files", total=len(cpp_files))

    for cpp in cpp_files:
        try:
            setup(ext_modules=[Extension(os.path.splitext(cpp)[0].replace("/", "."), sources=[cpp], extra_compile_args=["-O2"])])
            console.print(f"[green]✓[/green] Berhasil mengompilasi: {cpp}")
            Logo("barme")
        except Exception as e:
            console.print(f"[red]✘[/red] Gagal mengompilasi {cpp}: {e}")

        progress.update(task, advance=1)

for cpp in cpp_files:
    try:
        os.remove(cpp)
        console.print(f"[yellow]🗑️ Menghapus {cpp}[/yellow]")
    except Exception as e:
        console.print(f"[red]✘[/red] Gagal menghapus {cpp}: {e}")
