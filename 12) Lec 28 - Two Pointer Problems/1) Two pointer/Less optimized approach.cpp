#include<iostream>
#include<vector> 
using namespace std;
 
int main()
{
    cout<<"Enter array size: ";
    int n;
    cin>>n; 

    vector <int> arr(n);

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int zero=0, one=0;

    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }

    int i;
    for(i=0; i<zero; i++)
    {
        arr[i]=0;
    }

    for(int j=0; j<one; i++, j++)
    {
        arr[i]=1;
    }

    cout<<"Segregatted zeros and ones: ";
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    return 0; 
}