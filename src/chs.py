#######################################################
# Name           : Yayan Multi Brute Facebook (YMBF)  #
# File           : chs.py                             #
# Author         : Moch Yayan Juan Alvredo XD.        #
# Github         : https://github.com/Yayan-XD        #
# Facebook       : https://www.facebook.com/KM39453   #
# Website        : https://www.yayanxd.my.id          #
# Python version : 3.11                               #
#######################################################

############# DON'T REMOVE THIS FUNCTIONS #############

import time, os

from yz import cok as cwk

from rich import print as prints
from rich.panel import Panel
from rich.table import Table
from rich.console import Console
console = Console()

O = '\x1b[1;96m' # BIRU MUDA
N = '\x1b[0m'    # WARNA MATI
H = '\x1b[1;92m' # HIJAU
M = '\x1b[1;91m' # MERAH

############################
class Cek_Crack:

    def __init__(self):
        self.hsl_cp, self.hsl_ok = [], []

    def hasil(self):
        prints(Panel("""[[bold cyan]01[/]] check hasil crack ok    [[bold cyan]03[/]] hapus hasil crack
[[bold cyan]02[/]] check hasil crack cp    [[bold red]00[/]] kembali""",padding=(0,5),style="bold white", width=70))
        xz = input(f"[{M}?{N}] input: ")
        if xz in[""]:
            print("");prints(Panel("😡 jangan kosong", style="bold white", width=70));self.hasil()
        elif xz in["1", "01"]:
            self.hasil_ok()
        elif xz in["2", "02"]:
            try:
                xxx = os.listdir("results/CP")
                for z in xxx:
                    self.hsl_cp.append(z)
            except:pass
            if len(self.hsl_cp)==0:
                prints(Panel("Tidak ada file di dalam folder [italic bold red]results/CP[/] silahkan crack terlebih dahulu", style="bold white", width=70));exit()
            else:
                xa, xx = {}, 0
                prints(Panel("             HASIL [bold yellow]CP[/] YANG TERSIMPAN DI FOLDER ANDA", style="bold white", width=70))
                table = Table(title="")
                table.add_column("No.", width=4, style="bold cyan")
                table.add_column("      HASIL CP",width=25, style="bold white")
                table.add_column("TOTAL AKUN",width=5, style="bold green")
                for tod in self.hsl_cp:
                    try:fi2 = open(f"results/CP/{tod}").readlines()
                    except:continue
                    xx+=1
                    if xx<100:
                        nom =""+str(xx)
                        xa.update({str(xx):str(tod)})
                        xa.update({nom+"0":str(xx)})
                        table.add_row(f"{nom}", f"{tod}", f"{str(len(fi2))}")
                    else:
                        xa.update({str(xx):str(tod)})
                        table.add_row(f"{nom}", f"{tod}", f"{str(len(fi2))}")
                console.print(table, justify="center", width=70)
                prints(Panel("    [[bold red]![/]]  [italic bold red]SILAHKAN PILIH NOMOR YANG MAU ANDA CEK[/]  [[bold red]![/]]", padding=(0,5), style="bold white", width=70))
                file = input(f"  [{M}?{N}] nomor : ")
                if file in [" ", ""]:prints(Panel("             [italic bold red]Masukan nomor nya asu jangan di kosongin", style="bold white", width=70));exit()
                try:ajg = xa[file]
                except KeyError:
                    prints(Panel(f"         😡 file [italic bold red]{file}[/] tidak ada cek nomor nya pler", style="bold white", width=70));exit()
                nm_file = ajg.replace("-", " ")
                hps_nm  = nm_file.replace(".txt", "").replace("CP", "")
                total = open(f"results/CP/{ajg}", "r").readlines()
                prints(Panel(f"    Hasil crack pada tanggal:[italic bold green]{hps_nm}[/] total: [italic bold blue]{len(total)}[/]", padding=(0,5), style="bold white", width=70))
                for ha in total:
                    kontol = ha.replace("\n","")
                    titid  = kontol.replace(" [×] ", "  \x1b[0m[\x1b[1;93m×\x1b[0m]\x1b[1;93m ")
                    print(f"{titid}{N}");time.sleep(0.03)
                prints(Panel(f"          [[bold green]✓[/]] PROSES MENGECEK HASIL [italic yellow]CP[/] TELAH SELESAI", style="bold white", width=70))
                input(f"   [ {O}KEMBALI{N} ] ");self.hasil()
        elif xz in["3","03"]:
            prints(Panel("""[[bold cyan]01[/]] hapus hasil ok
[[bold cyan]02[/]] hapus hasil cp
[[bold cyan]00[/]] kembali""", title="[italic bold red]HAPUS HASIL CRACK[/]", padding=(0,5), style="bold white", width=70))
            pil = input(f"[{O}?{N}] pilih: ")
            if pil in ["1", "01"]:
                try:os.remove("results/OK")
                except:os.system("rm -rf results/OK")
                try:os.mkdir("results/OK")
                except:pass
                prints(Panel("[[bold green]✓[/]] berhasil menghapus semua hasil ok.", style="bold white", width=70));input(f"[ {O}TEKAN ENTER{N} ] ");self.hasil()
            elif pil in ["2", "02"]:
                try:os.remove("results/CP")
                except:os.system("rm -rf results/CP")
                try:os.mkdir("results/CP")
                except:pass
                prints(Panel("[[bold green]✓[/]] berhasil menghapus semua hasil cp.", style="bold white", width=70));input(f"[ {O}TEKAN ENTER{N} ] ");self.hasil()
            elif pil in ["3", "03"]:
                self.hasil()
            else:
                print("");prints(Panel(f"😡 memu [bold red]{pil}[/] tidak ada, cek menu nya!", style="bold white", width=70));time.sleep(3);self.hasil()
        elif xz in["0","00"]:
            cwk.Cindy_aulia().kontol("", "")
        else:print("");prints(Panel(f"😡 memu [bold red]{xz}[/] tidak ada, cek menu nya!", style="bold white", width=70));self.hasil()

    def hasil_ok(self):
        xa, xx = {}, 0
        try:
            dirs = os.listdir("results/OK")
            for i in dirs:
                self.hsl_ok.append(i)
        except:pass
        if len(self.hsl_ok)==0:
            prints(Panel("Tidak ada file di dalam folder [italic bold red]results/OK[/] silahkan crack terlebih dahulu", style="bold white", width=70));exit()
        else:
            prints(Panel("             HASIL [bold green]OK[/] YANG TERSIMPAN DI FOLDER ANDA", style="bold white", width=70))
            table = Table(title="")
            table.add_column("NO.", width=4, style="bold cyan")
            table.add_column("      HASIL OK",width=25, style="bold white")
            table.add_column("TOTAL AKUN",width=5, style="bold green")
            for ini in self.hsl_ok:
                try:fi1 = open(f"results/OK/{ini}").readlines()
                except:continue
                xx+=1
                if xx<100:
                    nom =""+str(xx)
                    xa.update({str(xx):str(ini)})
                    xa.update({nom+"0":str(xx)})
                    table.add_row(f"{nom}", f"{ini}", f"{str(len(fi1))}")
                else:
                    xa.update({str(xx):str(ini)})
                    table.add_row(f"{nom}", f"{ini}", f"{str(len(fi1))}")
            console.print(table, justify="center")
            prints(Panel("    [[bold red]![/]]  [italic bold red]SILAHKAN PILIH NOMOR YANG MAU ANDA CEK[/]  [[bold red]![/]]", padding=(0,5), style="bold white", width=70))
            file = input(f"  [{M}?{N}] nomor : ")
            if file in [" ", ""]:prints(Panel("             [italic bold red]Masukan nomor nya asu jangan di kosongin", style="bold white", width=70));exit()
            try:ajg = xa[file]
            except KeyError:
                prints(Panel(f"         😡 file [italic bold red]{file}[/] tidak ada cek nomor nya pler", style="bold white", width=70));exit()
            nm_file = ajg.replace("-", " ")
            hps_nm  = nm_file.replace(".txt", "").replace("OK", "")
            total = open(f"results/OK/{ajg}", "r").readlines()
            prints(Panel(f"    Hasil crack pada tanggal:[italic bold green]{hps_nm}[/] total: [italic bold blue]{len(total)}[/]", padding=(0,5), style="bold white", width=70))
            for ha in total:
                kontol = ha.replace("\n","")
                titid  = kontol.replace(" [✓] ","  \x1b[0m[\x1b[1;92m✓\x1b[0m]\x1b[1;92m ")
                print(f"{titid}{N}");time.sleep(0.03)
            prints(Panel(f"          [[bold green]✓[/]] PROSES MENGECEK HASIL [italic green]OK[/] TELAH SELESAI", style="bold white", width=70))
            input(f"   [ {O}KEMBALI{N} ] ");self.hasil()