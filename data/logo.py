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


import sys, os

#---- MODULE RICH IN PYTHON -------
from rich import print as prints
from rich.panel import Panel
reed = "[bold red]"
blue = "[bold blue]"

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
        self.log()

    def log(self):
        prints(Panel(f"""{blue} ____             _         ______                  {reed} ______ ____  
{blue}|  _ \           | |       |  ____|                 {reed}|  ____|  _ \ 
{blue}| |_) |_ __ _   _| |_ ___  | |__ ___  _ __ ___ ___  {reed}| |__  | |_) |
{blue}|  _ <| '__| | | | __/ _ \ |  __/ _ \| '__/ __/ _ \ {reed}|  __| |  _ < 
{blue}| |_) | |  | |_| | ||  __/ | | | (_) | | | (_|  __/ {reed}| |    | |_) |
{blue}|____/|_|   \__,_|\__\___| |_|  \___/|_|  \___\___| {reed}|_|    |____/ 
                        {reed}BY Yayan XD. @2022""", style="bold white", width=70))