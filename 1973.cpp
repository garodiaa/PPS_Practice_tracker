#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
   
    while (true)
    {
        int n , m;
        cin>>n>>m;
        if(n==0 && m==0) break;
        int arr[10010]={0};
        while (m--)
        {
            int x;
            cin>>x;
            arr[x]++;
        }
        int count=0;
        for (int i = 1; i <=10000; i++)
        {
            if(arr[i]>1)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}