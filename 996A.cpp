#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int arr[]={1,5,10,20,100};
    int n;
    cin>>n;
    int count=0;
    for (int i = 4; i >=0; i--)
    {
        if(n % arr[i]>= 0)
        {
            count+=n/arr[i];
            n=n%arr[i];
        }
    }
    cout<<count<<endl;
    
    
    return 0;
}