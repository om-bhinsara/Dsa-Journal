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
    int first=-1, last=-1;

    // First occurence  
    while(start<=end)
    {
        int mid=start+(end-start)/2; 
        if(arr[mid]==key)
        {
            first=mid; 
            end=mid-1; 
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

    // Last occurence  
    start=0, end=size-1; 
    last=-1; 
    while(start<=end)
    {
        int mid=start+(end-start)/2; 
        if(arr[mid]==key)
        {
            last=mid; 
            start=mid+1; 
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
    cout<<"First occurence of element is "<<first;
    cout<<"\nLast occurence of element is "<<last;

    return 0; 
}