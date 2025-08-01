#include<iostream> 
using namespace std; 

int main()
{
    int num, mul=1; 
    cout<<"Enter one number: "; 
    cin>>num; 

    if(num<0)
    {
        cout<<"num is not in 2's power";
        return 0;       
    }
    if(num>=mul)
    {
        while(num!=mul)
        {
        if(num%mul==0)
        {
            mul=mul*2; 
        }
        else
        {
            cout<<"num is not in 2's power";
            return 0;
        }
        }

        if(num==mul)
        {
             cout<<"Num is in 2's power";
             return 0; 
        }
    }
    return 0; 
}