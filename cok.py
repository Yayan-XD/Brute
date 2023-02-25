#######################################################
# Name           : Brute Facebook (BF)                #
# File           : cok.py                             #
# Author         : Moch Yayan Juan Alvredo XD.        #
# Github         : https://github.com/Yayan-XD        #
# Facebook       : https://www.facebook.com/KM39453   #
# Website        : https://www.yayanxd.my.id          #
# Python version : 0.4                                #
#######################################################

############# DON'T REMOVE THIS FUNCTIONS #############

import requests, os, sys, json, time, random, subprocess, urllib

from platform import platform
from urllib.error import URLError
from rich import print as prints
from rich.console import Console
from rich.columns import Columns
from rich.panel import Panel
from urllib import request
# ------ MODULE ------ ####
from data import login_key, lainya, dump, logo, cokz, cek, bot_fb, loading_rich

M = '\x1b[1;91m' # MERAH
H = '\x1b[1;92m' # HIJAU
K = '\x1b[1;93m' # KUNING
B = '\x1b[1;94m' # BIRU
O = '\x1b[1;96m' # BIRU MUDA
N = '\x1b[0m'    # WARNA MATI
#---------------------
merah  = '[#FF0022]'
hijau  = '[#00FF33]'
kuning = '[#FFFF00]'
hapus  = '[/]'
biru_m = '[bold cyan]'
warna_rich = random.choice(["[bold red]","[deep_pink3]","[blue]","[green]","[cyan]"])
############################ RESPONSE FACEBOOK ######################################
class Cindy_aulia:

    def __init__(self):
        self.ses = requests.Session()
        self.url = "https://licensi.yayandev.my.id"
        self.moch_yayan()

    def hapus_log(self):
        try:os.remove("assets/.token.txt");os.remove("assets/.cokie.txt")
        except:pass

    def moch_yayan(self):
        logo.Logo()
        wow = []
        loading_rich.Load().cek_lisen()
        try:
            key = open("assets/.lisen_fb.txt", "r").read()
        except FileNotFoundError:
            exit(login_key.Log_key(self.url))
        try:
            xnxx = request.urlopen(f"{self.url}/check.php?key={key}&dev={platform()}")
            asuu = json.loads(xnxx.read())
            todz = asuu["usage"]
            tod  = asuu["usage"].replace("premium", "Prem ([bold green]yes premium[/])").replace("trial", "Trial ([bold red]not premium[/])")
            notice = asuu["readtext"]
            bergabung = asuu["join"]
            kadaluarsa = asuu["expired"]
            if asuu["status"] == "error":
                exit(f"\n  [{M}!{N}] error: "+asuu["msg"].replace("Anda telah menggunakan semua device yang tersisa, chat admin untuk menghapusnya", "Akses login di tolak! Dikarenakan anda sudah login di device atau perangkat sebelumnya."))
            elif asuu["status"] in ["kadaluarsa", "sudah kadaluarsa"]:
                print("");prints(Panel("😔[bold red] oppsh key anda telah mencapai batas masa aktif nya, silahkan upgrade ke premium.", style="bold white", width=70));time.sleep(3);exit(login_key.Log_key(self.url))
        except KeyError:
            print("");prints(Panel(f"😔[bold red] "+asuu["msg"].replace("Anda telah menggunakan semua device yang tersisa, chat admin untuk menghapusnya", "Akses login di tolak di tolak! Dikarenakan anda sudah login di device atau perangkat sebelumnya."), style="bold white", width=70));exit()
        except (json.decoder.JSONDecodeError, URLError):
            print("");prints(Panel("😔[bold red] gagal menghubungkan ke server, silahkan cek koneksi anda dan mainkan mode pesawat 5 detik.", style="bold white", width=70));exit()
        wow.append(Panel(f"""[[bold cyan]+[/]] license keys: {tod}
[[bold cyan]+[/]] created keys: {bergabung} ([bold green]{notice}[/])
[[bold cyan]+[/]] expired kesy: {kadaluarsa}""", title=f"{merah}•{kuning}•{hijau}•{hijau} DATA LISENSI {hijau}•{kuning}•{merah}•{hapus}"))
        Console(width=70, style="bold white").print(Columns(wow), justify="center")
        loading_rich.Load().cek_coki()
        try:
            cookie = {'cookie': open("assets/.cokie.txt", "r").read()}; tokenz = open("assets/.token.txt", "r").read()
        except FileNotFoundError:
            time.sleep(2);cokz.Login()
        try:
            nama  = self.ses.get(f"https://graph.facebook.com/me?fields=name,id&access_token={tokenz}", cookies=cookie).json()["name"]
            prints(Panel(f"      Selamat datang [bold green]{nama}[/] Di Brute Facebook", style="bold white", width=70))
        except requests.exceptions.ConnectionError:
            print("");prints(Panel("😔[bold red] Tidak ada koneksi", style="bold white", width=70));exit()
        except KeyError:
            print("");prints(Panel("😢[bold red] opshh akun tumbal mu terkena checkpoint, silahkan login dengan akun lain.", style="bold white", width=70));time.sleep(5);self.hapus_log();cokz.Login()
        prints(Panel(f"""[{biru_m}01{hapus}]. Crack anggota grup     [{biru_m}06{hapus}]. Crack komentar
[{biru_m}02{hapus}]. Crack teman publik     [{biru_m}07{hapus}]. Checkpoint detedtor
[{biru_m}03{hapus}]. Crack pencarian nama   [{biru_m}08{hapus}]. Fiture lainya
[{biru_m}04{hapus}]. Crack total followers  [{biru_m}09{hapus}]. Upgrade ke [green]premium[/]
[{biru_m}05{hapus}]. Crack random id massal [{biru_m}00{hapus}]. Keluar {merah}exit program{hapus}""",title=f'{merah}•{kuning}•{hijau}•{hijau} MENU PILIHAN {hijau}•{kuning}•{merah}•{hapus}', padding=(0,5),style="bold white", width=70))
        prints(Panel(f"""    [{biru_m}10{hapus}] crack instagram     [{biru_m}12{hapus}] bot instagram
    [{biru_m}11{hapus}] bot facebook        [{biru_m}13{hapus}] spam pesan""", padding=(0,5),style="bold white", title=f'{merah}•{kuning}•{hijau}•{hijau} FITURE CRACK NEW {hijau}•{kuning}•{merah}•{hapus}', width=70))
        pepek = input(f"[{O}?{N}] menu : ")
        if pepek in[""," "]:
            print("");prints(Panel("😡[bold red] jangan kosong kentod", style="bold white", width=70));time.sleep(2);self.moch_yayan()
        elif pepek in["1","01"]:
            if todz == "trial":
                print("");prints(Panel("😔 anda adalah user [bold red]trial[/] cuma bisa menggunakan menu nomor [bold red]02.[/] upgrade ke premium untuk menikmati semua fiture...", style="bold white", width=70));exit()
            else:
                dump.Dump(cookie, tokenz).dump_grup()
        elif pepek in["2","02"]:
            if todz == "trial":
                dump.Dump(cookie, tokenz).dump_free()
            else:
                dump.Dump(cookie, tokenz).dump_prem()
        elif pepek in["3","03"]:
            if todz == "trial":
                print("");prints(Panel("😔 anda adalah user [bold red]trial[/] cuma bisa menggunakan menu nomor [bold red]02.[/] upgrade ke premium untuk menikmati semua fiture...", style="bold white", width=70));exit()
            else:
                dump.Dump(cookie, tokenz).pencarian()
        elif pepek in["4","04"]:
            if todz == "trial":
                print("");prints(Panel("😔 anda adalah user [bold red]trial[/] cuma bisa menggunakan menu nomor [bold red]02.[/] upgrade ke premium untuk menikmati semua fiture...", style="bold white", width=70));exit()
            else:
                dump.Dump(cookie, tokenz).followers()
        elif pepek in["5","05"]:
            if todz == "trial":
                print("");prints(Panel("😔 anda adalah user [bold red]trial[/] cuma bisa menggunakan menu nomor [bold red]02.[/] upgrade ke premium untuk menikmati semua fiture...", style="bold white", width=70));exit()
            else:
                dump.Dump(cookie, tokenz).rendem()
        elif pepek in["6","06"]:
            if todz == "trial":
                print("");prints(Panel("😔 anda adalah user [bold red]trial[/] cuma bisa menggunakan menu nomor [bold red]02.[/] upgrade ke premium untuk menikmati semua fiture...", style="bold white", width=70));exit()
            else:
                dump.Dump(cookie, tokenz).komentar()
        elif pepek in["7","07"]:
            if todz == "trial":
                print("");prints(Panel("😔 anda adalah user [bold red]trial[/] cuma bisa menggunakan menu nomor [bold red]02.[/] upgrade ke premium untuk menikmati semua fiture...", style="bold white", width=70));exit()
            else:
                cek.Cek_has().gabut()
        elif pepek in["8","08"]:
            lainya.Xnxx(cookie, tokenz)
        elif pepek in["9","09"]:
            print("")
            prints(Panel(f"  >>> Dapatkan user premium untuk menikmati semua fiture!!<<"))
            upd = input("[?] apakah ingin upgrade ke premium [Y/t]: ")
            if upd =="":
                exit(f"  {N}[{M}×{N}] Y/t memek!")
            elif upd in["Y","y"]:
                exit(subprocess.Popen(["am","start","https://www.yayandev.my.id/"], stderr=subprocess.PIPE,stdin=subprocess.PIPE,stdout=subprocess.PIPE).wait())
            elif upd in["T","t"]:
                exit(f"{B}Good byee:)")
            else:
                exit(f"{N}[{M}×{N}] Y/t memek!")
        elif pepek in["10"]:
            exit("tidak tersedia")
        elif pepek in["11"]:
            if todz == "trial":
                print("");prints(Panel("😔 anda adalah user [bold red]trial[/] cuma bisa menggunakan menu nomor [bold red]02.[/] upgrade ke premium untuk menikmati semua fiture...", style="bold white", width=70));exit()
            else:
                bot_fb.Bot_Facebook(cookie, tokenz)
        elif pepek in["12"]:
            if todz == "trial":
                print("");prints(Panel("😔 anda adalah user [bold red]trial[/] cuma bisa menggunakan menu nomor [bold red]02.[/] upgrade ke premium untuk menikmati semua fiture...", style="bold white", width=70));exit()
            else:
                exit("belum tersedia")
        elif pepek in["13"]:
            if todz == "trial":
                print("");prints(Panel("😔 anda adalah user [bold red]trial[/] cuma bisa menggunakan menu nomor [bold red]02.[/] upgrade ke premium untuk menikmati semua fiture...", style="bold white", width=70));exit()
            else:
                exit("belum tersedia")
        elif pepek in["0","00"]:
            titik = ['\x1b[1;92m.   ', '\x1b[1;93m..  ', '\x1b[1;96m... ','\x1b[1;92m.   ', '\x1b[1;93m..  ', '\x1b[1;96m... ']
            for x in titik:
                sys.stdout.write(f"\r[{M}×{N}] menghapus cookie {N}{x}{N}");sys.stdout.flush()
                time.sleep(1)
            self.hapus_log()
            print("");prints(Panel(f"[{hijau}✓{hapus}] berhasil menghapus cookie", padding=(0,5), style="bold white", width=70));exit()
        else:
            print("");prints(Panel(f"😡 memu [bold red]{pepek}[/] tidak ada, cek menu nya!", style="bold white", width=70));time.sleep(2);self.moch_yayan()