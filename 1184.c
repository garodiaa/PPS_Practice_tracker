#include<stdio.h>
int main()
{
    int  i , j;
    char T;
    double M[12][12] , sum=0.0;
    scanf("%c",&T);
    for ( i = 0; i < 12; i++)
    {
        for ( j = 0; j < 12; j++)
        {
           scanf("%lf",&M[i][j]);
        }
        
    }
    for ( i = 0; i < 11; i++)
    {
        for ( j = i+1; j < 12; j++)
        {
             sum=sum+M[j][i];
        }
        
    }

    if (T=='S')
    {
       printf("%.1lf\n",sum);
    }
    else
    {
        printf("%.1lf\n",(sum/66.0));
    }
    
     return 0;
}