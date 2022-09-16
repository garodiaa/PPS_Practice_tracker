#include<stdio.h>
int main()
{
    int N ,i=0;
    int a,b,c,d,e;
    int black=0;
    do{
          scanf("%d",&N);

          for ( i = 0; i < N; i++)
         {
             scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

            if(a <= 127){ black++; a = 1; } else { a = 0; }
            if(b <= 127){ black++; b = 1; } else { b = 0; }
            if(c <= 127){ black++; c = 1; } else { c = 0; }
            if(d <= 127){ black++; d = 1; } else { d = 0; }
            if(e <= 127){ black++; e = 1; } else { e = 0; }



            if (black==1)
            {
                 if (a==1){printf("A\n");}
                 if (b==1){printf("B\n");}
                 if (c==1){printf("C\n");}
                 if (d==1){printf("D\n");}
                 if (e==1){printf("E\n");}
            }
            else
            {
                 printf("*\n");
            }
            black=0;
          }

    }
    while (N!=0);
    
     return 0;
}