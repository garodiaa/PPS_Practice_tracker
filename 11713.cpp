#include<iostream>
#include<string>
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
        string s1,s2;
        cin>>s1>>s2;
        int count = 0;
        int size1 = s1.length();
        int size2 = s2.length();
        if(size1 == size2){
            for (int i = 0; i < size1; i++)
            {
                if( (s1[i] == s2[i]) || ((s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u') && (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')) )
                {
                  count++;
                }
            }
            if(count == size1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else
        cout<<"No"<<endl;
    }

    return 0;
}