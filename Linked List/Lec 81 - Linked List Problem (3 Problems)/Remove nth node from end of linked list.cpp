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
int main()
{
    int arr[]={1,2,3,4,5};

    Node *head;
    head=createlist(arr, 0, 5);

    Node *temp;
    temp=head;

    int count=0; 
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }

    cout<<"\nEnter which node from end you want to delete: ";
    int n; 
    cin>>n; 

    if(n>5) //  if(n>arr.size()) then break
    {
        cout<<"Enter valid node number"; 
        return 0; 
    } 
    
    count=count-n; 
    if(count==0)
    {
        temp=head;
        head=head->next;
        delete temp;
        temp=head;
        while(temp)
        {
        cout<<temp->data<<" ";
        temp=temp->next;
        }
        return 0;
    }

    Node *prev=NULL;
    Node *current=head;

    while(count--)
    {
        prev=current; 
        current=current->next;
    }
    prev->next=current->next; 
    delete current; 

    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0; 
}