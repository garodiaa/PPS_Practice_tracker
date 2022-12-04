#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return fib(n-1)+ fib(n-2);
}
int main()
{
    fastIO;
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    
    return 0;
}