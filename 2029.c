#include<stdio.h>
int main()
{
    double v,d,h,r,a;

    while (scanf("%lf %lf",&v,&d) != EOF)
    {
        r=d/2;
        h=v/(3.14*r*r);
        a=(3.14*r*r);
        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2f\n",a);
    }
    

     return 0;
}