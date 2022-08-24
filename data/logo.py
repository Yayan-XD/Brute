#######################################################
# Name           : Brute Facebook (BF)                #
# File           : logo.py                            #
# Author         : Moch Yayan Juan Alvredo XD.        #
# Github         : https://github.com/Yayan-XD        #
# Facebook       : https://www.facebook.com/KM39453   #
# Website        : https://www.yayanxd.my.id          #
# Python version : 0.4                                #
#######################################################

############# DON'T REMOVE THIS FUNCTIONS #############


import sys, os, random

#---- MODULE RICH IN PYTHON -------
from rich import print as prints
from rich.panel import Panel
rc = random.choice

###---[ WARNA RICH ]---###
Z2 = "[#000000]" # HITAM
M2 = "[#FF0000]" # MERAH
H2 = "[#00FF00]" # HIJAU
K2 = "[#FFFF00]" # KUNING
B2 = "[#00C8FF]" # BIRU
U2 = "[#AF00FF]" # UNGU
N2 = "[#FF00FF]" # PINK
C2 = "[#00FFFF]" # BIRU MUDA
P2 = "[bold white]" # PUTIH
J2 = "[#FF8F00]" # JINGGA
A2 = "[#AAAAAA]" # ABU-ABU
ran_rich = rc([K2,C2,J2,H2,U2])

class Logo:

    def __init__(self):
        if "linux" in sys.platform.lower():
            try:os.system("clear")
            except:pass
        elif "win" in sys.platform.lower():
            try:os.system("cls")
            except:pass
        else:
            try:os.system("clear")
            except:pass

    def log(self):
        prints(Panel(f"""[bold]{ran_rich}██████  ██████  ██    ██ ████████ ███████     ███████ ██████  
██   ██ ██   ██ ██    ██    ██    ██          ██      ██   ██ 
██████  ██████  ██    ██    ██    █████       █████   ██████  
██   ██ ██   ██ ██    ██    ██    ██          ██      ██   ██ 
██████  ██   ██  ██████     ██    ███████     ██      ██████
    {P2}Selamat datang di script brute {B2}facebook{P2} version {K2}4{P2}.{K2}7{P2}""",padding=(0,8),style="bold white"))