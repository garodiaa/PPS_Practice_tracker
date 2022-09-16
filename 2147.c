#include<stdio.h>
#include<string.h>
int main()
{
    char g[10001];
    int t , i  , j ;
    float l ;
    scanf("%d",&t);
    for ( i = 0; i < t; i++)
    {
        scanf("%s",g);
        l=strlen(g)*(.01);
          printf("%.2f\n",l);
    }
    
     return 0;
}