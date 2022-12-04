#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int n;
    cin>>n;
    while(n--)
    {
        string word;
        cin>>word;
        int x=word.length();
        if(x<=10)
        {
            cout<<word<<endl;
        }
        else
        cout<<word[0]<<x-2<<word[x-1]<<endl;
    }

    return 0;
}