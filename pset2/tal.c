#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
int main(int z, string argv[])
{
      printf("plaintext: ");
      string s = get_string();
      string pl_txt = argv[1];

      int pl_flag = 0;
      printf("ciphertext: ");
      
    for(int i=0 ;i<strlen(s); i++)
    {

        if( pl_flag > strlen(pl_txt)-1)
        {
            pl_flag = 0;
        }
    
      z = s[i]+(toupper(pl_txt[pl_flag])-65);
      
      pl_flag = pl_flag+1;
      if(z > 26)
      {
          z = z-26;
          printf("%c",z);
      }
      else
      {
        printf("%c",z);
      }
  }
  printf("\n");
}

        
 
  


    


    