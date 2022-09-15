#######################################################
# Name           : Yayan Multi Brute Facebook (YMBF)  #
# File           : loy.py                             #
# Author         : Moch Yayan Juan Alvredo XD.        #
# Github         : https://github.com/Yayan-XD        #
# Facebook       : https://www.facebook.com/KM39453   #
# Website        : https://www.yayanxd.my.id          #
# Python version : 0.4                                #
#######################################################

############# DON'T REMOVE THIS FUNCTIONS #############

import time, os

from rich import print as prints
from rich.panel import Panel
from rich.table import Table
from rich.console import Console
from src import cok as Brute
console = Console()

O = '\x1b[1;96m' # BIRU MUDA
N = '\x1b[0m'    # WARNA MATI
H = '\x1b[1;92m' # HIJAU
M = '\x1b[1;91m' # MERAH

merah  = '[#FF0022]'
hapus  = '[/]'
biru_m = '[bold cyan]'
hijau  = '[#00FF33]'
kuning = '[#FFFF00]'
############################
class Cek_Crack:

    def __init__(self):
        self.hsl_cp, self.hsl_ok = [], []
        self.hasil()
    
    def hasil(self):
        prints(Panel(f"""[{biru_m}01{hapus}] check hasil crack ok
[{biru_m}02{hapus}] check hasil crack cp
[{biru_m}03{hapus}] hapus hasil crack
[{merah}04{hapus}] kembali ke menu awal""",padding=(0,5),style="bold white", width=70))
        xz = input(f"[{M}?{N}] input: ")
        if xz in[""]:
            print("");prints(Panel(f"😡 jangan kosong", style="bold white", width=70));time.sleep(3);self.hasil()
        elif xz in["1", "01"]:
            try:
                dirs = os.listdir("results/OK")
                for i in dirs:
                    self.hsl_ok.append(i)
            except:pass
            if len(self.hsl_ok)==0:
                prints(Panel(f"🙁 {merah}tidak ada file yang mau di cek{hapus}", style="bold white", width=70));exit()
            else:
                self.xa = {}
                self.xx = 0
                prints(Panel(f"[{biru_m}!{hapus}]  HASIL {hijau}OK {hapus}YANG TERSIMPAN DI FOLDER ANDA", padding=(0,2),style="bold white", width=70))
                table = Table(title=f"")
                table.add_column("nomor",width=5,justify="center",style="bold cyan")
                table.add_column("HASIL OK",width=36,justify="center",style="bold white")
                table.add_column("TOTAL AKUN",width=10,justify="center",style="bold green")
                for ini in self.hsl_ok:
                    try:fi1 = open(f"results/OK/{ini}").readlines()
                    except:continue
                    self.xx+=1
                    if self.xx<100:
                        nom =""+str(self.xx)
                        self.xa.update({str(self.xx):str(ini)})
                        self.xa.update({nom+"0":str(self.xx)})
                        table.add_row(f"{nom}", f"{ini}", f"{str(len(fi1))}")
                    else:
                        self.xa.update({str(self.xx):str(ini)})
                        table.add_row(f"{nom}", f"{ini}", f"{str(len(fi1))}")
                console.print(table)
                prints(Panel(f"[{biru_m}!{hapus}]  SILAHKAN PILIH NOMOR YANG MAU ANDA CEK  [{biru_m}!{hapus}]", padding=(0,5), style="bold white", width=70))
                file = input(f"  [{M}?{N}] nomor : ")
                try:ajg = self.xa[file]
                except KeyError:
                    prints(Panel(f"😡 file {merah}{file}{hapus} tidak ada cek nomor nya pler", style="bold white", width=70));exit()
                nm_file = ajg.replace("-", " ")
                hps_nm  = nm_file.replace(".txt", "").replace("OK", "")
                total = open(f"results/OK/{ajg}", "r").readlines()
                prints(Panel(f"[{biru_m}•{hapus}] Hasil crack pada tanggal:{hijau}{hps_nm}{hapus} total: [bold blue]{len(total)}[/]", padding=(0,5), style="bold white", width=70))
                for ha in total:
                    kontol = ha.replace("\n","")
                    titid  = kontol.replace(" [✓] ","  \x1b[0m[\x1b[1;92m✓\x1b[0m]\x1b[1;92m ")
                    print(f"{titid}{N}");time.sleep(0.03)
                prints(Panel(f"     {hijau}PROSES MENGECEK HASIL SELESAI{hapus}", padding=(0,5), style="bold white", width=70))
                input(f"   [ {O}KEMBALI{N} ] ");Brute()
        elif xz in["2", "02"]:
            try:
                xxx = os.listdir("results/CP")
                for z in xxx:
                    self.hsl_cp.append(z)
            except:pass
            if len(self.hsl_cp)==0:
                prints(Panel(f"🙁 {merah}tidak ada file yang mau di cek{hapus}", style="bold white", width=70));exit()
            else:
                self.xa = {}
                self.xx = 0
                prints(Panel(f"[{biru_m}!{hapus}]  HASIL {kuning}CP {hapus}YANG TERSIMPAN DI FOLDER ANDA", padding=(0,2), style="bold white", width=70))
                table = Table(title=f"")
                table.add_column("nomor",width=5,justify="center",style="bold cyan")
                table.add_column("HASIL CP",width=36,justify="center",style="bold white")
                table.add_column("TOTAL AKUN",width=10,justify="center",style="bold green")
                for tod in self.hsl_cp:
                    try:fi2 = open(f"results/CP/{tod}").readlines()
                    except:continue
                    self.xx+=1
                    if self.xx<100:
                        nom =""+str(self.xx)
                        self.xa.update({str(self.xx):str(tod)})
                        self.xa.update({nom+"0":str(self.xx)})
                        table.add_row(f"{nom}", f"{tod}", f"{str(len(fi2))}")
                    else:
                        self.xa.update({str(self.xx):str(tod)})
                        table.add_row(f"{nom}", f"{tod}", f"{str(len(fi2))}")
                console.print(table)
                prints(Panel(f"[{biru_m}!{hapus}]  SILAHKAN PILIH NOMOR YANG MAU ANDA CEK  [{biru_m}!{hapus}]", padding=(0,5), style="bold white", width=70))
                file = input(f"  [{M}?{N}] nomor : ")
                try:ajg = self.xa[file]
                except KeyError:
                    prints(Panel(f"😡 file {merah}{file}{hapus} tidak ada cek nomor nya pler"));exit()
                nm_file = ajg.replace("-", " ")
                hps_nm  = nm_file.replace(".txt", "").replace("CP", "")
                total = open(f"results/CP/{ajg}", "r").readlines()
                prints(Panel(f"[{biru_m}•{hapus}] Hasil crack pada tanggal:{hijau}{hps_nm}{hapus} total: [bold blue]{len(total)}[/]", padding=(0,5), style="bold white", width=70))
                for ha in total:
                    kontol = ha.replace("\n","")
                    titid  = kontol.replace(" [×] ", "  \x1b[0m[\x1b[1;93m×\x1b[0m]\x1b[1;93m ")
                    print(f"{titid}{N}");time.sleep(0.03)
                prints(Panel(f"      {kuning}PROSES MENGECEK HASIL SELESAI{hapus}", padding=(0,5), style="bold white", width=70))
                input(f"   [ {O}KEMBALI{N} ] ");Brute()
        elif xz in["3","03"]:
            prints(Panel(f"""[{biru_m}01{hapus}] hapus hasil ok
[{biru_m}02{hapus}] hapus hasil cp
[{biru_m}03{hapus}] kembali""", title=f"{merah}HAPUS HASIL CRACK{hapus}", padding=(0,5), style="bold white", width=70))
            pil = input(f"[{O}?{N}] pilih: ")
            if pil in ["1", "01"]:
                try:os.remove("results/OK")
                except:os.system("rm -rf results/OK")
                try:os.mkdir("results/OK")
                except:pass
                prints(Panel(f"[{hijau}✓{hapus}] berhasil menghapus semua hasil ok.", style="bold white", width=70));input(f"[ {O}TEKAN ENTER {N} ] ");Brute()
            elif pil in ["2", "02"]:
                try:os.remove("results/CP")
                except:os.system("rm -rf results/CP")
                try:os.mkdir("results/CP")
                except:pass
                prints(Panel(f"[{hijau}✓{hapus}] berhasil menghapus semua hasil cp.", style="bold white", width=70));input(f"[ {O}TEKAN ENTER {N} ] ");Brute()
            elif pil in ["3", "03"]:
                self.hasil()
            else:
                print("");prints(Panel(f"😡 memu [bold red]{pil}[/] tidak ada, cek menu nya!", style="bold white", width=70));time.sleep(3);self.hasil()
        elif xz in["4","04"]:
            Brute()
        else:
            print("");prints(Panel(f"😡 memu [bold red]{xz}[/] tidak ada, cek menu nya!", style="bold white", width=70));time.sleep(3);self.hasil()