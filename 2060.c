 #include<stdio.h>
 int main()
 {
     int N , arr[1000] , p2,p3,p4,p5;
     int i;
     p2=p3=p4=p5=0;
     scanf("%d",&N);
     for ( i = 0; i < N; i++)
     {
         scanf("%d",&arr[i]);
         if (arr[i]%2==0)
         {
             p2++;
         }
         if (arr[i]%3==0)
         {
             p3++;
         }
         if (arr[i]%4==0)
         {
             p4++;
         }
         if (arr[i]%5==0)
         {
             p5++;
         }
         
     }

     printf("%d Multiplo(s) de 2\n",p2);
     printf("%d Multiplo(s) de 3\n",p3);
     printf("%d Multiplo(s) de 4\n",p4);
     printf("%d Multiplo(s) de 5\n",p5);
     
      return 0;
 }