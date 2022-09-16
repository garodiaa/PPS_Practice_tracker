#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main()
{
    int n , q ;
    int ar[100] , pos;
    int i , j , k ;
    while (scanf("%d %d",&n,&q)!=EOF)
    {
       for ( i = 0; i < n; i++)
       {
           scanf("%d",&ar[i]); 
       }

       qsort(ar, n, sizeof(int), cmpfunc);

       for ( i = 0; i < q; i++)
       {
           scanf("%d",&pos);
           printf("%d\n",ar[n-pos]);
       }
    
    }
    
     return 0;
}