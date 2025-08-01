#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    cout<<"Enter size of array: ";
    int n;
    cin>>n;

    vector <int> arr(n);

    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter element: ";
    int element;
    cin>>element; 

    int start=0, end=arr.size()-1, first=-1; // for left position
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==element)
        {
            first=mid;
            end=mid-1;
        }   
        else if(arr[mid]<element)
        {
            start=mid+1; 
        }
        else // (arr[mid]>element)
        {
            end=mid-1; 
        }
    }

    start=0, end=arr.size()-1;
    int second=-1; // for right position 

    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==element)
        {
            second=mid;
            start=mid+1;
        }   
        else if(arr[mid]<element)
        {
            start=mid+1; 
        }
        else // (arr[mid]>element)
        {
            end=mid-1; 
        }
    }

    cout<<first<<" "<<second; 

    return 0; 
}