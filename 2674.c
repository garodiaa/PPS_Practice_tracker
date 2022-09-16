#include<stdio.h>
int main()
{
    int n;
    int i;
    while(scanf("%d",&n)!=EOF)
    {
            int isprime = 1;
            if (n==0 || n==1)
            {
            isprime=0;
            }
            
            for ( i = 2; i <=n/2; i++)
            {
                if (n%i==0)
                {
                isprime = 0;
                break;
                }
            }
            

            int DigIsPrime = 1;
            if (isprime == 1)
            {
            int x;
            while (n>0)
            {
                    x = n%10;
                    // printf("~%d ",x);
                    n=n/10;
                    if (x==0 || x==1)
                    {
                    DigIsPrime=0;
                    }
                    for ( i = 2; i <= x/2; i++)
                    {
                        if (x%i==0)
                        {
                        DigIsPrime = 0;
                        break;
                        }
                    }
                    // printf("-%d ",n);
            }
                if (DigIsPrime==1)
                {
                    printf("Super\n");
                }
                else
                printf("Primo\n");
            
            }
            else
            printf("Nada\n");
    }
    return 0;
}