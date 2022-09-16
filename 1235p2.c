#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char line[101];
    char p1[51] , p2[51];
    int i , j , k=0;
    int len , hlen ;

    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        getchar();
        gets(line);
        len=strlen(line);
        hlen=len/2;
        for ( j = 0; j <hlen; j++)
        {
            p1[j]=line[j];
        }
        p1[j]='\0';
        for (j = hlen; j < len; j++)
        {
            p2[k]=line[j];
            k++;
        }
        p2[k]='\0';
        strrev(p1);
        strrev(p2);
        printf("%s%s\n",p1,p2);
    }
    
     return 0;
}