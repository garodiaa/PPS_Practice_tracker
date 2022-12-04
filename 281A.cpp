#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    string word;
    cin>>word;
    if(word[0]>96)
    {
        word[0]=word[0]-32;
    }
    cout<<word;
    return 0;
}