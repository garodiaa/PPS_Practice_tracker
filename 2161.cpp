#include<iostream>
#include<iomanip>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
double root(double n){
    if(n==0) return 0;
    if(n==1) return 6;

    return 1/(root(n)+1/root(n-1));
}

int main()
{
    fastIO;
    double n;
    cin>>n;
    cout<< fixed << setprecision(10) << double(root(n))<<endl;
    
    return 0;
}