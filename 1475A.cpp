#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int t;
    cin>>t;
    while (t--)
    {
        unsigned long long int n,i;
        bool odd=false;
        cin>>n;
        if(n&1)cout<<"YES"<<endl;
        else
        {
        //even hoileo odd divisor thake, tai checking 
            for (i = n; i > 2; i/=2)
            {
                if(i&1){
                odd=true;
                break;
                }
            }
            
            if(odd)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    
    
    return 0;
}