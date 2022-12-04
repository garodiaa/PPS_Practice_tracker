#include<iostream>
#include <cstring>
#include <string>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    string str = "AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n",str.c_str());
    printf("<%30s>\n",str.c_str());
    printf("<%.20s>\n",str.c_str());
    printf("<%-20s>\n",str.c_str());
    printf("<%-30s>\n",str.c_str());
    printf("<%.30s>\n",str.c_str());
    printf("<%30.20s>\n",str.c_str());
    printf("<%-30.20s>\n",str.c_str());
    
    
    return 0;
}