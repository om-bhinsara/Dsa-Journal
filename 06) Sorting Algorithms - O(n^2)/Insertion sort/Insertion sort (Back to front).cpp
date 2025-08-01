#include<iostream>
using namespace std; 

int main()
{
    int size, arr[1000]; 
    cout<<"Enter size of the array: "; 
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cout<<"Enter element: arr["<<i+1<<"]: "; 
        cin>>arr[i]; 
    }

    // Algoritham
    for(int i=size-1; i>0; i--)
    {
        for(int j=i-1; j<size-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]); 
            }
        }
    }

    cout<<"Sorted array: "; 
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" "; 
    }

    return 0; 
}