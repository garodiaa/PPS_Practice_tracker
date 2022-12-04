#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[2*n];
        int odd=0 , even=0;
        for (int i = 0; i < 2*n; i++)
        {
            cin>>arr[i];
            if(arr[i] & 1)odd++;
            else even++;
        }
        
        //this condition can be made short , i.e if(even!=odd)then NO else YES
        if(even != odd)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

        /*if(odd == even)
        {
            cout<<"YES"<<endl;
        }
        
        else if(odd==2*n){
            for (int i = 0; i < 2*n-1; i++)
            {
                for (int j = i+1; j < 2*n; j++)
                {
                    if( (arr[i]+arr[j]) & 1){

                    }
                    else {
                    cout<<"NO"<<endl;
                    break;}
                }
                
            }
            
        }
        else 
        cout<<"NO"<<endl;*/
        
    }
    
    return 0;
}