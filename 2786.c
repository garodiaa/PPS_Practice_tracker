#include<stdio.h>
int main()
{
    int L , C ;
    int t1 , t2 ;
    scanf("%d %d",&L , &C);
     t1=L*C + (L-1)*(C-1);
     t2=(L-1)*2+ (C-1)*2;
     printf("%d\n%d\n",t1,t2);
     return 0;
}