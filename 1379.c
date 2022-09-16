#include<stdio.h>
int main()
{
    long int a,b,c;
    while (scanf("%ld %ld",&a,&b)!=0)
    {
        if (a==0 && b==0)
        {
            break;
        }
        c=a*3-(a+b);
        printf("%ld\n",c);
    } 
    
    
    

     return 0;
}