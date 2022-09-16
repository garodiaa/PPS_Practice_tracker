#include<iostream>
using namespace std;
int main(){

int n;
while (1)
{
    cin>>n;
    if (n==0)
    {
        break;
    }
    
    int s;
    s=n*(n+1)*(2*n+1)/6;
    cout<<s<<endl;
}
 return 0;
}
