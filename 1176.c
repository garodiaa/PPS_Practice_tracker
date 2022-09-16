#include<stdio.h>
int main()
{
    int T , n ,i,  j;
    long long int N[61];
    N[0]=0;
    N[1]=1;
    scanf("%d",&T);
    for ( i = 0; i < T; i++)
    {
         scanf("%d",&n);
          for ( j = 2; j <=n; j++)
            {
                 N[j]=N[j-1]+N[j-2];
            }
           printf("Fib(%d) = %lld\n",n,N[n]);

    }
    
     return 0;
}