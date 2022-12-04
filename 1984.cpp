#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    unsigned long long n;
    cin>>n;
    while(n!=0)
    {
        int x=n%10;
        cout<<x;
        n/=10;
    }
    cout<<endl;
    
    return 0;
}