 #include<stdio.h>
 int main()
 {
     int x,z,sum=0,c=0;
     scanf("%d",&x);
     
     while (scanf("%d",&z)<x || scanf("%d",&z)==x )
     {
         if (z>x)
         {
            break;
         }
         
     }

     while (sum<z)
     {
         sum=sum+x;
         x++;
         c++;
     }
     printf("%d\n",c);
     
      return 0;
 }