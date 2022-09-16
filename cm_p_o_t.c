#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        
        printf("%d",10);
        // printf("%llu\n",pow((double)10,(double)n));
        for (i = 1; i < n; i++)
        {
            printf("%d",0);
        }
         printf("\n");
    }
    
    return 0;
}