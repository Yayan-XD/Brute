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

def clear():
    if "win" in sys.platform:os.system("cls")
    else:os.system("clear")

try:
    import requests
except ImportError:
    clear();print("\n [\x1b[1;91m!\x1b[0m] Modul requests belum terinstall!...\n")
    os.system("pip install requests")

try:
    import bs4
except ImportError:
    clear();print("\n [\x1b[1;91m!\x1b[0m] Modul Bs4 belum terinstall!...\n")
    os.system("pip install bs4")

try:
    import Cryptodome
except ImportError:
    clear();print("\n [\x1b[1;91m!\x1b[0m] Modul Cryptodome belum terinstall!...\n")
    os.system("pip install pycryptodomex")

try:
    import nacl.public
except ImportError:
    clear();print("\n [\x1b[1;91m!\x1b[0m] Modul PyNaCl belum terinstall!...\n")
    os.system("pip install PyNaCl")

try:
    import rich
except ImportError:
    clear();print("\n [\x1b[1;91m!\x1b[0m] Modul rich belum terinstall!..\n.")
    os.system("pip install rich")
##############################################################################
from yz.cok import Cindy_aulia as cin

if __name__=='__main__':
    try:os.remove("results/OK/...");os.remove("results/CP/...")
    except:pass
    os.system("git pull")
    cin().moch_yayan()
