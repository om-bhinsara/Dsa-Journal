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

    Node* start=head;
    Node* prev=head->next;
    Node* current=prev->next; 

    while(current!=NULL)
    {
        prev->next=head;
        head=prev;
        prev=current;
        current=current->next;
    }
    prev->next=head;
    head=prev;
    start->next=NULL;

    cout<<"After reversing linked list: \n";
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp=temp->next;
    }
    return 0;
}