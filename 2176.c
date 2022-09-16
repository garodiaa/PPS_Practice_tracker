#include<stdio.h>
#include<string.h>
int main()
{
    int i , c=0 , k ;
    char arr[101];
    scanf("%s",arr);
    for ( i = 0; i < strlen(arr); i++)
    {
        if (arr[i]=='1')
        {
            c++;
        }
        
    }
    if (c%2==0)
    {
       k=0;
    }
    else
     {k=1;}

     printf("%s%d\n",arr,k);
    
    
    
     return 0;
}