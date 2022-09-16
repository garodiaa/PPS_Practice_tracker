#include<stdio.h>
int main()
{
    int arr[100] , i ,j , x=0,y;
    for ( i = 0; i < 100; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]>x)
        {
            x=arr[i];
            y=i+1;
        }
        
    }
        printf("%d\n",x);
        printf("%d\n",y);
    
     return 0;
}