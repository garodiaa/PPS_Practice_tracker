#include<stdio.h>
int main()
{
    int a,b,c;
    int h=0,s=0;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (c>=b)
        {
            h=1;
        }
        else if (b-c < a-b)
        {
           h=1;
        }
        else if (b-c>=a-b)
        {
            s=1;
        }
    }
    else if (a<b)
    {
        if (c<=b)
        {
           s=1;
        }
        else if (c-b<b-a)
        {
            s=1;
        }
        else if (c-b>=b-a)
        {
            h=1;
        }
    }
    else if (a==b)
    {
        if (c>b)
        {
            h=1;
        }
        else
        {
            s=1;
        }
        
        
    }


    if (s==1)
    {
        printf(":(\n");
    }
    if (h==1)
    {
        printf(":)\n");
    }
    
    
    return 0;
}