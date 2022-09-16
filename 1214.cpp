#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int c;
    cin>>c;
    while (c--)
    {
       int n,count=0,i;
       cin>>n;
       int arr[n],sum=0;
       double avg,grade;
       for (int &i:arr)
       {
        cin>>i;
        sum+=i;
       }
       avg=(double)sum/n;
       for ( i = 0; i < n; i++)
       {
        if (arr[i]>avg)
        {
            count++;
        }
       }
    //    cout<<count<<" "<<n<<endl;
       grade=((double)count/n)*100;
       cout<<fixed<<setprecision(3)<<grade<<"%"<<endl;
    }
    
}