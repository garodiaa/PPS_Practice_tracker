#include<stdio.h>
int main()
{
    int L , i , j;
    char T;
    double M[12][12] , sum=0.0;
    scanf("%d %c",&L,&T);
    for ( i = 0; i < 12; i++)
    {
        for ( j = 0; j < 12; j++)
        {
           scanf("%lf",&M[i][j]);
        }
        
    }
    for ( i = 0; i < 12; i++)
    {
        sum=sum+M[i][L];
    }
    if (T=='S')
    {
       printf("%.1lf\n",sum);
    }
    else
    {
        printf("%.1lf\n",(sum/12.0));
    }
    
     return 0;
}