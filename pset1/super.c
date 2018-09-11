#include<cs50.h>
#include<stdio.h>
int main (void)
{
    int s,q,u,z,k,e,g;
    float n, x;
    printf("O hai! How much change is owed?\n");
    n = get_float();
    while(n<0)
    {
         printf("O hai! How much change is owed?\n");
         n = get_float();
    }
    
 x = n/0.01;
 if(x == 1)
 { 
     
     printf("1\n");
     
 }
else  if(x == 2)
 {
     
     printf("2\n");
 }
else  if(x == 3)
 {
     
     printf("3\n");
 }
else if(x == 4)
 {
     
     printf("4\n");
 }
 
 else if(n>0.04)
 { 
    int t = 0;
    
    while(n>0)
    {
        k = n/0.25;
        t = t+k;
        k = n-k*0.25;
        
        e =k/0.1;
        t = t+e;
        k = k-e*0.1;
        
        g = k/0.5;
        t = t+g;
        k = k-g*0.5;
        
        p = k/0.01;
        t=t+p;
        n =k-p*0.01;
    }   
    
    printf("%d\n",t);  
  } 
     
 
 
  
  else
  {
        int a = 0;
    while (n>0)
    {
        z = n/25;
        a = a+z;
        z = n-z*25;
        
        q =z/10;
        a = a+q;
        z = z-q*10;
        
        s = z/5;
        a = a+s;
        z = z-s*5;
        
        u = z/1;
        a=a+u;
        n =z-u*1;
        
    }
    printf("%d\n",a);  
  }
}
      


