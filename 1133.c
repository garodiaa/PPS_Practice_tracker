#include<stdio.h>
int div(int a , int b);
int main()
{
    int X , Y , i ;
    scanf("%d %d",&X ,&Y);
    if (X>Y)
    {
        div(Y+1,X);
    }
    if (Y>X)
    {
        div(X+1,Y);
    }
    
    
     return 0;
}
int div(int a , int b)
{
     while (a<b)
     {
         if (a%5==2 || a%5==3)
         {
             printf("%d\n",a);
         }
         a++;
     }
     
}