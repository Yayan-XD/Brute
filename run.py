# CUIH RECODE KONTOL

import requests as req, os, random, subprocess, re
from time import sleep as waktu

### WARNA RANDOM ###
M = "\x1b[1;91m" # MERAH
H = "\x1b[1;92m" # HIJAU
K = "\x1b[1;93m" # KUNING
B = "\x1b[1;94m" # BIRU
O = "\x1b[1;96m" # BIRU MUDA
N = "\x1b[0m"    # WARNA MATI
#  Moch Yayan Juan Alvredo XD.  #
#------------------------------->

PROJECT_NAME = "brute"
URL = "https://blackhuman.000webhostapp.com/chek.php"

def logo():
	os.system("clear")
	print("""%s
 _____.___.            _____ _____________________
 \__  |   |           /     \\______   \_   _____/ ®
  /   |   |  ______  /  \ /  \|    |  _/|    __)  
  \____   | /_____/ /    Y    \    |   \|     \   
  / ______|         \____|__  /______  /\___  /   
  \/                        \/       \/     \/    """%(N))

def cek_key(key):
	cek = req.get(URL+"?project="+PROJECT_NAME+"&apikey="+key).json()
	if cek["status"] == "error":
		try: os.remove("license.txt")
		except: pass
		exit("\n %s[%s×%s] Your key is invalid, please contact admin\n"%(N,M,N))
	elif cek["status"] == "expired":
		exit("\n %s[%s×%s] Your key is expired, please contact admin"%(N,M,N))
		try: os.remove("license.txt")
		except: pass
	else:
		return "Key valid!", cek["urls"]

def get_license(integer):
	lis = list("abcdefghijklmnopqrstuvwxyz123456789")
	gets = [random.choice(lis) for _ in range(integer)]
	return "".join(gets).upper()

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

def aktif_key():
	try:
		xnxx = open("license.txt","r").read().replace("\n","")
		# cek apakah user memasukan text kosong kedalam file key?
		chr = re.search("[a-z-A-Z-0-9]+", str(xnxx))
		if chr is None:
			exit("\n [!] Your key not valid")
		else:
			sts, set = cek_key(chr.group(0))
			if "valid!" in sts:
				exec(req.get(set).text)
		exit()
	except:
		pass

	try:
		digit = random.choice([20,15,30,35])
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
			print("\n %s[%s×%s] jangan kosong bro"%(N,M,N))
			pil = input(" %s[%s+%s] choose %s:%s "%(N,O,N,M,H))
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
			sts, set = cek_key(keyy)
			if "valid!" in sts:
				exec(req.get(set).text)
		elif pil == "4":
			cek_harga()
		elif pil == "0":
			print("\n selamat tinggal syngg")
			exit()
		else:
			print("\n %s[%s×%s] input yang bener"%(N,M,N));waktu(2);aktif_key()
	except Exception as Ex:
		exit("\n [!] "+str(Ex))

if __name__ == "__main__":
	os.system("git pull")
	aktif_key()

