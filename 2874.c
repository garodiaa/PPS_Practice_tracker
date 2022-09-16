#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char str[9];
    char line[100001];
    int i , j , k=0,l;
    int len,sum=0;

    while (scanf("%d",&n)!=EOF)
    {
        k=0;
        for ( i = 0; i < n; i++)
        {
            scanf("%s",str);
            len=strlen(str);
            for ( j=1,l = len-1; l >=0; l--,j=j*2)
            {
                sum=sum+(str[l]-48)*j;
            }
            line[k]=sum;
            k++;
            sum=0;
            
        }
        line[k]='\0';
        puts(line);
        
    }
    
     return 0;
}