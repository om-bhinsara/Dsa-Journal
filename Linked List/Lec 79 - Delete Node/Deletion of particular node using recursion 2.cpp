#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    
    Node(int val)
    {
        data=val;
        next=NULL; 
    }
};

Node* createlinkedlist(int arr[], int index, int size)
{
    if(index==size)
    {
        return NULL;
    }
    Node* temp=new Node(arr[index]);
    temp->next=createlinkedlist(arr, index+1, size);
    return temp; 
}

Node* deletenode(Node *(&current), int x)
{
    if(x==1)
    {
        Node *temp=current->next;
        delete current;
        return temp;
    }
    current->next=deletenode(current->next, x-1);
    return current; 
}
int main()
{
    int arr[]={1,2,3,4,5};
    Node *head;

    head=createlinkedlist(arr, 0, 5);
    Node *temp;
    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next; 
    }

    int x;
    cout<<"Which node you want to delete: ";
    cin>>x;

    if(x<1 || x>5)
    {
        cout<<"Enter valid value of node";
    }

    head=deletenode(head, x);
    
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next; 
    }
    
    return 0;
}