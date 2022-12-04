#include<iostream>
#include<vector>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    unsigned long long int n , k;
    cin>>n>>k;
    unsigned long long int arr[k], j=0;
    for (unsigned long long int i = 1; j < k; i++)
    {
        
            //cout<<"in ";
        if(i%n!=0)
        {
            //cout<<"in ";
            arr[j]=i;
            j++;
        }
    }
    cout<<arr[k-1]<<endl;

    
    return 0;
}