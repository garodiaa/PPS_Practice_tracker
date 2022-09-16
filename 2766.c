#include<stdio.h>
#include <string.h>
struct name {
    char nam[31];
} names[10];
int main()
{
    for (int i = 0; i < 10; i++)
    {
    scanf("%s",&names[i].nam);
    }
    printf("%s\n",names[2].nam);
    printf("%s\n",names[6].nam);
    printf("%s\n",names[8].nam);
    return 0;
}