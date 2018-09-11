#include<cs50.h>
#include<stdio.h>
int main(void)
{
   
    printf("Minutes = ");
    int Minutes = get_int();
    
    if(Minutes != 0)
    {
     int Bottles = 12*Minutes;
      printf(" Bottles = %i\n",Bottles);
    }
}
