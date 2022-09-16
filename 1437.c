#include<stdio.h>
int main()
{
    int n,i;
    while (1)
    {
        scanf("%d",&n);
        if (n==0)
        {
            break;
        }
        char a[n],x='N';
        getchar();
        for ( i = 0; i < n; i++)
        {
            scanf("%c",&a[i]);
        }
        
        for ( i = 0; a[i]!='\0'; i++)
        {
            if (a[i]=='E')
            {
                if (x=='N')
                {
                    x='O';
                }
                else if (x=='L')
                {
                    x='N';
                }
                else if (x=='S')
                {
                    x='L';
                }
                else if (x=='O')
                {
                    x='S';
                }
            }
            else if (a[i]=='D')
            {
                if (x=='N')
                {
                    x='L';
                }
                else if (x=='L')
                {
                    x='S';
                }
                else if (x=='S')
                {
                    x='O';
                }
                else if (x=='O')
                {
                    x='N';
                }
            }
        }
        printf("%c\n",x);
        
    }
    
    return 0;
}