#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
int main(int argc,string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }

    int a = atoi(argv[1]);
   if(a>26)
   {
       while(a>26)
       {
           a = a%26;
       }
   }

      printf("plaintext: ");
      string s = get_string();

      printf("ciphertext: ");
    for(int i=0 ;i<strlen(s); i++)
    {
        if(s[i]==' ')
        {
            printf(" ");
        }
        if(s[i]==',')
        {
            printf(",");
        }
        if(s[i]=='!')
        {
            printf("!");
        }
        else
        {
         int r = s[i]+a;
         if(r>122)
         {
          printf("%c",r-26);
         }
         else if(r>=97 && r<=122)
         {
          printf("%c",r);
         }
         else if(r>90 && r<97)
         {
           printf("%c",r-26);
         }
         else if(r>=65 && r<=90)
         {
           printf("%c",r);
         }
        }
    }
    printf("\n");

}



