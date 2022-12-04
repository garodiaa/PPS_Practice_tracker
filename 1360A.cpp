#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int area= 2*(a*b);
        int arr[5];
        //possible arrangements that can happen
        arr[0]=(a+b)*(a+b);
        arr[1]=4*(a*a);
        arr[2]=4*(b*b);
        arr[3]=a*a;
        arr[4]=b*b;
        int min=arr[0];
        for (int i = 0; i < 5; i++)
        {
           if(arr[i]>=area)
           {
            if(arr[i]<min){
                min=arr[i];
            }
           }
        }
        cout<<min<<endl;
    }
    return 0;
}