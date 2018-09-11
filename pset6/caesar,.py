import cs50
import sys

def main():
    if len(sys.argv) != 2:
        print("Usage: python caesar.py k")
        return 1

    a = int(sys.argv[1])
    if a>26:
        while a>26:
            a = a%26
    print("plaintext: ",end="")
    s = cs50.get_string()

    print("ciphertext: ",end="")
    for i in range(len(s)):
        if s[i] == " ":
            print("{}"," ")
        if s[i] == ",":
            print("{}",",")
        if s[i] == "!":
            print("{}","!")
        else:
            r =ord(s[i])+(a)
            if r>122:
                am = ord(r)-26
                print("{}".format(chr(am)),end="")
            elif r>=97 and r<=122:
                print("{}".format(chr(r)),end="")
            elif r>90 and r<97:
                om = ord(r)-26
                print("{}".format(chr(om)),end="")
            elif r>=65 and r<=90:
                print("{}".format(chr(r)),end="")
    print()
if __name__ == "__main__":
    main()

