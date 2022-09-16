#include<stdio.h>
int main()
{
    int N , i , sum=0;
    int t1=0,t2=1;
    scanf("%d",&N);
    printf("%d %d ",t1 ,t2);
    sum=t1+t2;
    for ( i = 3; i <N; i++)
    {
        printf("%d ",sum);
        t1=t2;
        t2=sum;
        sum=t2+t1;
    }  
    printf("%d\n",sum);
     return 0;
}