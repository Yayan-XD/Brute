#Hallo anak ngentod :v

import sys, os

N = '\x1b[0m'    # WARNA MATI
B = '\x1b[1;94m' # BIRU
M = '\x1b[1;91m' # MERAH

if __name__ == '__main__':
    os.system("git pull")
    os.system("clear")
    print("\n")
    try:
        arg_command = sys.argv[1]
    except IndexError:
        arg_command = ""
    if arg_command == 'id':
    	os.system("python language/id/run.py")
    elif arg_command == 'en':
    	os.system("python language/us/run.py")
    else:
        exit(f"[{M}!{N}] Jika ingin menggunakan versi bahasa Indonesia\n{N}[{B}>{N}] Ketik python run.py id\n\n[{M}!{N}] If you want to use the English version\n{N}[{B}>{N}] Type python run.py en")
