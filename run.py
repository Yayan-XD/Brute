import sys, os

if sys.version[0:3] != "3.9":
  sys.exit("[+] anda harus menggunakan versi python 3.9, versi python anda sekarang : "+sys.version[0:3])

if __name__ == "__main__":
  try:
      os.system("git pull")
      os.system("clear")
      print("\n script masih dalam perbaikan mohon tunggu beberapa hari.")
  except Exception as e:
    exit(str(e))
