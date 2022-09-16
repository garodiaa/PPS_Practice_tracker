#include<stdio.h>
#include<stdbool.h>

int main()
{
    int i,j;
    int arr[5];
    bool inc = false, dec =false , other = false;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < 4; i++)
    {
       if (arr[i]<=arr[i+1])
       {
         inc = true;
       }
       else if (arr[i]>=arr[i+1])
       {
        if(inc)
        {
            inc = false;
            break;
        }
        else
        dec= true;
       }
    }
    if (inc)
    {
        printf("C\n");
    }
    else if (dec)
    {
        printf("D\n");
    }
    else
    printf("N\n");
    return 0;
}