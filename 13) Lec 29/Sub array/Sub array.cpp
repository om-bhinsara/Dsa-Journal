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

    cout<<endl; 
    cout<<"All possible subarrays: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            for(int k=i; k<=j; k++)
            {
            cout<<arr[k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    return 0; 
}