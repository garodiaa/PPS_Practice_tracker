#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int n;
    while(cin>>n)
    {
        if(n>=0 && n<=180)
        {
            if(n%6==0)cout<<"Y"<<endl;

            else cout<<"N"<<endl;
        }
        else cout<<"N"<<endl;
    }
    
    return 0;
}