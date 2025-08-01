#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;

    vector <int> arr(n);

    cout<<"Enter array element: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter element: ";
    int element; 
    cin>>element;

    int index=arr.size()-1;

    int start=0, end=arr.size()-1; 
    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(arr[mid]==element)
        {
            index=mid;
            cout<<index;
            return 0; 
        }
        else if(arr[mid]>element)
        {
            end=mid-1; 
        }
        else
        {
            index=mid;
            start=mid+1; 
        }
    }

    cout<<index; 
    return 0; 
}