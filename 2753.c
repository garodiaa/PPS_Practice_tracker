#include<stdio.h>
int main()
{
    int arr[26];
    int i,k;
    for (i = 0,k=97; i <26; i++,k++)
    {
        arr[i]=k;
    }
    for ( i = 0; i < 26; i++)
    {
        printf("%d e %c\n",arr[i],arr[i]);
    }
    
    
    return 0;
}