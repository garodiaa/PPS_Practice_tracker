#include<stdio.h>
int main()
{
    char a[]={'A','B','C','D','E'};
    printf("%8c\n",a[0]);
    printf("%7c %c\n",a[1],a[1]);
    printf("%6c%4c\n",a[2],a[2]);
    printf("%5c%6c\n",a[3],a[3]);
    printf("%4c%8c\n",a[4],a[4]);
    printf("%5c%6c\n",a[3],a[3]);
    printf("%6c%4c\n",a[2],a[2]);
    printf("%7c %c\n",a[1],a[1]);
    printf("%8c\n",a[0]);
    return 0;
}