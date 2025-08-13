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
    Node* temp;
    temp=new Node(arr[index]);
    temp->next=createlist(arr, index+1, size);
    return temp; 
}

int main()
{
    int arr[]={0,1,2};
    Node *head;
    head=createlist(arr, 0, 3);

    Node* temp=head;
    int count=0;

    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }  

    int k;
    cout<<"Enter k: ";
    cin>>k;

    if(k>count)
    count=k%count;
    else
    count-=k;

    Node *curr=head, *prev=NULL;
   
    while(count--)
    {
        prev=curr;
        curr=curr->next;
    }

    prev->next=NULL;
    Node* tail=curr;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next=head;
    head=curr;

    temp=head;
    while(temp)
    {
        cout<<temp->data<<endl; 
        temp=temp->next;
    }
    
    return 0;
}