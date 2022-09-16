#include<stdio.h>
int main()
{
    int n , m;
    int dif;
    int arr[]={2,5,10,20,50,100};
    int i,j,pos=0;
    while (1)
    {
        scanf("%d %d",&n,&m);
        if (n==0 && m==0)
        {
            break;
        }
        dif=m-n;
        for ( i = 0; i<6; i++)
        {
            
            for ( j = i+1; j <6; j++)
            {
                if (arr[i]+arr[j]==dif)
                {
                    pos=1;
                    break;
                }
                
            }
            
        }
        if (pos==1)
        {
            printf("possible\n");
        }
        else
            printf("impossible\n");

        pos=0;
    }
    
    return 0;
}