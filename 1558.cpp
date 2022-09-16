#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, lim , i , s;
    while (cin>>n)
    {
            i=0;
            // cin>>n;
            lim=sqrt(n);
            bool flag = false ;
            while (lim>=i)
            {
                s=i*i + lim*lim;
                if (s==n)
                {
                    flag=true;
                    break;
                }
                else if (s<n)
                {
                    i++;
                }
                else{
                    lim--;
                }
                
                
            }
            
            if (flag)
            {
                    cout<<"YES"<<endl;
            }
            if (!flag)
            {
                    cout<<"NO"<<endl;
            }
    }
    return 0;
}