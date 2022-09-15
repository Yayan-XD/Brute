#######################################################
# Name           : Brute Instagram (BG)               #
# File           : logo1.py                           #
# Author         : Moch Yayan Juan Alvredo XD.        #
# Github         : https://github.com/Yayan-XD        #
# Facebook       : https://www.facebook.com/KM39453   #
# Website        : https://www.yayanxd.my.id          #
# Python version : 0.4                                #
#######################################################

############# DON'T REMOVE THIS FUNCTIONS #############

import os, sys

#----------- MODULE RICH -------------
from rich import print as prints
from rich.panel import Panel

reed = "[bold red]"
blue = "[bold blue]"

class Turu:

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
        prints(Panel(f"""{blue} ____             _         ______                  {reed} _____ _____ 
{blue}|  _ \           | |       |  ____|                 {reed}|_   _/ ____|
{blue}| |_) |_ __ _   _| |_ ___  | |__ ___  _ __ ___ ___  {reed}  | || |  __ 
{blue}|  _ <| '__| | | | __/ _ \ |  __/ _ \| '__/ __/ _ \ {reed}  | || | |_ |
{blue}| |_) | |  | |_| | ||  __/ | | | (_) | | | (_|  __/ {reed} _| || |__| |
{blue}|____/|_|   \__,_|\__\___| |_|  \___/|_|  \___\___| {reed}|_____\_____|
                        {reed}BY Yayan XD. @2022""", style="bold white", width=70))