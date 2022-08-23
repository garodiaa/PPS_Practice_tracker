#include<stdio.h>
int main()
{
    int p ,q ;
    int m , n;
    int i;
    float sum=0;
    scanf("%d",&p);
    for ( i = 0; i < p; i++)
    {
        scanf("%d %d",&m,&n);
        if (m==1001)
        {
            sum=sum+1.50*n;
        }
        if (m==1002)
        {
            sum=sum+2.50*n;
        }
        if (m==1003)
        {
            sum=sum+3.50*n;
        }
        if (m==1004)
        {
            sum=sum+4.50*n;
        }
        if (m==1005)
        {
            sum=sum+5.50*n;
        }
        
    }
    printf("%.2f\n",sum);
    
     return 0;
}