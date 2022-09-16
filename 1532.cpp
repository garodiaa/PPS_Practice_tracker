#include<iostream>
using namespace std;
int main()
{
    int n,v;
    for (;;)
    {
        cin>>n>>v;
        if (n==0 && v==0)
        {
            break;
        }
    
        bool flag = false;
        for (int j = v; j>=1; j--)
        {
            int sum=0;
            for (int i = j; i>=0; i--)
            {
                for (int k = i; k>0; k--)
                {
                sum+=i;
                    if (sum==n)
                    {
                        cout<<sum<<" ";
                        cout<<"possivel"<<endl;
                        flag=true;
                        break;
                    }
                    if (sum>n)
                    {
                        continue;
                    }
                    
                }
            }
        if (flag)
          {
            break;
          }
        }
        if (!flag)
            {
                cout<<"impossivel"<<endl;
            }
    }
    return 0;
}