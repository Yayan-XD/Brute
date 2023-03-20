#######################################################
# Name           : Brute Facebook (BF)                #
# File           : logo.py                            #
# Author         : Moch Yayan Juan Alvredo XD.        #
# Github         : https://github.com/Yayan-XD        #
# Facebook       : https://www.facebook.com/KM39453   #
# Website        : https://www.yayanxd.my.id          #
# Python version : 3.11                               #
#######################################################

############# DON'T REMOVE THIS FUNCTIONS #############

import sys, os, datetime

#---- MODULE RICH IN PYTHON -------
from rich import print as prints
from datetime import datetime
from rich.panel import Panel

class Logo:

    def __init__(self):
        if "win" in sys.platform:os.system("cls")
        else:os.system("clear")
        prints(Panel(f"""[bold blue]   ___           __        ____             __             __  
[bold blue]  / _ )______ __/ /____   / __/__ ________ / /  ___  ___  / /__
[bold red] / _  / __/ // / __/ -_) / _// _ `/ __/ -_) _ \/ _ \/ _ \/  '_/
[bold red]/____/_/  \_,_/\__/\__/ /_/  \_,_/\__/\__/_.__/\___/\___/_/\_\ 

            [white]code by [bold yellow]Yayan XD.[white] (founder of [bold cyan]xnscode[/])""", style="bold white", width=70, title=f"[cyan]{self.waktu()}"))
    def waktu(self):
        now = datetime.now()
        hours = now.hour
        if 4 <= hours < 12:timenow = "good morning"
        elif 12 <= hours < 15:timenow = "good afternoog"
        elif 15 <= hours < 18:timenow = "good evening"
        else:timenow = "good night"
        return timenow

Logo()