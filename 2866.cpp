#include<iostream>
#include<string>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        
        string str;
        cin>>str;
        int size= str.size();
        
        string str2;
        int i,j=0;
        for ( i = 0; i < size; i++)
        {
                
            if (str[i]>='a' && str[i]<='z')
            {
                str2[j] = str[i];
                j++;
            }
        }
        
        for ( i = j-1; i>=0; i--)
        {
            cout<<str2[i];
        }
        cout<<endl;
    }
    return 0;
}