#include<iostream>
using namespace std; 

int main()
{
    int num; 
    cout<<"Enter any Octal num: ";
    cin>>num; 
    
    int original_num=num, rem, ans=0, mul=1; 

    while(num>0)
    {
        rem=num%10;          // to get remainder
        num/=10;            // to get last digit
        ans=rem*mul+ans;   // to get ans
        mul*=8;           // for 8th power
    }
    cout<<"Decimal no of "<<original_num<<" is "<<ans; 
    return 0; 
}