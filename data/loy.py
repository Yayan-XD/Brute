#######################################################
# Name           : Yayan Multi Brute Facebook (YMBF)  #
# File           : loy.py                            #
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
from src import cok as yy

O = '\x1b[1;96m' # BIRU MUDA
N = '\x1b[0m'    # WARNA MATI
H = '\x1b[1;92m' # HIJAU
M = '\x1b[1;91m' # MERAH

merah  = '[#FF0022]'
hapus  = '[/]'
biru_m = '[bold cyan]'
hijau  = '[#00FF33]'
kuning = '[#FFFF00]'

hsl_ok = []
hsl_cp = []

def hasil():
    prints(Panel(f"""[{biru_m}01{hapus}] check hasil crack ok
[{biru_m}02{hapus}] check hasil crack cp
[{biru_m}03{hapus}] hapus hasil crack
[{merah}04{hapus}] kembali ke menu awal"""))
    xz = input(f"  [{M}?{N}]  input: ")
    if xz in[""]:
        print("");prints(Panel(f"😡 jangan kosong"));time.sleep(3);hasil()
    elif xz in["1", "01"]:
        try:
            dirs = os.listdir("results/OK")
            for i in dirs:
                hsl_ok.append(i)
        except:pass
        if len(hsl_ok)==0:
            prints(Panel(f"🙁 {merah}tidak ada file yang mau di cek{hapus}"));exit()
        else:
            prints(Panel(f"       HASIL {hijau}OK {hapus}YANG TERSIMPAN DI FOLDER ANDA"))
            xx = 0
            xa = {}
            for ini in hsl_ok:
                try:fi1 = open(f"results/OK/{ini}").readlines()
                except:continue
                xx+=1
                if xx<10:
                    nom ="0"+str(xx)
                    xa.update({str(xx):str(ini)})
                    xa.update({nom:str(xx)})
                    print(f"  [{O}{nom}{N}] {ini} -> {H}{str(len(fi1))}{N}")
                else:
                    xa.update({str(xx):str(ini)})
                    print(f"  [{O}{nom}{N}] {ini} -> {H}{str(len(fi1))}{N}")
            prints(Panel(f"         {biru_m}SILAHKAN PILIH NOMOR YANG MAU ANDA CEK{hapus}"))
            file = input(f"  [{M}?{N}] nomor : ")
            try:ajg = xa[file]
            except KeyError:
                prints(Panel(f"😡 file {merah}{file}{hapus} tidak ada cek nomor nya pler"));exit()
            nm_file = ajg.replace("-", " ")
            hps_nm  = nm_file.replace(".txt", "").replace("OK", "")
            total = open(f"results/OK/{ajg}", "r").readlines()
            prints(Panel(f"[{biru_m}•{hapus}] Hasil crack pada tanggal:{hijau}{hps_nm}{hapus} total: [bold blue]{len(total)}[/]"))
            for ha in total:
                kontol = ha.replace("\n","")
                titid  = kontol.replace(" [✓] ","  \x1b[0m[\x1b[1;92m✓\x1b[0m]\x1b[1;92m ")
                print(f"{titid}{N}");time.sleep(0.03)
            prints(Panel(f"             {hijau}PROSES MENGECEK HASIL SELESAI{hapus}"))
            input(f"   [ {O}KEMBALI{N} ] ");yy.moch_yayan()
    elif xz in["2", "02"]:
        try:
            xxx = os.listdir("results/CP")
            for z in xxx:
                hsl_cp.append(z)
        except:pass
        if len(hsl_cp)==0:
            prints(Panel(f"🙁 {merah}tidak ada file yang mau di cek{hapus}"));exit()
        else:
            prints(Panel(f"       HASIL {kuning}CP {hapus}YANG TERSIMPAN DI FOLDER ANDA"))
            xx = 0
            xa = {}
            for tod in hsl_cp:
                try:fi2 = open(f"results/CP/{tod}").readlines()
                except:continue
                xx+=1
                if xx<10:
                    nom ="0"+str(xx)
                    xa.update({str(xx):str(tod)})
                    xa.update({nom:str(xx)})
                    print(f"  [{O}{nom}{N}] {tod} -> {H}{str(len(fi2))}{N}")
                else:
                    xa.update({str(xx):str(tod)})
                    print(f"  [{O}{nom}{N}] {tod} -> {H}{str(len(fi2))}{N}")
            prints(Panel(f"         {biru_m}SILAHKAN PILIH NOMOR YANG MAU ANDA CEK{hapus}"))
            file = input(f"  [{M}?{N}] nomor : ")
            try:ajg = xa[file]
            except KeyError:
                prints(Panel(f"😡 file {merah}{file}{hapus} tidak ada cek nomor nya pler"));exit()
            nm_file = ajg.replace("-", " ")
            hps_nm  = nm_file.replace(".txt", "").replace("CP", "")
            total = open(f"results/CP/{ajg}", "r").readlines()
            prints(Panel(f"[{biru_m}•{hapus}] Hasil crack pada tanggal:{hijau}{hps_nm}{hapus} total: [bold blue]{len(total)}[/]"))
            for ha in total:
                kontol = ha.replace("\n","")
                titid  = kontol.replace(" [×] ", "  \x1b[0m[\x1b[1;93m×\x1b[0m]\x1b[1;93m ")
                print(f"{titid}{N}");time.sleep(0.03)
            prints(Panel(f"             {kuning}PROSES MENGECEK HASIL SELESAI{hapus}"))
            input(f"   [ {O}KEMBALI{N} ] ");yy.moch_yayan()
    elif xz in["3","03"]:
        prints(Panel(f"""[{biru_m}01{hapus}] hapus hasil ok
[{biru_m}02{hapus}] hapus hasil cp
[{biru_m}03{hapus}] kembali""", title=f"{merah}HAPUS HASIL CRACK{hapus}"))
        pil = input("  [?] pilih: ")
        if pil in ["1", "01"]:
            try:os.remove("results/OK")
            except:pass
            try:os.mkdir("results/OK")
            except:pass
            prints(Panel(f"[{hijau}✓{hapus}] berhasil menghapus semua hasil crack."));exit()
        elif pil in ["2", "02"]:
            try:os.remove("results/CP")
            except:pass
            try:os.mkdir("results/CP")
            except:pass
            prints(Panel(f"[{hijau}✓{hapus}] berhasil menghapus semua hasil crack."));exit()
        elif pil in ["3", "03"]:
            hasil()
        else:
            print("");prints(Panel(f"😡 memu [bold red]{xz}[/] tidak ada, cek menu nya!"));time.sleep(3);hasil()
    elif xz in["4","04"]:
        yy.moch_yayan()
    else:
        print("");prints(Panel(f"😡 memu [bold red]{xz}[/] tidak ada, cek menu nya!"));time.sleep(3);hasil()
