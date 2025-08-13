#include<iostream>
using namespace std;
//  we can use constructor to initilize data part of the list and manual method which are commented
class NODE
{
    public: 
    int data; 
    NODE *next;

    NODE(int data)
    {
        this->data=data; 
        next=NULL; 
    }
}; 

int main()
{
    cout<<"Enter data part: "; 
    int data; 
    cin>>data; 

    NODE *HEAD;
    HEAD=new NODE(data);
    // HEAD->data=data; 
    // HEAD->next=NULL;

    cout<<HEAD->data<<" "; 
    cout<<HEAD->next;
    return 0; 
}