#include<stdio.h>
int main()
{
    
    int n;
    int hn,a,b,c=0;
    int i, j, k,l=1;
    
    for (;;)
    {
        scanf("%d",&n);
        if (n==0)
        {
            break;
        }

         int arr[n][n];

    
        a=0;
        b=n-1;

        for ( i = 0; i <n; i++)
        {
          for ( j = a; j < n; j++)
            {
                for ( k = a,l=c+1; k <n; k++,l++)
                {
                    
                    arr[j][k]=l;
                }
                c++;
    
            }
            a++;
            c=0; 
        }   
        c=0;

        for ( i = 0; i < n; i++)
       {
            for ( j = 0; j < n; j++)
            {
                if (j==0)
                {
                    printf("%3d",arr[i][j]);
                }
                 else
                printf(" %3d",arr[i][j]);
            }       printf("\n");
        }
        printf("\n");
        
        
    }
    
     return 0;
}