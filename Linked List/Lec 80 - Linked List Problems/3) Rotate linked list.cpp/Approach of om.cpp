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
    if(index==size) // Base case
    {
        return NULL; 
    }
    Node* temp;
    temp=new Node(arr[index]);
    temp->next=createlist(arr, index+1, size);
    return temp; 
}


Node* rotate(Node *(&head))
{
    Node* current=head;
    Node* prev=NULL;

    while(current->next!=NULL)
    {
        prev=current;
        current=current->next;
    }
    prev->next=NULL;
    current->next=head;
    head=current;
    return head;
}
int main()
{
    int arr[]={1,2,3,4,5};

    Node *head;
    head=createlist(arr, 0, 5);

    Node *temp;
    temp=head;

    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<"\nEnter how many rotation you want: ";
    int k;
    cin>>k;

    if(k<0 || k>5) // k>arr.size() then break
    {
        cout<<"Enter valid value of rotation number";
        return 0;
    }

    // for rotate
    while(k!=0)
    {
    head=rotate(head);
    k--;
    }

    temp=head;
    while(temp)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0; 
}