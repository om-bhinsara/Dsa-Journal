#include<iostream>
using namespace std; 

int main()
{
    cout<<"Enter the binary num: ";
    int num; 
    cin>>num;
    int original_num=num;  
    int rem, ans=0, mul=1; 
    while(num>0)
    {
        /* To get last digit of number */
        rem=num%10;
        /* To get num which is separated by prev operation by separating one bit */
        num=num/10; 
        /* For ans */
        ans+=rem*mul; 
        /* For 2's power update */
        mul=mul*2; 
    }
    cout<<"Decimal number of "<<original_num<<" is "<<ans; 
    return 0;
}