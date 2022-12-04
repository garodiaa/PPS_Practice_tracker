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
        int n;
        cin>>n;
        int sumA= 0, sumB=0;
        for (int i = 0; i < 6; i++)
        {
            int digit = n%10;
            n=n/10;
            if(i<3)sumA+=digit;
            else sumB+=digit;
        }
        if(sumA == sumB)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}