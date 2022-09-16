#include<iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    while (n--)
    { 
        int f1,f2;
        cin>>f1>>f2;
        while (f1!=f2)
        {
            if (f1>f2)
            {
                f1-=f2;
            }
            else
            f2-=f1;
        }
        cout<<f1<<endl;
    }
    return 0;
}