#include<stdio.h>
int main()
{
    int n,k,l;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&k);
        while (k--)
        {
            scanf("%d",&l);
            if (l==1)
            {
                printf("Rolien\n");
            }
            else if (l==2)
            {
                printf("Naej\n");
  
            }
            else if (l==3)
            {
                printf("Elehcim\n");
  
            }
            else if (l==4)
            {
                printf("Odranoel\n");
  
            }
            
            
        }
        
       
    }
    
    
    return 0;
}