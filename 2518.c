#include<stdio.h>
#include<math.h>
int main()
{
    int n ,h,c,l;
    double ra,rl;

    while (scanf("%d",&n) != EOF)
    {
    
    scanf("%d %d %d",&h,&c,&l);
    rl=(double)n*(sqrt(h*h + c*c));
    ra=(double)rl*l;
    printf("%.4lf\n",ra/10000);
    }
    return 0;
}