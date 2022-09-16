#include<iostream>
using namespace std;
int main()
{
    int n,k;
    while (true)
    {
        cin>>n>>k;
        if (n==0 && k==0)
        {
            break;
        }
        
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int faq=0;
        for (int i = 0; i < n; i++)
        {
            int count=1;
            if(a[i]==0)
                {
                  continue;
                }
            for (int j = i+1; j < n; j++)
            {
                if(a[i]==0){
                    continue;
                }
                if (a[i]==a[j])
                {
                    a[j]=0;
                    count++;
                    
                }            
            }
                if (count>=k)
                {
                    faq++;
                }
            
        }
        cout<<faq<<endl;
    }
    return 0;
}