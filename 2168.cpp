#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+1][n+1];
    int i,j,k,c,r;

    for ( i = 0; i <=n; i++)
    {
        for ( j = 0; j <=n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (r = 0;r <n; r++)
    {
        for ( c = 0; c < n; c++)
        {
            int count=0;
            for ( j = r; j <=r+1; j++)
            {
                for ( k = c; k <=c+1; k++)
                {
                    if (arr[j][k]==1)
                    {
                        count++;
                    }
                }

            }
            if (count>=2)
            {
                cout<<"S";
            }
            else
            cout<<"U";
            
        }
        cout<<endl;
        
    }
    return 0;
}
