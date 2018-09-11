#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
int main(int z, string argv[])
{

      string y = argv[1];
      
     
    for(int i=0 ;i<strlen(y); i++)
    {
        z = toupper(y[i])-65;
       printf("%d",z);
    }
    
}