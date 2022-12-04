#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        for (int j = 0; j < n; j++)
        {
            int secondtime=0;
            for (int i = 0; i < n; i++)
            {
                if(arr[i]==arr[j] && secondtime==0)
                {
                    secondtime=1;
                }
                else if(arr[i]==arr[j] && secondtime==1)
                {
                    arr[i]=-1;
                }
            }
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>=0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}