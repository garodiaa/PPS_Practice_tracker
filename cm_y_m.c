#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 1; i <=t; i++)
    {
        int m;
        scanf("%d",&m);
        int x=1000,n;
        for (int j = 0; j < m; j++)
        {
            char c;
            // scanf("%*c",&c);
            scanf(" %c %d",&c,&n);
            if (c=='+')
            {
                x=x+n;    
            }
            if (c=='-')
            {
                x=x-n;    
            }
        
        }
            printf("Case %d: %d\n",i,x);
    }
    return 0;
}