#include<stdio.h>
int main()
{
    int a=0,g=0,d=0;
    int n;
    for ( ;;)
    {
        scanf("%d",&n);
        if (n==1)
        {
            a++;
        }
        else if (n==2)
        {
            g++;
        }
        else if (n==3)
        {
            d++;
        }
        else if (n==4)
        {
            break;
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    
     return 0;
}