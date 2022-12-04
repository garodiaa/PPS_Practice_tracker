#include<iostream>
#include<string>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int n;
    cin>>n;
    cin.ignore();
    while (n--)
    {
        string str;
        getline(cin,str);
        //tolower(str);
        int x=str.length();
        int arr[27]={0};
        for (int i = 0; i < x; i++)
        {
            int asc =  tolower(str[i])-97;
            arr[asc]++;
        }
        int max = arr[0];
        for (int i = 0; i < 27; i++)
        {
            if (arr[i]>max)
            {
                max=arr[i];
            }
        }
        //cout<<endl<<max;
        for (int i = 0; i < 27; i++)
        {
            if(arr[i]!=max)
            {
                arr[i]=0;
            }
            if (arr[i]>0)
            {
                //printf("%c",i+97);
                cout<<char(i+97);
            }
            
        }
        //printf("\n");
        cout<<endl;
    }
    return 0;
}