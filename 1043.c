#include<stdio.h>
int main()
{
    float A,B,C,peri,trap;
    scanf("%f %f %f",&A,&B,&C);
    if (A+B>C && B+C>A && A+C>B)
    {
        peri=A+B+C;
        printf("Perimetro = %.1f\n",peri);
    }
    else 
    {
        trap=(A+B)/2*C;
        printf("Area = %.1f\n",trap);
    }
    
     return 0;
}