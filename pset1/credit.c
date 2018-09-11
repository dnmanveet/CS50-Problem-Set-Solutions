#include<cs50.h>
#include<stdio.h>
int main(void)
{
    long long i;
    printf("Number : ");
    i = get_long_long();
    
int s = i/100000000000000;

if( s == 3)
{
printf("AMEX\n");
}
else if( s == 51 || s == 52 || s == 53 || s == 54 || s == 55 )
printf("MASTERCARD\n");


else if(s > 9 && s < 99  && s !=51 && s != 52 && s != 53 && s != 54 && s != 55 )
printf("VISA\n");


else 
printf("INVALID\n");

}

