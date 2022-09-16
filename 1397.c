#include<stdio.h>
int main()
{
    int N , a , b ,p=0,q=0 , i ;
    do
    {
        scanf("%d",&N);
        if (N==0)
        {
            break;
        }
        
        for ( i = 0; i < N; i++)
        {
            scanf("%d %d",&a,&b);
            if (a>b)
            {
                p++;
            }
            else if (a<b)
            {
                q++;
            }
            else
            {
            }

        }
        printf("%d %d\n",p,q);
        p=0;
        q=0;

    } while (N!=0);
    

     return 0;
}