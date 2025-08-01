#include<iostream>
using namespace std; 

int main()
{
    int num; 
    cout<<"Enter num: ";  
    cin>>num; 
    int count=0; 

    while(num>=5)
    {
        count=count+num/5; 
        num=num/5; 
    }
    cout<<count; 
    return 0; 
}