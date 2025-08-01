#include<iostream>
using namespace std; 

int main()
{
    int num; 
    cout<<"Enter octal num: "; 
    cin>>num; 

    int rem, ans=0, mul=1; 
    while(num)
    {
        rem=num%10; 
        num/=10; 
        ans=ans+rem*mul; 
        mul*=8; 
    }
    num=ans;
    ans=0; 
    
    int rem1, mul1=1;  
    while(num)
    {
        rem1=num%2;
        num/=2;
        ans=ans+rem1*mul1;
        mul1*=10; 
    }
    cout<<ans; 
    return 0;
}