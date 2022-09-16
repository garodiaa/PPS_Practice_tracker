#include<stdio.h>
#include<math.h>
int main()
{
    int T , N , S=0 ,i,j;
    scanf("%d",&T);
    for ( i = 0; i < T; i++)
    {
        scanf("%d",&N);
        for ( j = 0; j < N; j++)
        {
           S=S+pow(2,j);
        }
        printf("%d\n",S);
        S=0;
    }
    
     return 0;
}