#include<iostream>
using namespace std; 

int main()
{
    cout<<"Enter size of the array: "; 
    int size; 
    cin>>size; 
    int arr[1000]; 

    for(int i=0; i<size; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i]; 
    }
    cout<<"\nEnter key element that you want to search: ";
    int key; 
    cin>>key;

    int start=0; 
    int end=size-1; 
    while(start<=end)
    {
        int mid=(start+end)/2; 
        if(arr[mid]==key)
        {
            cout<<"\nElement found at "<<mid; 
            return 0; 
        }
        else if(arr[mid]<key)
        {
            start=mid+1; 
        }
        else   // arr[mid]>key
        {
            end=mid-1; 
        }
    }
    cout<<"Element is not found";

    return 0; 
}