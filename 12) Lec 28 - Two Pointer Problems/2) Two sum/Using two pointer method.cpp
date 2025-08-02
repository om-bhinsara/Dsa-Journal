#include<iostream>
using namespace std; 

int main()
{
    cout<<"Enter target: "; 
    int target;
    cin>>target; 
    int arr[50]={1,2,3,4,5}; 
    int start=0, end=4; 

    while(start<end)
    {
        if(arr[start]+arr[end]==target)
        {
            cout<<arr[start]<<" "<<arr[end]; 
            return 0; 
        }
        else if(arr[start]+arr[end]<target)
        {
            start++;
        }
        else
        {
            end--; 
        }
    }
    cout<<"Elements not found which summation should "<<target; 
    return 0; 
}