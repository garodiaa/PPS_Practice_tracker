#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    string name;
    cin>>name;
    int size = name.length();
    int arr[27]={0};
    int count=0;

    for (int i = 0; i <size; i++)
    {
        int x = name[i];
        arr[x-97]++;
    }

    for (int i = 0; i < 27; i++)
    {
        if (arr[i]>0)
        {
            count++;
        }
    }
    if(count&1){
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    cout<<"CHAT WITH HER!"<<endl;
    return 0;
}