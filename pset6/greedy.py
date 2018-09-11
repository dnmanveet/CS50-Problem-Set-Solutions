import cs50

def main():
    print("O hai! How much change is owed?")
    n = cs50.get_float()
    while n<0:
        print("O hai! How much change is owed?")
        n = cs50.get_float()
    if n>0 and n<1:
        y = n*100;
        a =0
        while y>0:
            z = y//25
            a = a+z
            z = y-z*25

            q = z//10
            a = a+q
            z = z-q*10

            s = z//5
            a = a+s
            z = z-s*5

            u = z//1
            a = a+u
            y = z-u*1;
        print("{}".format(a))

    else:
        a = 0
        while n>0:
            z = n//25
            a = a+z
            z = n - z*25

            q = z//10
            a = a+q
            z = z-q*10

            s = z//5
            a = a+s
            z = z-s*5

            u = z//1
            a = a+u
            n = z-u*1
        print("{}".format(a))

if __name__ == "__main__":
    main()





