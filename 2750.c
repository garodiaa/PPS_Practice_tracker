#include<stdio.h>
int main()
{
    int a[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    printf("---------------------------------------\n");
    printf("|  decimal  |  octal  |  Hexadecimal  |\n");
    printf("---------------------------------------\n");
    for (int i = 0; i <=15; i++)
    {
    printf("|%7d    |%5o    |%8X       |\n",a[i],a[i],a[i]);
    }
    printf("---------------------------------------\n");

    
    return 0;
}