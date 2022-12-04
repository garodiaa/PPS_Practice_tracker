#include<stdio.h>
#define PI 3.1415
int main()
{
    int r , l ,b;
    float v ;
    scanf("%d %d",&r ,&l);
    v=(float)(4*PI*r*r*r/3);
    b=l/v; 
    printf("%d",b);
     return 0;
}