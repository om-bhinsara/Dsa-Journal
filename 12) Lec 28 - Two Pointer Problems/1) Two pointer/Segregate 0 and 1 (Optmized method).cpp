#include<iostream>
using namespace std; 
// Segregate 0 and 1
int main()
{
    int size; 
    cout<<"Enter size of the array: ";
    cin>>size; 
    int arr[1000]; 
    for(int i=0; i<size; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    int start=0, end=size-1;
    while(start<end)
    {
        if(arr[start]==0)
            start++;
        else
        {
            if(arr[end]==1)
            {
                end--;
            }
            else
            {

                swap(arr[start],arr[end]); 
                start++, end--; 
            }
        }
    }
    
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}