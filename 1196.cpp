#include<iostream>
#include<string>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
char keyshift(char c)
{
    char sym[]=  "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    if(c==' ')
    {
        return ' '; 
    }
    if(c=='\n')
    {
        return '\n';
    }
    else{
        for (int i = 0; i < 49; i++)
        {
            if (c==sym[i])
            {
                return sym[i-1];
            }
        }
    }
    
}
int main()
{
    fastIO;
    string str;
    while(getline(cin,str))
    {
        int size = str.length();
        for (int i = 0; i < size; i++)
        {
            cout<<keyshift(str[i]);
        }
    cout<<endl;
    }
    //cout<<endl;
    return 0;
}