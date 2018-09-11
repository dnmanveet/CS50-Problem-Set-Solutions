#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
int main(int argc, string argv[])
{
    int z;
    if (argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }

      printf("plaintext: ");

      string s = get_string();
      string pl_txt = argv[1];

      int pl_flag = 0;
      printf("ciphertext: ");


    for(int i=0 ;i<strlen(s); i++)
    {

           if(s[i]==' ')
        {
           printf(" ") ;
           continue;
        }
              if(s[i]==',')
        {
           printf(",");
           continue;
        }
        if(s[i]=='!')
        {
            printf("!");
            continue;
        }
        if(s[i]=='$')
        {
            printf("$");
            continue;
        }
        if(s[i]=='?')
        {
            printf("?");
            continue;
        }


        if( pl_flag > strlen(pl_txt)-1)
        {
            pl_flag = 0;
        }
    else
    {
      z = s[i]+(toupper(pl_txt[pl_flag])-65);

      pl_flag = pl_flag+1;
        if(s[i]==' ')
        {
           pl_flag = pl_flag-1 ;
        }
              if(s[i]==',')
        {
          pl_flag = pl_flag-1;
        }
        if(s[i]=='!')
        {
            pl_flag = pl_flag-1;
        }
        if(s[i]=='$')
        {
            pl_flag = pl_flag-1;
        }
        if(s[i]=='?')
        {
            pl_flag = pl_flag-1;
        }
        if( pl_flag > strlen(pl_txt)-1)
        {
            pl_flag = 0;
        }

         if(z>122)
         {
          printf("%c",z-26);
         }

         else if(z>=97 && z<=122)
         {
          printf("%c",z);
         }
         else if(z>90 && z<97)
         {
           printf("%c",z-26);
         }
         else if(z>=65 && z<=90)
         {
           printf("%c",z);
         }
    }
    }

  printf("\n");

}









