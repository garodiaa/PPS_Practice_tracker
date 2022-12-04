#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int r1,x1,y1,r2,x2,y2;
    while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
    if ( (r1+x1)>=(r2+x2) && (r1+y1)>=(r2+y2) )
    {
        cout<<"RICO"<<endl;
    }
    else
        cout<<"MORTO"<<endl;
    }
    return 0;
}