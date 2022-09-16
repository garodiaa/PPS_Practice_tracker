#include<iostream>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int n;
    while (1)
    {
        cin>>n;
        if (n==0)
        {
            break;
        }
        int count = 0 ;
        while (1)
        {
            int m;
            int loop = 1;
            for (int i = 1; i <=n; i++)
            {
                
                cin>>m;
                if (m!=i)
                {
                    loop = 0;
                }    
            }
            count++;

            if (loop==1)
            {
                break;
            }
        }
         cout<<count<<endl;
    }
    return 0;
}