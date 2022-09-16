#include<stdio.h>
int main()
{
    int C , B , P , c , b, p;
    int m=0 ,n=0,q=0;
    scanf("%d %d %d",&C,&B,&P);
    scanf("%d %d %d",&c,&b,&p);
     if (C-c<=0)
     {
         m=c-C;
     }
     if (B-b<=0)
     {
         n=b-B;
     }
     if (P-p<=0)
     {
         q=p-P;
     }

     printf("%d\n",m+n+q);
     

     return 0;
}