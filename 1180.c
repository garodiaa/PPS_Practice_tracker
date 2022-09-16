#include<stdio.h>
int main()
{
    int n;
    int i,low,pos;
    scanf("%d",&n);
    int x[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }

        low=x[0];
    for ( i = 1; i < n; i++)
    {
        
        if (x[i]<low)
        {
            low=x[i];
            pos=i;
    

        }
    }
    
    printf("Menor valor: %d\n",low);
    printf("Posicao: %d\n",pos);
    
     return 0;
}