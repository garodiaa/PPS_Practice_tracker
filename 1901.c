#include<stdio.h>
int main()
{
    int n;
    int i , j,count=0;
    scanf("%d",&n);
    int f[n][n];
    for ( i = 0; i <n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&f[i][j]);
        }
    }
    int a,b,x;
    x=2*n;
    int arr[x];
    for ( i = 0; i < x; i++)
    {
        scanf("%d %d",&a,&b);
        arr[i]=f[a-1][b-1];
    }

    for ( i = 0; i < x; i++)
    {
        for ( j = i+1; j < x; j++)
        {
            if (arr[i]==arr[j])
            {
                arr[j]=0;
            }
        }   
    }
    for ( i = 0; i < x; i++)
    {
       if (arr[i]>0)
       {
         count++;
       }
    }
    printf("%d\n",count);
    return 0;
}