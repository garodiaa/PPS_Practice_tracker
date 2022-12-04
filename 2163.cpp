#include<iostream>
using namespace std;
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    fastIO;
    int n , m;
    cin>>n>>m;
    int arr[n+1][m+1];
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int islight=0;
    for ( int row = 2; row < n; row++)
    {
        for ( int col = 2; col < m; col++)
        {
            if(arr[row][col]==42)
            {
                if (arr[row][col-1]==7 && arr[row][col+1]==7)
                {
                    //cout<<"in1 ";
                    if (arr[row-1][col-1]==7 && arr[row-1][col]==7 && arr[row-1][col+1]==7)
                    {
                         //cout<<"in2 ";
                        if (arr[row+1][col-1]==7 && arr[row+1][col]==7 && arr[row+1][col+1]==7)
                        {
                            cout<<row<<" "<<col<<endl;
                            islight=1;
                            break;
                        }
                        else 
                        continue;
                     }
                     else 
                     continue;       
                }
                else 
                continue;
            }
        }
    }
    if (islight==0)
    {
        cout<<0<<" "<<0<<endl;
    }
    
    return 0;
}