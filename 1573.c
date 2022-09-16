#include<stdio.h>
#include<math.h>
int main()
{
     int a , b, c ;
     int x ;
     do
     {   
         scanf("%d %d %d",&a,&b,&c);
         if (a==0 && b==0 && c==0)
         {
        break;
          }
         x=pow(a*b*c,(double)1/3);
         printf("%d\n",x); 

     } while (a!=0 && b!=0 && c!=0);
     
     return 0;
}