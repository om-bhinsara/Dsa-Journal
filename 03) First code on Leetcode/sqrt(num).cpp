#include<iostream>
using namespace std; 

int main()
{
    float num; 
    cout<<"Enter num: "; 
    cin>>num; 

    if(num<=0.0 || num<=0)
    {
        cout<<"Enter valid value";
        return 0; 
    }
    for(float i=1.0; i<=num; i++)
    {
        if(i*i<=num)
        {
            if(i*i==num)
            {
            cout<<i<<" is a sqrt of "<<num<<endl; 
            return 0; 
            }
        }
        else if(num<i*i)
        {
            cout<<i-1<<" is a sqrt of "<<num;
            return 0;  
        }
    }
    return 0; 
}