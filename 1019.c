#include<stdio.h>
int main()
{
    int N,i;
    int arr[]={3600,60,1};
    int brr[3];
    scanf("%d",&N);
    for ( i = 0; i < 3; i++)
    {
        brr[i]=N/arr[i];
        N=N%arr[i];
    }
    printf("%d:%d:%d\n",brr[0],brr[1],brr[2]);
     return 0;
}