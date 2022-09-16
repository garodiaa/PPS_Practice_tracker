#include<stdio.h>
int main()
{
    int n ;
    while(scanf("%d",&n)!=2002){
        if (n==2002)
        {
            break;
        }
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");
     return 0;
}