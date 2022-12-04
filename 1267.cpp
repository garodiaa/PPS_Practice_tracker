#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int n,d;
    while (true)
    {
        cin>>n>>d;
        if(n==0 && d==0)break;
        int arr[n+1]={0};
        for (int i = 0; i <d; i++)
        {
            for (int j = 1; j<=n ;j++)
            {
                int x;
                cin>>x;
                if (x==1)
                {
                    arr[j]++;
                }
            }
            
        }
        int out =0;
        for (int i = 1; i <=n; i++)
        {
            if (arr[i]==d)
            {
                out=1;
                break;
            }
        }
        
        if(out==1)
        {cout<<"yes"<<endl;}
        else if(out==0)
        {cout<<"no"<<endl;}
    }
    return 0;
}