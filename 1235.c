#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char line[150];
    char p1[150];
    int i , j , k;
    int len , hlen ;

    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        gets(line);
        if (i==0)
        {
            continue;
        }
        len=strlen(line);
        hlen=len/2;
        
        for ( k=0,j =hlen-1; j>=0; j--)
        {
            p1[k]=line[j];
            k++;
        }
        
        for (j = len-1; j>=hlen; j--)
        {
            p1[k]=line[j];
            k++;
        }
        p1[k]='\0';
        printf("%s\n",p1);
        k=0;
    }
    
     return 0;
}