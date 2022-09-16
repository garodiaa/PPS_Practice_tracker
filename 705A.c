#include<stdio.h>
int main()
{
    int n;
    int count;
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if (i%2!=0)
        {
            printf("I hate ");
        }
        else if (i%2==0)
        {
            printf("I love ");
        }

        if (i==n)
        {
            printf("it\n");
        }
        else
            printf("that ");
    }
    return 0;
}