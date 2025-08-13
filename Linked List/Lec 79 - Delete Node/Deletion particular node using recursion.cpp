#include<iostream>
using namespace std;

// this code is not good

class Node
{
    public:
    int data;
    Node* next; 

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* createLinkedList(int arr[], int index, int size)
{
    if(index==size)
    {
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->next=createLinkedList(arr, index+1, size);
    return temp;
};

void removeNode(Node* Head, Node* current, Node* prev, int x)
{
    if(x)
    {
    prev=current;
    current=current->next;
    }
    else
    {
        if(Head->next==NULL)
        {
            Node *temp;
            temp=Head;
            Head=Head->next;
            delete temp;
            return;
        }
        else
        {
            prev->next=current->next;
            delete current;
            return;
        }
    }
    removeNode(Head, current, prev, x-1);
}

int main()
{
    int arr[]={1,2,3,4,5};
    Node *Head;
    Head=createLinkedList(arr, 0, 5);

    Node *temp;
    temp=Head;

    cout<<"Enter x (which particular node you want to delete): ";
    int x;
    cin>>x; 

    cout<<"Before deleting node:\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next; 
    }

    Node *prev=NULL;
    Node *Current;
    Current=Head;
    
    if(Head==NULL)
    {
        cout<<"\nThere's no linked list to remove";
        return 0;
    }

    if(x<1 || x>5)
    {
        cout<<"\nEnter valid value of node";
        return 0;
    }
    if(x==1)
    {
        Node *temp;
        temp=Head;
        Head=Head->next;
        delete temp;
    }
    else
    removeNode(Head, Current, prev, x-1);

    temp=Head;
    cout<<"\nAfter deleting node:\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next; 
    }
    return 0; 
}