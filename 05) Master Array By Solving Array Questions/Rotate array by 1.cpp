#include<iostream>
#include<vector> 
using namespace std;

int main()
{
    cout<<"Enter size of array: ";
    int n;
    cin>>n;

    vector <int> arr(n);

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"Original array: "<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    int temp=arr[0];
    for(int i=0; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }

    arr[arr.size()-1]=temp;

    cout<<endl;
    cout<<"Rotated array: "<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}