#include<stdio.h>
int main()
{
    double A,B,C,temp;
    scanf("%lf %lf %lf",&A,&B,&C);
    if (A>0 && B>0 && C>0)
 {
    
    
    if (A>=B && A>=C)
    {
        if (C>=B)
        {
            temp=B;
            B=C;
            C=temp;
            
        }
        
    }
    else if (B>=A && B>=C)
    {
        if (A>=C)
        {
            temp=A;
            A=B;
            B=temp;
        }
        else if (C>=A)
        {
            temp=A;
            A=B;
            B=C;
            C=temp;
            
        }
        
    }
    else if (C>=A && C>=B)
    {
        if (A>=B)
        {
            temp=A;
            A=C;
            C=B;
            B=temp;
        }
        else if (B>=A)
        {
            temp=A;
            A=C;
            C=temp;
            
        }
        
    }
 }

    if (A>=(B+C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (A*A==(B*B+C*C))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (A*A>(B*B+C*C))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (A*A<(B*B+C*C))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if (A==B && B==C && A==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if ((A==B && B!=C) || (A==C && C!=B) || (B==C && C!=A))
    {
       printf("TRIANGULO ISOSCELES\n");
    }
    
     return 0;
}