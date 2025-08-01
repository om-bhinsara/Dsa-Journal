#include<iostream>
using namespace std; 

int main()
{
 int num;
 int last=0, prev=1, current; 
 cout<<"Enter num: ";
 cin>>num; 

 for(int i=1; i<num-1; i++)
 {
    current=prev+last; 
    last=prev;
    prev=current; 
 }
 cout<<"Current at "<<num<<" is "<<current; 
}