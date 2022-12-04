#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    string str1,str2;
    cin>>str1>>str2;
    int s1,s2;
    int i=0;
    s1=str1.length();
    s2=str2.length();
    while (true)
    {
        if (str1[i]<str2[i])
        {
            cout<<str1<<endl<<str2<<endl;
            break;
        }
        else if(str1[i]>str2[i])
        {
             cout<<str2<<endl<<str1<<endl;
            break;
        }
        else
        {
            if(s1<s2)cout<<str1<<endl<<str2<<endl;
            else cout<<str2<<endl<<str1<<endl;
            break;
        }
        i++;
    }
    
    return 0;
}