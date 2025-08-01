#include<iostream>
using namespace std; 

int main()
{
 int num;
 int last=0, prev=1, current; 
 cout<<"Enter num: ";
 cin>>num; 

 if(num==1)
 {
    cout<<"Current at "<<num<<" is "<<"0";
    return 0;
 }
 else
 {
 for(int i=2; i<num; i++)
 {
    current=prev+last; 
    last=prev;
    prev=current; 
 }
 } 
 cout<<"Current at "<<num<<" is "<<current; 
}