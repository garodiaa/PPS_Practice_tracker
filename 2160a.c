#include<stdio.h>
#include<string.h>
int main()
{
    char L[501];
    gets(L);
    if (strlen(L)<=80)
    {
        printf("YES\n");
    }
    else
    printf("NO\n");
    
     return 0;
}