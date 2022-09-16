#include<stdio.h>
int main()
{
    int N , S[100000] ;
    int i , j , min=0 , sum=0;

    scanf("%d",&N);
    for ( i = 0; i < N; i++)
    {
        scanf("%d",&S[i]);
        min=min+S[i]%3;
        sum=sum+S[i];
    }

    printf("%d\n",sum-min);
    
     return 0;
}