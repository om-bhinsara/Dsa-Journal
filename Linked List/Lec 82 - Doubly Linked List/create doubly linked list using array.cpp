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
    int arr[]={1,2,3,4,5};

    Node *head;
    head=NULL;
    Node *tail=NULL; // it points to last node, so we don't have to traverse whole linked list for again and again (for insertion at end)

    for(int i=0; i<5; i++)
    {
        if(head==NULL) // if linked list doesn't exists
        {
            head=new Node(arr[i]);
            tail=head;
        }
        else // if exists
        {
            Node *temp=new Node(arr[i]);
            temp->prev=tail;
            tail->next=temp; 
            tail=temp;
        }
    }

    Node *temp=head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}