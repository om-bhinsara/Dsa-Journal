#include<iostream>
using namespace std; 

int main()
{
    cout<<"Enter size of the array: "; 
    int size; 
    cin>>size; 
    int arr[1000]; 
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element "<<i+1<<" : "; 
        cin>>arr[i]; 
    }

    int start=0, end=size-1, mid, ans=arr[0]; 
    while(start<=end)
    {
        mid=end+(start-end)/2; 
        if(arr[mid]>arr[0])
        {
            start=mid+1; 
        }
        else if(arr[mid]<arr[0])
        {
            ans=arr[mid]; 
            end=mid-1; 
        }
        else // arr[mid]==arr[0]
        {
            start=mid+1;
        }
    }
    cout<<"Min element is rotated sorted is "<<ans; 
    return 0; 
}

/*

while(start<=end)
    {
        mid=end+(start-end)/2; 
        if(arr[mid]>=arr[0])
        {
            start=mid+1; 
        }
        else(arr[mid]<arr[0])
        {
            ans=arr[mid]; 
            end=mid-1; 
        }

    }

*/