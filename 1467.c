#include<stdio.h>
int main()
{
    int N , match=0;
    int A , B , C;
    while (scanf("%d %d %d",&A , &B ,&C)!=EOF)
    {
        if (A==1){match++;}else{A=0;}
        if (B==1){match++;}else{B=0;}
        if (C==1){match++;}else{C=0;}


        if (match==1)
        {
            if (A==1)
            {printf("A\n");}
            if (B==1)
            {printf("B\n");}
            if (C==1)
            {printf("C\n");}
        }
        if (match==2)
        {
            if (A==0)
            {printf("A\n");}
            if (B==0)
            {printf("B\n");}
            if (C==0)
            {printf("C\n");}
        }
        if (match!=1 && match!=2)
        {
            printf("*\n");
        }
        
        
        
        match=0;
        
    }
    
     return 0;
}