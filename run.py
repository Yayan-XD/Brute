import sys, os, subprocess

if __name__ == "__main__":
  try:
      os.system("git pull")
      __import__("brute").moch_yayan()
  except Exception as e:
    os.system("clear")
    print(e)
