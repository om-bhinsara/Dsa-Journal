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
    for(int i=1; i<size; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]); 
            }
            else
            {
                break; 
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