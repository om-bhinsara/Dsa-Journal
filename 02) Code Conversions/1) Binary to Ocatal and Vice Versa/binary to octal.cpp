#include<iostream>
using namespace std; 

int main()
{
    cout<<"Enter binary number: ";
    int num; 
    cin>>num; 

    int rem, ans=0, mul=1;
    while(num!=0)
    {
        rem=num%10; 
        num/=10; 
        ans+=rem*mul; 
        mul*=2; 
    }
    num=ans; 
    ans=0;
    while(num!=0)
    {
        rem=num%8;
        num/=8;
        ans=ans*10+rem; 
    }
    cout<<"The octal number is "<<ans;
    return 0; 
}