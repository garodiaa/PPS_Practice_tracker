#include<stdio.h>
int main()
{
    int X ,i ;
    do
    {
        scanf("%d",&X);
        if (X==0)
        {
           continue;
        }
        
        for ( i = 1; i <=X-1; i++)
        {
            printf("%d ",i);
            
        }   printf("%d\n",X);
        

    } while (X!=0);
    
    
     return 0;
}