#include<iostream>
using namespace std;
int main()
{
    int n,i,dif;
    cin>>n;
while (n--)
{    
    int count=0;
    char A[10001] , B[10001];
    cin>>A>>B;
    for (int i = 0; A[i]!='\0' ; i++)
    {
        dif=B[i]-A[i];
            if (dif < 0)
            {
            count+=dif+26;
            }
            else
            count+=dif;
    }
    cout<<count<<endl;
    count=0;
}
    return 0;
}