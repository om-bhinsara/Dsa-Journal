#include<iostream>
using namespace std;

    class Node 
    {
        public: 
        int data; 
        Node *next;
        Node *prev;

        Node(int val)
        {
            data=val;
            next=prev=NULL;
        }
    };

int main()
{
    Node *head=new Node(1);

    for(int i=2; i<6; i++)
    {
        // edge case
        if(head==NULL)
        {
            head=new Node(i);
        }
        else
        {
            Node *temp=new Node(i);
            temp->next=head;
            head->prev=temp; 
            head=temp; 
        }
    }

    Node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    Node *current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    temp=new Node(6);
    current->next=temp;
    temp->prev=current;

    cout<<endl; 

    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0; 
}