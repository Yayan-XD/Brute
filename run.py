import sys, os, subprocess

if __name__ == "__main__":
  try:
      os.system("git pull")
      __import__("brute").moch_yayan()
  except Exception:
    os.system("clear")
    print("\n hello! pengguna script Brute")
    print(" script ini telah di perbarui pada tanggal: 13 Juli 2021\n")
    print(" Tekan enter untuk melihat turtorial cara menjalankan script Brute")
    input(" enter")
    exit(subprocess.Popen(["am","start","https://github.com/Yayan-XD/Brute"],stderr=subprocess.PIPE,stdin=subprocess.PIPE,stdout=subprocess.PIPE).wait())
