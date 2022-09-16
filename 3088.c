#include<stdio.h>
#include<string.h>
int main()
{

    char sen[100000];
    int i, j , k ;

    while (gets(sen))
    {
        for ( i = 0; i < strlen(sen); i++)
        {
            if (sen[i]==' ')
            {
                if (sen[i+1]==','|| sen[i+1]=='.')
                {
                    printf("%c",sen[i+1]);
                    i++;
                }
                else
                  printf("%c",sen[i]);
            }
            else
              printf("%c",sen[i]);
        }
        printf("\n");
        
    }
    
     return 0;
}