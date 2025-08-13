#include<iostream>
using namespace std;
// om method : Edge cases left
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

Node* reverseNodes(Node* prev, Node* current)
{
    if(current==NULL)
    {
        return prev;
    }
    Node* future=current->next;
    current->next=prev;
    prev=current;
    current=future; 
    return reverseNodes(prev, current);
}

int main()
{
    int arr[]={1,2,3,4,5};
    Node *head;
    head=NULL;

    head=createlist(arr, 0, 5);
    Node* temp=head;

    cout<<"Before reversing linked list: \n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp=temp->next;
    }

    Node* prev=NULL;
    Node* current=head; 
    head=reverseNodes(prev, current);

    temp=head;

    cout<<"After reversing linked list: \n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp=temp->next;
    }
    return 0;
}