#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int n,r;
    while (cin>>n>>r)
    {
        int arr[r];
        for (int i = 0; i < r; i++)
        {
            cin>>arr[i];
        }
        int narr[n-r] , x=0 ,returned =1;
        for (int i = 1; i <=n; i++)
        {
            int in = 0;

            for (int j = 0; j < r; j++)
            {
            
            if( i == arr[j] ){
                in = 1;
            }
            }
            if (in == 0)
            {
                returned = 0;
                narr[x]=i;
                x++;
            }
            
        }
        if (returned == 1)
        {
            cout<<"*"<<endl;
            continue;
        }
        
        for (int i = 0; i < x; i++)
        {
            cout<<narr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}