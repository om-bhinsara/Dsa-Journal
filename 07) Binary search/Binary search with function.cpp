#include<iostream>
using namespace std; 

int Binarysearch(int arr[], int size, int key)
{
    int start=0, end=size-1; 
    while(start<=end)
    {
        // mid ko find karo
        int mid=(start+end)/2; 
        // mid==key
        if(arr[mid]==key)
        {
            return mid; 
            break; 
        }
        // mid<key
        else if(arr[mid]<key)
        {
            start=mid+1; 
        }
        // mid>key
        else
        {
            end=mid-1;
        }
    }
    return -1; // if element is not found
}
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

    int result=Binarysearch(arr, size, key); 

    if(result==-1)
        cout<<"Element is not found"; 
    else
        cout<<"Element is found at index "<<result; 

    return 0; 
}