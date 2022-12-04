#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        bool error = true;
        while(n!=1){
            if(n%6==0){
                n=n/6;
            }
            else
            n*=2;

            if(n<0){
                error = false;
                break;
            }

            count++;
        }
        if(error)
        cout<<count<<endl;
        else
        cout<<"-1"<<endl;
}
    return 0;
}