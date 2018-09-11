#include<cs50.h>
#include<stdio.h>
int main(void)
{
    
    int Height;
   
    printf("Height : ");
    Height = get_int();
     
     while(Height > 23 || Height<0) 
      {
           printf("Height : ");
           Height = get_int();
      }   
   
    if(Height <=23 && Height >= 0)
    {
     int w = Height;
     for(int i = 0 ;i<Height; i++)
     {
      
       for(int j = w; j>0; j--)
         {
          printf("1");
         }
      for(int p = 0; p > i; p++)
      {
       printf("%c",'#');
      }
          printf("  ");
       
      for(int p = 0; p > i; p++)
      {
       printf("%c",'#');
      }
      
      for(int j = w; j>0; j--)
      {
          printf("1");
      }
      printf("\n");
       w = w-1;
     }   
     
 }
}
    
         
            
    
 
 