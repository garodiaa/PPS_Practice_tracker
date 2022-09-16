#include<stdio.h>
#include<string.h>
int main()
{
    int c , n;
    char s[1000];
    int i , j , k ;
    scanf("%d",&c);
    for ( i = 0; i < c; i++)
    {
        scanf("%s %d",s,&n);
        if (!strcmp(s,"Thor"))
        //if (strcmp(s,"Thor")==0) both are same
        {
            printf("Y\n");
        }
        else
        printf("N\n");
    
    }
    
         return 0;
}