#include<stdio.h>
int main()
{
    int x,e;
    int i;
    for ( ;;)
    {
        scanf("%d %d",&x,&e);
        if (x==0 && e==0)
        {
           break;
        }
        printf("%d\n",x*e);
        
    }
    
     return 0;
}