#include<iostream>
using namespace std;
int main()
{
    int n;
    while (cin>>n)
 {
    if (n==0)
    {
        break;
    }
    
    string msg,st;
    int y,t,d;
    int k=2114;
    for (int i = 0; i < n; i++)
    {
        cin>>msg>>y>>t;
        if (y-t < k)
        {
            k=y-t;
            st = msg;
        }
        
    }
    
    cout<<st<<endl;

 }  
    return 0;
}