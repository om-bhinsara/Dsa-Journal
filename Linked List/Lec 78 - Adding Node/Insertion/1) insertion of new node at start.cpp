#include<iostream>
using namespace std; 


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
    // ok to add new node there's two possibilites which are 1) linked list is exist and we have to add node in front, 2) linked list is not exist and we have to add node.

    cout<<"Insert node at first: \n";
    cout<<"Enter data: ";
    int data; 
    cin>>data; 

    NODE *HEAD;  // by deafult NULL is present in this head 
    HEAD=NULL;
    
    if(HEAD==NULL)  
    { 
        HEAD=new NODE(data);
    }
    else
    {
        NODE *temp;
        temp=new NODE(data);
        temp->next=HEAD;
        HEAD=temp;  
    }
    return 0; 
}