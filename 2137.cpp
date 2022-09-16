#include<iostream>
#include<cstring>
#include<ios>
using namespace std;
#define sos 5 
//custom function to print the string
//sos means size of array ,that is the number of digits , taking in each column , so taken in 2d char array
void display(int n,char arr[][sos])
{
    for ( int i = 0; i < n; i++)
    {
        cout<<arr[i];
    cout<<endl;
    }
}

int main()
{
    int n;
    while (cin>>n)
    {
    char arr[n][sos];

    for ( int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    //printing original array
    /*
    cout<<"original array:"<<endl;
    display(n,arr);
    */

    char temp[5];

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j< n; j++)
        {
            if (strcmp(arr[i],arr[j])>0)
            {
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
            
        }
        
    }
    
    //printing the sorted array
    // cout<<"sorted array"<<endl;
    display(n,arr);
    
    }
return 0;
}