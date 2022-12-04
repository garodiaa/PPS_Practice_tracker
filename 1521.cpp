#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int n;
    while (true)
    {
        cin>>n;
        if (n==0)
        {
            break;
        }
        
        int arr[n];
        for (int i = 1; i <=n; i++)
        {
        cin>>arr[i];
        }
        int k;
        cin>>k;
        while (true)
        {
            if (arr[k]==k)
            {
                cout<<k<<endl;
            break;
            }
            k=arr[k];
        }
    } 
   
    return 0;
}