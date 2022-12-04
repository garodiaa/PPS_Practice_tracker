#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    long long int a,b;
    while(cin>>a>>b)
    {
    long long int x=a^b;
    cout<<x<<endl;
    }
    return 0;
}