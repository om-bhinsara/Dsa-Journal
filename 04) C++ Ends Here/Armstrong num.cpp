#include<iostream>
#include<math.h>
using namespace std; 

int count_digit(int num)
{
    int count=0; 
    while(num)
    {
        count++;
        num/=10;
    }
    return count; 
};

bool Armstrong(int digit, int num)
{
    int original_num=num, rem, ans=0; 
    while(num)
    {
        rem=num%10; 
        num/=10; 
        ans=ans+pow(rem,digit); 
    }
    if(original_num==ans)
        return 1; 
    else
        return 0; 
};

int main()
{
    int num; 
    cout<<"Enter one number: "; 
    cin>>num; 

    int digit=count_digit(num); 
    cout<<Armstrong(digit,num); 
    return 0; 
}