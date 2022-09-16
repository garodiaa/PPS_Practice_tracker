#include<iostream>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int arr[2010]={0};
    
    int n;
    cin>>n;
    int x;
    while (n--)
    {
        cin>>x;
        arr[x]++;
    }
    for (int i = 1; i <=2000; i++)
    {
        if (arr[i]>0)
        {
            cout<<i<<" aparece "<<arr[i]<<" vez(es)"<<endl;
        }
    }

    return 0;
}