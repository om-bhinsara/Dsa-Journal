#include<iostream>
using namespace std; 

int main()
{
    cout<<"Enter any Decimal no: "; 
    int num; 
    cin>>num; 
    int rem, ans=0, mul=1, original_num=num; 

    while(num>0) // while(num)
    {
        rem=num%8;               // to get reminder
        num/=8;                 // to get num
        ans=rem*mul+ans;       // to get ans
        mul*=10;              // for 10th power 
    }
    cout<<"Octal number of "<<original_num<<" is "<<ans; 
    return 0; 
}