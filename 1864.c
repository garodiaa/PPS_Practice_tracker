#include<stdio.h>
int main()
{
    char quote[]={"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    int n;
    int i ;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("%c",quote[i]);
    }
    printf("\n");
    
     return 0;
}