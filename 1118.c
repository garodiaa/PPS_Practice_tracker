#include<stdio.h>
int main()
{
    double a,b;
    int x;

for (;;)
{
    for (;;)
    {
     scanf("%lf",&a);
      if (a>=0 && a<=10)
        break;
      else
      printf("nota invalida\n");
    }
    for (;;)
    {
     scanf("%lf",&b);
      if (b>=0 && b<=10)
        break;
      else
      printf("nota invalida\n");
    }

    printf("media = %.2lf\n",(a+b)/2.0);
    
    printf("novo calculo (1-sim 2-nao)\n");
    for (;;)
    {
        scanf("%d",&x);
        if (x>=1 && x<=2)
        break;
        
        printf("novo calculo (1-sim 2-nao)\n");

    }
    if (x==2)
    {
        break;
    }
}


     return 0;
}