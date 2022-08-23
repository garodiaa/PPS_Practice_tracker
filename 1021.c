#include <stdio.h>
int main()
{
    int X,i, j,k,l;
    double N;
    float arr[] = {100, 50, 20, 10, 5, 2,1,0.50, 0.25, 0.10, 0.05, 0.01 };
    int arrc[12];
    int nrr[12];

    for ( l = 0; l < 12; l++)
    {
        arrc[l]=arr[l]*1000;
    }
    
    scanf("%lf", &N);
    X=N*1000;
    for (i = 0; i < 12; i++)
    {
        nrr[i] = X / (arrc[i]);
        X = X % (arrc[i]);
    }

    printf("NOTAS:\n");
    for (j = 0; j < 6; j++)
    {
        printf("%d nota(s) de R$ %.2f \n", nrr[j], arr[j]);
    }
    printf("MOEDAS:\n");
    for (k = 6; k < 12; k++)
    {
        printf("%d moeda(s) de R$ %.2f \n", nrr[k], arr[k]);
    }
    return 0;
}