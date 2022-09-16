#include<stdio.h>
int main()
{
    int n , arr[1000] , arrr[1000] ;
    int i , j , k ;
    do
    {   scanf("%d",&n);
        for ( i = 0; i < n; i++)
        {
           scanf("%d",&arr[i]);
           arrr[i]=arr[i]; 
        }


        for ( i = 0; i < n-1; i++)
       {
          for ( j = i+1; j < n; j++)
         {
            if (arrr[j]<arrr[i])
            {
                int temp=arrr[j];
                arrr[j]=arrr[i];
                arrr[i]=temp;
            }
            
          }
       }

       for ( k = 0; k < n; k++)
       {
          if (arrr[n-2]==arr[k])
          {
              printf("%d\n",k+1);
          }
          
       }
       
        
    } while (n!=0);
    
     return 0;
}