#include<iostream>
using namespace std; 

int main()
{
    int arr[5]={1,2,3,4,5}; 
    int target; 
    cout<<"Enter target: "; 
    cin>>target; 

    int x, size=5; 
    for(int i=0; i<size-1; i++)
    {
        x=target-arr[i];
        int start=i+1, end=size-1;
    
    while(start<end)
    {
        int mid=start+(end-start)/2; 
        if(arr[mid]==x)
        {
            cout<<arr[i]<<" "<<arr[mid]; 
            break; 
        }
        else if(arr[mid]>x)
        {
            end=mid-1;
        }
        else // arr[mid]<x
        {
            start=mid+1; 
        }
    }
    } 
    return 0; 
}