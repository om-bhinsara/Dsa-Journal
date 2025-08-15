#include<iostream>
using namespace std;

class Node
{
    public: 
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data=data;
        next=prev=NULL;
    }
};

int main()
{
    Node *head=new Node(1);

    // edge case
    if(head==NULL)
    {
        head=new Node(1);
    }
    else
    {
        Node *temp=new Node(3);
        temp->next=head;
        head->prev=temp; 
        head=temp; 
    }
    
    Node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}