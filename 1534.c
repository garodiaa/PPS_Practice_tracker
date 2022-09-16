#include<stdio.h>
int main()
{
    int n;
    int i,j,k,l;
    int a,b;
    while (scanf("%d",&n)!=EOF)
    {
        int arr[n][n];
        a=0;
        b=n-1;
        for ( i = 0; i < n; i++)
        {
            for ( j= 0; j < n; j++)
            {
                if (i==a && j==b)
                {
                   arr[i][j]=2;
                }
                else if (i==j)
                {
                    arr[i][j]=1;
                }
                else
                arr[i][j]=3;
                
            }
            a++;
            b--;

            
        }

        for ( i = 0; i < n; i++)
        {
           for ( j = 0; j <n; j++)
           {
            printf("%d",arr[i][j]);
           }
           printf("\n");
           
        }
        
        
    }
    

    return 0;
}