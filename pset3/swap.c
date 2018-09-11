#include<stdio.h>

int main(void)
{
    int a,b,y;
    scanf("%d %d",&a,&b);
    
    
      y = a;

      // Value of secondNumber is assigned to firstNumber
      a = b;

      // Value of temporaryVariable (which contains the initial value of firstNumber) is assigned to secondNumber
      b = y;
    printf("a is %d and b is %d ",a,b);
}