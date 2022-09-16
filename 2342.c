#include<stdio.h>
int main()
{
    int a,b,d;
    char c;
    scanf("%d %d %c %d",&a,&b,&c,&d);
    if (c=='+')
    {
        if (b + d > a)
        {
            printf("OVERFLOW\n");
        }
        else
            printf("OK\n");
    }
    if (c=='*')
    {
        if (b * d > a)
        {
            printf("OVERFLOW\n");
        }
        else
            printf("OK\n");
    }
    
    return 0;
}