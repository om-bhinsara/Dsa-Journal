#include<iostream>
using namespace std; 

int main()
{
    int arr[5]={1,2,3,4,5};
    
    cout<<"Array: ";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 

    int temp[5]; 
    for(int i=4,j=0; i>=0; i--,j++)
    {
        temp[j]=arr[i]; 
    }
    
    cout<<"Reversed Array: ";
    for(int i=0; i<5; i++)
    {
        arr[i]=temp[i]; 
        cout<<arr[i]<<" "; 
    } 
    return 0; 
}