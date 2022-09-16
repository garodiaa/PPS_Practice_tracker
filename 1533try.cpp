#include<iostream>
using namespace std;
int main(){
    int n;
    while (true)
    {
        
            cin>>n;
            if (n==0)
            {
                break;
            }
            
            int arr[n];
            for ( int i = 0; i < n; i++)
            {
                cin>>arr[i];
            }
            int max=0;
            int pos=0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i]>max)
                {
                    max=arr[i];
                    pos = i;
                }
            }
            arr[pos]=0;
            max=0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i]>max)
                {
                    max=arr[i];
                    pos = i;
                }
            }
            cout<<pos+1<<endl;

    }
    return 0;
}