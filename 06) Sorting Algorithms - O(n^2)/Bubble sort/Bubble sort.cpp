#include<iostream>
#include<math.h>
using namespace std; 

int main()
{
    cout<<"Enter size of array: "; 
    int size, arr[1000]; 
    cin>>size; 
    if(size<0 || size>1000)
    {
        cout<<"Enter valid size"; 
    }
    for(int i=0; i<size; i++)
    {
        cout<<"Enter element a["<<i+1<<"]: "; 
        cin>>arr[i]; 
    }

    // Algoritham
    for(int i=size-2; i>=0; i--)
    {
        bool k=0; 
        for(int j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                k=1;  
            }
        }
        if(k==0)
        {
            break; 
        }
    }

    cout<<"\nSorted array: "; 
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"  "; 
    }

    return 0; 
}