#include<stdio.h>
int main()
{
    int x, y ;
    int i , j ; 
    int sum=0;
    scanf("%d %d",&x,&y);

    if (x>y)
    {
       for ( i = y; i <=x; i++)
     {
        if (i%13!=0)
        {
          sum+=i;
        }
        
      }
    }
    else
    for ( i = x; i <=y; i++)
    {
        if (i%13!=0)
        {
          sum+=i;
        }
        
    }
    printf("%d\n",sum);
     return 0;
}