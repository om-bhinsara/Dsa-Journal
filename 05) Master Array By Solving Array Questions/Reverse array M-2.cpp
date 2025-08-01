#include<iostream>
#include<math.h> 

using namespace std; 

int main()
{
    int arr[5]={1,2,3,4,5}; 

    int start=0, end=4; 

    while(start<end)
    {
        swap(arr[start],arr[end]); 
        start++; 
        end--;
    }

    cout<<"Reversed array: "; 
    for(int k=0; k<5; k++)
    {
        cout<<arr[k]<<" "; 
    }
    
    return 0; 
}