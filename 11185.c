#include<stdio.h>
int main()
{
    while (1)
    {
        int n;
        scanf("%d",&n);
        if (n<0)
        {
            break;
        }
        if(n==0)
        {
            printf("0\n");
           continue;
        }
        int i=0,j;
        int rem;
        int a[20];
        while (n)
        {
            rem=n%3;
            n=n/3;
            a[i]= rem;
            i++;
        }
        for ( j = i-1; j >= 0; j--)
        {
            printf("%d", a[j]);
        }
        printf("\n");
    }
    return 0;
}