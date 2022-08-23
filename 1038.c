#include<stdio.h>
int main()
{
    int X , Y ;
    float T ,arr[]={4.00 ,4.50,5.00,2.00,1.50};
    scanf("%d %d",&X,&Y);
     T=(arr[X-1])*Y;
     printf("Total: R$ %.2f\n",T);
     return 0;
}