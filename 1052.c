#include <stdio.h>
int main()
{
    int m;
    char array[][12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    scanf("%d", &m);
    printf("%s\n",array[m-1]);

    return 0;
}