#include<stdio.h>
int main()
{
    int i , N , arr[10000] , arrr[10000];
    float div[10000];
    scanf("%d",&N);

    for ( i = 0; i < N; i++)
    {
        scanf("%d %d",&arr[i],&arrr[i]);
        if (arrr[i]==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
          printf("%.1f\n", (float)arr[i]/arrr[i] );
        }
        
    }
    
     return 0;
}