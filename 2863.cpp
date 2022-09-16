#include<iostream>
#include<iomanip>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int n;
    while(cin>>n){    
        double x, temp;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            if(i==0)
            {
                temp=x;
                continue;
            }
            if (x<temp)
            {
                temp=x;
            }
            
        }
        cout<<temp<<endl;
    }

    return 0;
}