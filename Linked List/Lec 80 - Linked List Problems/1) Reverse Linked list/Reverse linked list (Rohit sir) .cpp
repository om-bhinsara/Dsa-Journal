#include<iostream>
using namespace std; 

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

Node* createlist(int arr[], int index, int size)
{
    if(index==size)
    {
        return NULL;
    }
    Node* temp=new Node(arr[index]);
    temp->next=createlist(arr, index+1, size);
    return temp;
}

int main()
{
    int arr[]={1,2,3,4,5};
    Node *head;
    head=createlist(arr, 0, 5);

    Node *temp=head;
    cout<<"Before:"<<endl;
    while(temp)
    {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp=temp->next;
    }
    cout<<endl;

    Node *prev=NULL;
    Node *current=head;
    Node *future=current;

    while(current)
    {
        future=current->next;
        current->next=prev;
        prev=current;
        current=future; 
    }
    head=prev;

    temp=head;
    cout<<"After: "<<endl;
    while(temp)
    {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp=temp->next;
    }
    return 0;
}   