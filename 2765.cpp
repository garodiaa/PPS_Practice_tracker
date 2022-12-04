#include<iostream>
#include<cstring>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    string str;
    getline(cin,str);
    for (int i = 0; i < strlen(str.c_str()); i++)
    {
       if(str.c_str()[i] == ',')
       {
        cout<<endl;
        continue;
       }
       cout<<str.c_str()[i];
    }
    cout<<endl;
    return 0;
}