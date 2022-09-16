#include<stdio.h>
int sequ(int m , int n);
int main()

{  
   int  m[100], n[100] ,i,j=0;
   for ( i = 0; i < 100; i++)
   {
      scanf("%d %d",&m[i],&n[i]);
      if (m[i]<=0 || n[i]<=0)
      {
        break;
      }
   }
   
    while (j<i)
    {
        if (m[j]>n[j])
        {
            sequ(n[j],m[j]);
            

        }
        if (n[j]>m[j])
        {
            sequ(m[j],n[j]);
            
        }
        if(m[j]==n[j])
        {
            sequ(m[j],n[j]);
            

        }

        j++;
    }
    
    
     return 0;
}


int sequ(int m ,int n)
{

    int i=0,sum=0;
    for ( i = m; i <= n ; i++)
    {
        printf("%d ",i);
        sum+=i;
    }
    printf("Sum=%d\n",sum);
    
}