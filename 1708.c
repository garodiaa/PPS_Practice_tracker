#include<stdio.h>
int main()
{
    int x , y ;
    int i=1;
    int dif;
    scanf("%d %d",&x,&y);
    while ((y*i-x*i)<y)
    {
        i++;
    }
    printf("%d\n",i);
    
    
     return 0;
}