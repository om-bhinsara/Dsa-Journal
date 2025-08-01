#include<iostream>
using namespace std; 

int main()
{
    int size; 
    cout<<"Enter array size: ";
    cin>>size; 
    int arr[1000]; 
    for(int i=0; i<size; i++)
    {
        cout<<"Enter element "<<i+1<<" : "; 
        cin>>arr[i]; 
    }
    int target;
    cout<<"Enter element that you want to search: ";
    cin>>target; 

    int mid, ans=-1, start=0, end=size-1;
    while(start<=end)
    {
       mid=start+(end-start)/2; 
       if(arr[mid]==target)
       {
        ans=mid; 
        break; 
       }
       else if(arr[mid] >= arr[0]) // Array is sorted on left side or not
       {
        if(arr[start] <= target && arr[mid] > target)
        {
             end=mid-1; 
        }
        else
        {
            start=mid+1; 
        }
       } 
       else // arr[mid] < arr[0]
       {
        if(arr[mid] > target && arr[end] >= target)
        {
            start=mid+1; 
        }
        else
        {
            end=mid-1; 
        }
       }
    }
    if (ans != -1)
        cout << "Element found at index: " << ans << endl;
    else
        cout << "Element not found!" << endl;    
    
    return 0; 
}