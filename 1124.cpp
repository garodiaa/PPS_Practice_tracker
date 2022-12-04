#include<iostream>
#include<cmath>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int w,l,r1,r2;
    while (true)
    {
        cin>>w>>l>>r1>>r2;
        if(w==0)break;
        if(r2<=l && r2<=w && r1<=l && r1<=w){
        if ((2*r1)+(2*r2)<=w || (2*r1)+(2*r2)<=l || ((2*r1)+(2*r2)<=(sqrt((double)w*w+(double)l*l)) && ( (l-2*r2>=r1)&&(w-2*r2>=r1) || ( (l-2*r2>=r1) || (w-2*r2>=r1) ) ) )) 
        {
            cout<<"S"<<endl;
        }
        else
        cout<<"N"<<endl;
        }
        
    }
    return 0;
}