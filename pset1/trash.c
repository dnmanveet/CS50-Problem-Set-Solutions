#include<cs50.h>
#include<stdio.h>

int sigma(int m);

int main(void)
{
    int sum = 0;
    for (int i = 1; i <= 'm'; i++ )
    {
        sum+= i;
    }
    return sum;
    
}
