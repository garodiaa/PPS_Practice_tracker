#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j , k ;
    char line[1050];
    char lwr;
    int len , count=0,yes=0;

    while (gets(line))
    {
        if (line[0]=='*')
        {
            break;
        }
        len=strlen(line);
        for ( i = 0; i < len; i++)
        {
            lwr=tolower(line[i]);
            line[i]=lwr;
        }
        
        // strlwr(line);
        // printf("%s",line);

        for ( i = 0; i < len; i++)
        {
            if (line[i]==' ')
            {
                count++;
                if (line[i+1]==line[0])
                {
                    yes++;
                }
            }
        }
        if (yes==count)
        {
            printf("Y\n");
        }
        else
           { printf("N\n");}

            count=0;
            yes=0;
    }
    
     return 0;
}