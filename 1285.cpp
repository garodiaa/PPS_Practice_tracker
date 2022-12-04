#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int sup(int n){
    int arr[10]={0};
    while(n!=0)
    {
        int x=n%10;
        arr[x]++;
        n/=10;
    }
    for (int i = 0; i <=9; i++)
    {
        if(arr[i]>1)
        return 1;
    }
    return 0;
}
int main()
{
    fastIO;
    int a,b;
    while(cin>>a>>b){
    int dif = b-a;
    int count = 0;
    for (int i = a; i <= b; i++)
    {
       count += sup (i);
       //cout<<sup(i)<<"  ";
    }
    cout<<dif-count+1<<endl;
    }

    
    return 0;
}