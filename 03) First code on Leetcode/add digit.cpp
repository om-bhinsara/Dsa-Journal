#include<iostream>
using namespace std; 

int main()
{
    int num; 
    cout<<"Enter number: "; 
    cin>>num;

    while(num>9)
    {
        int rem, ans=0;
        while(num)
        {
        rem=num%10;
        ans+=rem;
        num/=10;
        }
        num=ans;
    }
    cout<<num;
    return 0; 
}