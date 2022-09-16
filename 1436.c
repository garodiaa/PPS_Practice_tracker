#include<stdio.h>
int main()
{
    int t , n , arr[12];
    int i , j ;

    scanf("%d",&t);
    for ( i = 1; i <=t; i++)
    {
        scanf("%d",&n);
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&arr[j]);
        }
    
        printf("Case %d: %d\n",i,arr[n/2]);
        
    }
    
     return 0;
}