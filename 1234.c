#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char sen[52];
    int i , j , k ;
    int len  ;
    int up=1,low=0;
     while (gets(sen))
     {
        len=strlen(sen);
        for ( i = 0; i < len; i++)
        {
            if (sen[i]==' ')
            {
                continue;
            }
            else if(up==1){
            sen[i]=toupper(sen[i]);
            up=0;
            low=1;
            }
            else if (low==1)
            {
            sen[i]=tolower(sen[i]);
            low=0;
            up=1;    
            }
        }
       printf("%s\n",sen);
       up=1,low=0;

     }
     return 0;
}