#include<stdio.h>
int main()
{
    int  n ,i , x;
    int low,lowp=0;
    scanf("%d",&n); 
    int t[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&t[i]);
    }
    low=t[0];
    for ( i = 0; i < n; i++)
    {
        if (t[i]<low)
        {
            low=t[i];
            lowp=i;
        }
        
    }
    printf("%d\n",lowp+1);
    
     return 0;
}