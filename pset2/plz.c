#define _XOPEN_SOURCE
#include <unistd.h>
#include<string.h>
#include<cs50.h>
#include<stdio.h>
int main(int argc ,string argv[])
{
    string y = argv[1];
     for(z=0;z<strlen(y);z++)
     {
      if(y[0] > 5 || y[0] < 5 )
      {
       printf("Usage: ./crack hash");
      }
      else
      {
        printf("saaaaa");  
      }
     }      
    
}
