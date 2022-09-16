#include<iostream>
using namespace std;
int main()
{
    int n,stem;
    while(cin>>n)
    {
        int row,k,space,star;
        stem=n-2;
        for ( row = 1; row <=n/2+1; row++)
        {
            
            for ( space = row; space < n/2+1; space++)
            {
            cout<<" ";
            }
            for ( star = 1; star <= 2*row-1; star++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        for ( row = 1; row <=2; row++)
        {
            for ( space = row; space <=n/2; space++)
            {
                cout<<" ";
            }
            for ( star = 1; star <=2*row-1; star++)
            {
                cout<<"*";
            }
            cout<<endl;
        
        }
        cout<<endl;
    }
    return 0;
}