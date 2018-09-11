#include<cs50.h>
#include<stdio.h>
int main (void)
{
    int s,q,u,z;
    float n;
    printf("O hai! How much change is owed?\n");
    n = get_float();
    while(n<0)
    {
         printf("O hai! How much change is owed?\n");
         n = get_float();
    }



  if(n>0 && n<1)
 {
     int y;
     y = n*100;
    int a = 0;

    while(y>0)
    {
        z = y/25;
        a = a+z;
        z = y-z*25;

        q =z/10;
        a = a+q;
        z = z-q*10;

        s = z/5;
        a = a+s;
        z = z-s*5;

        u = z/1;
        a=a+u;
        y =z-u*1;
    }

    printf("%d\n",a);
  }




  else
  {
        int a = 0;
    while (n>0)
    {
        z = n/25;
        a = a+z;
        z = n-z*25;

        q =z/10;
        a = a+q;
        z = z-q*10;

        s = z/5;
        a = a+s;
        z = z-s*5;

        u = z/1;
        a=a+u;
        n =z-u*1;

    }
    printf("%d\n",a);
  }
}



