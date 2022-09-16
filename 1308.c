#include<stdio.h>
#include<math.h>
int main()
{
    int t ,i;
    long long int n ;
    double delta , j ;
    scanf("%d",&t);
    for ( i = 0; i < t; i++)
    {
        scanf("%lld",&n);
        delta=1+8*n;
        j=(-1 + sqrt(delta))/2;

       /*j=0;
        dif=n;
        while (dif>=(j+1))
        {
            ++j;
            dif=dif-j;
        }*/
        
        printf("%lld\n",(long long int)j);
        
    }
    
     return 0;
}