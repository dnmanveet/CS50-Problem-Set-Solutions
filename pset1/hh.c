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
         for(int z = w; z > 0; z--)
            {
              printf(" ");
            }
      
       for(int j = i+1; j>0; j--)
         {
          printf("%c",'#');
         }
     
          printf("  ");
      
      
      for(int j = i+1; j>0; j--)
      {
          printf("%c",'#');
      }
      printf("\n");
       w = w-1;
     }   
     
 }
}
    
         
            
    
 
 