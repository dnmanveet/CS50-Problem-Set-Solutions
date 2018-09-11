import cs50
import sys
def main():
    if len(sys.argv) != 2:
        print("Usage: python vigenere.py k")
        return 1
    print("plaintext: ",end="")
    s = cs50.get_string()
    pl_txt = sys.argv[1]
    pl_flag = 0
    print("ciphertext: ",end="")
    for i in range(len(s)):
        if s[i] == " ":
            print(" ",end="")

        if s[i] == ",":
            print(",",end="")

        if s[i] == "!":
            print("!",end="")

        if s[i] == "$":
            print("$",end="")

        if s[i] == "?":
            print("?",end="")

        if pl_flag > len(pl_txt)-1:
            pl_flag = 0
        else:
            e = (ord(pl_txt[pl_flag].capitalize())-65)
            z = ord(s[i])+e
            pl_flag = pl_flag +1
        if s[i] == " ":
            pl_flag = pl_flag-1

        if s[i] == ",":
            pl_flag = pl_flag-1

        if s[i] == "!":
            pl_flag = pl_flag-1

        if s[i] == "$":
            pl_flag = pl_flag-1

        if s[i] == "?":
            pl_flag = pl_flag-1
        if pl_flag > len(pl_txt)-1:
            pl_flag = 0
        if z>122:
            om = z-26
            print("{}".format(chr(om)),end="")
        elif z>=97 and z<=122:
            print("{}".format(chr(z)),end="")
        elif z>90 and z<97:
            em = ord(z)-26
            print("{}".format(chr(em)),end="")
        elif z>=65 and z <= 90:
            print("{}".format(chr(z)),end="")
    print()

if __name__ == "__main__":
    main()






