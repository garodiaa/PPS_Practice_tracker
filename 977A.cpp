#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int n,k;
    cin>>n>>k;
    while (k--)
    {
        //cout<<"in"<<endl;
        //if(k==0)break;
        if( n%10 > 0 ){
            n-=1;
        }
        else
        n/=10;
    //cout<<"value of k = "<<k<<"--Value of n = "<<n<<endl;
    }
    cout<<n<<endl;
    
    return 0;
}