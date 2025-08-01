#include<iostream>
using namespace std; 

int main()
{
    int num; 
    cout<<"Enter num: "; 
    cin>>num;
    int original_num=num; 
    int rem, ans=0, mul=1; 

    while(num>0)
    {
        /* For remainder */
        rem=num%2; 
        /* For quotient */
        num/=2;
        /* For ans */
        ans+=rem*mul;                      // ans=rem*mul+ans;
        /* For 10's power update */ 
        mul*=10; 
    }
    cout<<"Binary number of "<<original_num<<" is "<<ans; 
}