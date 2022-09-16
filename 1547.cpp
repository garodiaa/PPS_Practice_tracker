#include<iostream>
#include <cstdlib>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        fastIO;
        int a,b,i;
        cin>>a>>b;
        int x, temp,count=0,pos=0;
        for ( i = 0; i < a; i++)
        {
            cin>>x;
            if(i==0)
            {
                temp=abs(b-x);
                pos=i+1;
                continue;
            }

            if (abs(x-b)<temp)
            {
                temp = abs(x-b);
                pos = i+1;
                // cout<<"--" <<temp<<endl;
            }
        }

        cout<<pos<<endl;

    }

    return 0;
}