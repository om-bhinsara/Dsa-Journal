#include<iostream>
using namespace std; 
// Peak index in mountain array using binary search
int main()
{
    cout<<"Enter array size: ";
    int size; 
    cin>>size; 

    int arr[1000];
    for(int i=0; i<size; i++) 
    {
        cout<<"Enter element "<<i+1<<" : "; 
        cin>>arr[i]; 
    }

    int mid, ans=arr[0], start=0, end=size-1; 

    while(start<=end)
    {
        mid=end+(start-end)/2; 
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
        {
            cout<<"Peak element is present at index "<<mid; 
            break;
        }
        else if(arr[mid] > arr[mid-1])
        {
            start=mid+1; 
        }
        else
        {
            end=mid-1; 
        }
    }
}