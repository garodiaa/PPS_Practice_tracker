#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int gcd(int n1,int n2){
    if(n1==0)return n2;
    if(n2==0)return n1;

    if(n1>n2)
    return gcd(n1%n2 , n2);
    else
    return gcd(n1, n2%n1);

}
int main()
{
    fastIO;
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    
    return 0;
}