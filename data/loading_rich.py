#######################################################
# Name           : Brute Facebook (BF)                #
# File           : loading_rich.py                    #
# Author         : Moch Yayan Juan Alvredo XD.        #
# Github         : https://github.com/Yayan-XD        #
# Facebook       : https://www.facebook.com/KM39453   #
# Website        : https://www.yayanxd.my.id          #
# Python version : 0.4                                #
#######################################################

############# DON'T REMOVE THIS FUNCTIONS #############

from rich.console import Console
from time import sleep

class Load:

    def __init__(self):
        self.ric = Console()
        self.dat = [1, 2]

    def cek_coki(self):
        with self.ric.status("[bold white]mengecek cookie...") as d:
            while self.dat:
                self.dat.pop(0)
                sleep(1)

    def ubah_taa(self):
        with self.ric.status("[bold white]mengubah data...") as d:
            while self.dat:
                self.dat.pop(0)
                sleep(1)

    def cek_lisen(self):
        with self.ric.status("[bold white]cek lisensi...") as d:
            while self.dat:
                self.dat.pop(0)
                sleep(1)