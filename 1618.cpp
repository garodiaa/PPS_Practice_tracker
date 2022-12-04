#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int n;
    cin>>n;
    while(n--)
    {
        int a1,a2,b1,b2,c1,c2,d1,d2,x,y;
        cin>>a1>>a2>>b1>>b2>>c1>>c2>>d1>>d2>>x>>y;
        if( ((x<=b1 && x<=c1) && (x>=a1 && x>=d1)) && ((y>=b2 && y>=a2) && (y<=c2 && y<=d2)) )
        {
            cout<<1<<endl;
        }
        else 
            cout<<0<<endl;
    }
    return 0;
}