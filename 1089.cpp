#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    while (true)
    {
            int x;
            cin>>x;
            if(x==0)
            break;
            int arr[x];
            for (int i = 0; i < x; i++)
            {
                cin>>arr[i];
            }
            int count = 0;
            for (int i = 0; i < x; i++)
            {
                if (i==0)
                {
                    if( (arr[i]>arr[x-1] && arr[i]>arr[i+1]) || (arr[i]<arr[x-1] && arr[i]<arr[i+1]) )
                    {
                        count++;
                    }
                }
                else if (i==x-1)
                {
                    if( (arr[i]>arr[i-1] && arr[i]>arr[0]) || (arr[i]<arr[i-1] && arr[i]<arr[0]) )
                    {
                        count++;
                    }
                }
                else if((arr[i]>arr[i-1] && arr[i]>arr[i+1]) || (arr[i]<arr[i-1] && arr[i]<arr[i+1]))
                {
                    count++;
                }
                
            }
            cout<<count<<endl;
    }
    return 0;
}