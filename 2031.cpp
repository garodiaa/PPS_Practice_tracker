#include<iostream>
#include<string>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
string result(string s1,string s2)
{
    string str[]={"ataque","pedra","papel"};
    string verdicts[]={"Jogador 1 venceu","Jogador 2 venceu","Ambos venceram","Sem ganhador","Aniquilacao mutua"};
    if(s1==str[0] && s2==str[0])return verdicts[4];
    else if(s1==str[1] && s2==str[1])return verdicts[3];
    else if(s1==str[2] && s2==str[2])return verdicts[2];
    else{
        if(s1==str[0] && (s2==str[1] || s2==str[2] ))return verdicts[0];
        if(s2==str[0] && (s1==str[1] || s2==str[2] ))return verdicts[1];
        //else return verdicts[1];

        if(s1==str[1] && s2==str[2])return verdicts[0];
        else return verdicts[1];
    }

}
int main()
{
    fastIO;
    int n;
    cin>>n;
    cin.ignore();
    while (n--)
    {
        string str1 ,str2;
        cin>>str1>>str2;
        cout<<result(str1,str2)<<endl;
    }
    return 0;
}