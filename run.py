#######################################################
# Name           : Brute Facebook (BF)                #
# File           : run.py                             #
# Author         : Moch Yayan Juan Alvredo XD.        #
# Github         : https://github.com/Yayan-XD        #
# Facebook       : https://www.facebook.com/KM39453   #
# Website        : https://www.yayanxd.my.id          #
# Python version : 0.4                                #
#######################################################

############# DON'T REMOVE THIS FUNCTIONS #############

import os, sys

M = '\x1b[1;91m' # MERAH
H = '\x1b[1;92m' # HIJAU
N = '\x1b[0m'    # WARNA MATI

def clear():
    if "win" in sys.platform:os.system("cls")
    else:os.system("clear")

try:
    import requests
except ImportError:
    clear();print(f"\n [{M}!{N}] Modul {H}requests{N} belum terinstall!...\n")
    os.system("pip install requests")

try:
    import bs4
except ImportError:
    clear();print(f"\n [{M}!{N}] Modul {H}Bs4{N} belum terinstall!...\n")
    os.system("pip install bs4")

try:
    import Cryptodome
except ImportError:
    clear();print(f"\n [{M}!{N}] Modul {H}Cryptodome{N} belum terinstall!...\n")
    os.system("pip install pycryptodomex")

try:
    import nacl.public
except ImportError:
    clear();print(f"\n [{M}!{N}] Modul {H}PyNaCl{N} belum terinstall!...\n")
    os.system("pip install PyNaCl")

try:
    import rich
except ImportError:
    clear();print(f"\n [{M}!{N}] Modul {H}Rich{N} belum terinstall!..\n.")
    os.system("pip install rich")
##############################################################################
from yz.cok import Cindy_aulia as cin

if __name__=='__main__':
    try:os.remove("results/OK/...");os.remove("results/CP/...")
    except:pass
    os.system("git pull")
    cin().moch_yayan()
