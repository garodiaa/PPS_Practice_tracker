#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int fact(int n){
    if(n==1)return 1;

    return n*fact(n-1);


}
//               fact(5)--> 5*fact(4)--->4*fact(3)-->3*fact(2)--->2*fact(1)
//reverse order      120 <---5*(24) <---  4*(6)  <--- 3*(2)  <--- 2*(1)  
int main()
{
    fastIO;
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    
    return 0;
}