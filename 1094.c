#include<stdio.h>
int main()
{
    int N , total , frg=0, rab=0, rat=0;
    float pc , pr , ps;
    int i , j , a;
    char b;
    scanf("%d",&N);
    for ( i = 0; i < N; i++)
    {
        scanf("%d %c",&a , &b);
        if (b=='C')
        {
           rab+=a;
        }
        if (b=='R')
        {
           rat+=a;
        }
        if (b=='S')
        {
           frg+=a;
        }
        
    }
    total=(float)(rab+rat+frg);
    pc=(float)(rab*100/(float)total);
    pr=(float)(rat*100/(float)total);
    ps=(float)(frg*100/(float)total);
    
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rab);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frg);
    printf("Percentual de coelhos: %.2f %%\n",pc);
    printf("Percentual de ratos: %.2f %%\n",pr);
    printf("Percentual de sapos: %.2f %%\n",ps);
     return 0;
}