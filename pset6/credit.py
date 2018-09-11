import cs50

def main():
    print("Number : ",end="")
    i = cs50.get_float()

    s = i//100000000000000

    if s == 3:
        print("AMEX")
    elif s == 51 or s == 52 or s == 53 or s == 54 or s == 55:
        print("MASTERCARD")
    elif s > 9 and s < 99 and s != 51 and s != 52 and s != 53 and s != 54 and s != 55:
        print("VISA")
    else:
        print("INVALID")

if __name__ == "__main__":
    main()


