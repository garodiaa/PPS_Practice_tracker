#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int check(string s1 , string s2){
    if ((s1.compare(s2))==0)
    {
        return 3;
    }
    else
    {
        if(s1=="tesoura" && (s2=="papel" || s2=="lagarto")){ return 1; }
        else if(s1=="pedra" && (s2=="tesoura" || s2=="lagarto")){ return 1; }
        else if(s1=="papel" && (s2=="pedra" || s2=="Spock")){ return 1; }
        else if(s1=="Spock" && (s2=="tesoura" || s2=="pedra")){ return 1; }
        else if(s1=="lagarto" && (s2=="Spock" || s2=="papel")){ return 1; }

        else
        return 2;
    }
}
int main()
{
    fastIO;
    int t;
    cin>>t;

for(int i=1; i<=t;i++)
{
        string s1,s2;
        cin>>s1>>s2;
        int x=check(s1,s2);
       //cout << x << endl;
        if(x==1)
        {
            cout<<"Caso #"<<i<<": Bazinga!"<<endl;
        }
        else if(x==2)
        {
            cout<<"Caso #"<<i<<": Raj trapaceou!"<<endl;
        }
        else if(x==3)
        {
            cout<<"Caso #"<<i<<": De novo!"<<endl;
        }
    
    
    
} 
    return 0;
}