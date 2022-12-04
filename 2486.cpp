#include<iostream>
#include <string>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int amount(int n, string food)
{
    string str[]={"suco de laranja" , "morango fresco" , "mamao" , "goiaba vermelha" , "manga" , "laranja" , "brocolis"};
    int arr[]={120,85,85,70,56,50,34};
    for (int i = 0; i < 7; i++)
    {
        if (str[i] == food )
        {
            return n*arr[i];
        }

    }
    
}
int main()
{
    fastIO;
    int t;
    while(true)
    {
        cin>>t;
        if(t==0)break;
        int sum=0;
        for ( int i = 0; i < t; i++)
        {
            int n;
            cin>>n;
            cin.ignore();
            string food;
            getline( cin, food );
            sum = sum + amount(n,food);
            //cout<<"value of n"<<n<<" --"<<sum<<endl;
        }
        
        if (sum > 130){
            cout<<"Menos "<<sum-130<<" mg"<<endl;
        }
        else if(sum < 110)
        {
            cout<<"Mais "<<110-sum<<" mg"<<endl;
        }
        else 
        cout<<sum<<" mg"<<endl;
    }
    
    return 0;
}