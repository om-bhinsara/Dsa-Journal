#include<iostream>
using namespace std; 

int SearchElement(int num, int a[])
{
    for(int i=0; i<6; i++)
    {
        if(a[i]==num)
        {
            return i;
        }
    }
    return -1; 
}
int main()
{
    int a[6]={1,2,3,4,5,6}; 
    cout<<"Enter element you want to find: ";
    int num; 
    cin>>num;

    int result=SearchElement(num,a);

    if(result==-1)
    {
        cout<<"Element is not present in the array"; 
    }
    else
    {
    cout<<num<<" is present at index "<<result;   
    }
    
    return 0; 
}