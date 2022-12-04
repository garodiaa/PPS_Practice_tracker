#include<iostream>
#include <iomanip>
#include<cmath>
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
        if(n==0)break;
        int w=floor(log10(pow(2,n+n-2))+1);
        //  cout<<w<<" "<<endl;
        int arr[n][n];
        int k,l;
        for (int i = 0,k=1; i <n; i++,k*=2)
        {
            for (int j = 0, l=k; j <n; j++,l*=2)
            {
                arr[i][j]=l;
            }
            
        }
        for (int i = 0; i <n; i++)
        {
            for (int j = 0; j <n; j++)
            {
                if(j==0)
                cout<<setw(w)<<arr[i][j];
                else
                cout<<" "<<setw(w)<<arr[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}