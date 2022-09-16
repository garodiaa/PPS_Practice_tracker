#include<iostream>
#include<cstring>
using namespace std;
int main()
{ int n=3;
  while(n--)
    {
        string blink;
        int sum=0;
          while (true)
          {
           getline(cin,blink);
            if (blink[0]=='c')
            {
               cout<<sum<<endl;
              break;
            }
            if (blink[0]=='*')
            {
                sum+=4;
            }
            if (blink[1]=='*')
            {
                sum+=2;
            }
            if (blink[2]=='*')
            {
                sum+=1;
            }
          }
      }
return 0;
}