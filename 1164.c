#include<stdio.h>
int main()
{
    int n,x;
    int i,sum=0;

    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&x);
        for ( i = 1; i <x; i++)
        {
           if (x%i==0)
           {
               sum+=i;
           }
           
        }
        if (sum==x)
        {
            printf("%d eh perfeito\n",x);
        }
        else
            printf("%d nao eh perfeito\n",x);
          
        sum=0;
    }
    
     return 0;
}