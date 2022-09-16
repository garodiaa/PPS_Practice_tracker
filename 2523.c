#include<stdio.h>
int main()
{
    char w[27];
    int n , l[10000];
    int i , j, k;
    while (scanf("%s",w)!=EOF)
    {
        scanf("%d",&n);
        for ( i = 0; i < n; i++)
        {
            scanf("%d",&l[i]);
        }
        for ( i = 0; i < n; i++)
        {
         k=l[i];
         printf("%c",w[k-1]);
        }
        printf("\n");
        
    }
    
     return 0;
}