import cs50

def main():
    print("Height : ",end="")
    Height = cs50.get_int()

    while Height > 23 or Height < 0:
            print("Height : ",end="")
            Height = cs50.get_int()



    if Height <= 23 and Height >= 0:
          w = Height-1

          for i in range(Height):
              for z in range(w,0,-1):
                  print(" ",end="")
              for j in range(i+2):
                  print("#",end="")
              print()
              w = w - 1

if __name__ == "__main__":
   main()

