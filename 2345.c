#include<stdio.h>
int main()
{
    int a,b,c,d;
    int x1,x2,y1,y2;

    scanf("%d %d %d %d",&a,&b,&c,&d);
    x1=b+c-a-d;
    x2=a+d-b-c;
    y1=a+c-b-d;
    y2=b+d-a-c;

    if (x1>=x2)
    {
        if (y1>=y2)
        {
            if (y1>x1)
            {
                printf("%d\n",x1);
            }
            else
                printf("%d\n",y1);
        }
        else
           if (y2>x1)
            {
                 printf("%d\n",x1);
            }
            else
                 printf("%d\n",y2);
    }

    else

         if (y1>=y2)
        {
            if (y1>x2)
            {
                printf("%d\n",x2);
            }
            else
                printf("%d\n",y1);
        }
        else
           if (y2>x2)
            {
                 printf("%d\n",x2);
            }
            else
                 printf("%d\n",y2);
    
     return 0;
}