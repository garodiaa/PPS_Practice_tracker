#include<stdio.h>
int main()
{
    int X , Y ,i,j=0;
    scanf("%d %d",&X ,&Y);
    for ( i = 1; i <=Y; i++)
    {
        j++;
        if (j==X)
        printf("%d",i);
        else
        printf("%d ",i);
        
        if (j==X)
        {
            printf("\n");
            j=0;
        }
        
    }
    
    
     return 0;
}