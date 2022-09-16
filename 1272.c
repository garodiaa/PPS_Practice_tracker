#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int i, j , k ;
    int len ;
    char line[52];
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        gets(line);
        if (i==0)
        {
            continue;
        }
        len=strlen(line);
        for ( j = 0; j < len; j++)
        {
            if (j==0)
            {
                if (line[j]!=' ')
                {
                printf("%c",line[0]);
                }
                
            }
            if (line[j]!=' ')
            {
                
               if (line[j-1]==' ')
               {
                  
               printf("%c",line[j]);
               }
               
            }
        }
        printf("\n");
        
    }
    
     return 0;
}