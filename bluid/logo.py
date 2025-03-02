
import os, sys

H = '\x1b[1;92m' # HIJAU
N = '\x1b[0m'	 # WARNA MATI

class Logo:

    def __init__(self, logo):
        if "linux" in sys.platform.lower():
            try:os.system("clear")
            except:pass
        elif "win" in sys.platform.lower():
            try:os.system("cls")
            except:pass
        else:os.system("clear")
        if "insta" in logo:
            loz = (
                f"""{H}
          _____                       _    
          \_   \__ _  /\  /\__ _  ___| | __
           / /\/ _` |/ /_/ / _` |/ __| |/ /
        /\/ /_| (_| / __  / (_| | (__|   < 
        \____/ \__, \/ /_/ \__,_|\___|_|\_\\
               |___/                       
{N}""")
            print(loz)
        elif "fesnuk" in logo:
            loz = (
                f"""{H}
           ___ _                      _    
          / __\ |__   /\  /\__ _  ___| | __
         / _\ | '_ \ / /_/ / _` |/ __| |/ /
        / /   | |_) / __  / (_| | (__|   < 
        \/    |_.__/\/ /_/ \__,_|\___|_|\_\\
{N}""")
            print(loz)
        elif "barme" in logo:
            loz = (
                f"""{H}
               ___            _
              / __\_ __ _   _| |_ ___
             /__\// '__| | | | __/ _ \\
            / \/  \ |  | |_| | ||  __/
            \_____/_|   \__,_|\__\___|
{N}""")
            print(loz)
        elif "bot_fb" in logo:
            loz = (
                f"""{H}
           ___       _       ___ _
          / __\ ___ | |_    / __\ |__
         /__\/// _ \| __|  / _\ | '_ \\
        / \/  \ (_) | |_  / /   | |_) |
        \_____/\___/ \__| \/    |_.__/
{N}""")
            print(loz)