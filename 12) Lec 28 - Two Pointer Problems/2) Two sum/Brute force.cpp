#include<iostream>
using namespace std;

int main()
{
    int target; 
    int arr[5]={1,3,4,5,6};
    cout<<"Enter target: ";  
    cin>>target; 
    for(int i=0; i<4; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<arr[i]<<" + "<<arr[j];
                return 0; 
            }
        }
    }
    cout<<"Elmenets are not found"; 
    return 0; 
}