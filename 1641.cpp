#include<iostream>
#include<cmath>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int i=1;
    while(true)
    {
    int r , w , l;
    cin>>r;
    if(r==0)break;
    cin>>w>>l;
    double d;
    d=double(sqrt((double)(w*w)+(double)(l*l)))/2;
    if (d<=r)
    {
        cout<<"Pizza "<<i<<" fits on the table."<<endl;
    }
    else 
        cout<<"Pizza "<<i<<" does not fit on the table."<<endl;
    i++;
    }
    return 0;
}