#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a,money=0;
    int w[n],sum_f=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        money+=a;
        string s,t;
        do
        {
            getline(cin,s);
        } while (s.size()==0);
        
        stringstream ss;
        ss << s;
        int fruits=0;

        while (ss>>t)
        {
            fruits++;
        }
        cout<<"day "<<i+1<<": "<<fruits<<" "<<"kg"<<endl;
        
        sum_f+=fruits;

    }
        
        double avg=(double)sum_f/n;
        double mavg=(double)money/n;
        cout<<fixed<<setprecision(2)<<avg<<" kg by day"<<endl;
        cout<<"R$ "<<fixed<<setprecision(2)<<mavg<<" by day"<<endl;
    return 0;
}