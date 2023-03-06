#######################################################
# Name           : Brute Facebook (BF)                #
# File           : lainya.py                          #
# Author         : Moch Yayan Juan Alvredo XD.        #
# Github         : https://github.com/Yayan-XD        #
# Facebook       : https://www.facebook.com/KM39453   #
# Website        : https://www.yayanxd.my.id          #
# Python version : 0.4                                #
#######################################################

############# DON'T REMOVE THIS FUNCTIONS #############

from rich import print as prints
from rich.panel import Panel

from yz import cok, loy

from .bot_fb import Bot_Facebook
#from .ksabar import Ngocok

merah  = '[#FF0022]'
hijau  = '[#00FF33]'
kuning = '[#FFFF00]'

M = '\x1b[1;91m' # MERAH
N = '\x1b[0m'    # WARNA MATI
class Lain:

    def __init__(self, cookie, tokenz):
        self.kontol(cookie, tokenz)

    def kontol(self, cookie, tokenz):
        prints(Panel("""[[bold cyan]01[/]] Check hasil crack       [[bold cyan]03[/]] bot facebook
[[bold cyan]02[/]] auto pasang a2f         [[bold red]00[/]] kembali""", title=f'{merah}•{kuning}•{hijau}•{hijau} FITURE LAINNYA {hijau}•{kuning}•{merah}•[/]', padding=(0,5), style="bold white", width=70))
        pil = input(f"[{M}?{N}] pilih: ")
        if pil in[""," "]:
            prints(Panel("[[bold red]![/]] jangan kosong", style="bold white", width=70));self.kontol()
        elif pil in["1","01"]:
            loy.Cek_Crack()
        elif pil in["2", "02"]:
            exit()
        elif pil in["3", "03"]:
            Bot_Facebook(cookie, tokenz)
        elif pil in["0", "00"]:
            cok.Cindy_aulia()
        else:
            prints(Panel("[[bold red]![/]] input yang benar", style="bold white", width=70));self.kontol()