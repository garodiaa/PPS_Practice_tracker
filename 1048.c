#include<stdio.h>
int main()
{
    float s , rs ,rm ,p;
    scanf("%f",&s);
if (s>=0 && s<=400.00)
{
    rs = s + s*.15;
    rm = rs-s;
    p=15;
}
else if (s>=400.01 && s<=800.00)
{
    rs = s + s*.12;
    rm = rs-s;
    p=12;
}
else if (s>=800.01 && s<=1200.00)
{
    rs = s + s*.10;
    rm = rs-s;
    p=10;
}
else if (s>=1200.01 && s<=2000.00)
{
    rs = s + s*.07;
    rm = rs-s;
    p=7;
}
else if (s>2000.00)
{
    rs = s + s*.04;
    rm = rs-s;
    p=4;
}


printf("Novo salario: %.2f\n",rs);
printf("Reajuste ganho: %.2f\n",rm);
printf("Em percentual: %.0f %%\n",p);
     return 0;
}