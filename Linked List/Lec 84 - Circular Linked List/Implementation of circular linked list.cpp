#include<iostream>
#include<vector>
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

Node* createlist(vector <int> &arr, int index, int size)
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
    vector <int> arr={1,2,3,4,5,6};

    Node *head=createlist(arr, 0, arr.size());

    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
    
    temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp=temp->next;
    }
    cout<<temp->data<<" ";
    cout<<temp->next;
    
    
    temp=temp->next;
    cout<<endl<<temp->data<<" "<<temp->next;
    return 0; 
}