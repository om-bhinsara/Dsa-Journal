#include<iostream>
using namespace std; 

int main()
{
    int size; 
    cout<<"Enter size of the array: "; 
    cin>>size; 
    int a[200]; 

    int sum=0; 
    for(int i=0; i<size; i++)
    {
        cout<<"Enter element a["<<i+1<<"]: "; 
        cin>>a[i]; 
        sum+=a[i]; 
    }

    cout<<"\nSum of entered num is "<<sum; 

    return 0; 
}