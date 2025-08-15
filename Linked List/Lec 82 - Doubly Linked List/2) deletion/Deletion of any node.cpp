#include<iostream>
#include<vector>

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
        next=NULL;
        prev=NULL;
    }
};

Node* createlist(vector <int> &arr, int index, int size, Node* prev)
{
    if(index==size) // base case
    {
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->prev=prev;
    temp->next=createlist(arr, index+1, size, temp);
    return temp; 
}

int main()
{
    vector <int> arr={1,2,3,4,5,6};

    Node *head=createlist(arr, 0, arr.size(), NULL);

    cout<<"Enter position of node which you want to delete: ";
    int pos;
    cin>>pos;

    cout<<"Before deleting the first node: \n";
    Node *temp=head;
    while(temp) 
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    if(head!=NULL) // if linked list exists
    {
        if(pos==1) // if we want to delete first node
        {
            Node* temp=head;
            head=head->next;
            delete temp;
            if(head!=NULL) // edge case
            {
                head->prev=NULL;
            }
        }
        else // if we want to delete nodes after node 1
        {
            Node *current=head;
            while(--pos) // go at the node which you want to delete
            {
                current=current->next;
            }

            if(current->next==NULL) // if we want to delete last node
            {
                current->prev->next=NULL;
                delete current;
            }
            else // if we want to delete node other then first and last node
            {
                current->prev->next=current->next;
                current->next->prev=current->prev;
                delete current;
            }
        }
    }

    cout<<"\nAfter deleting the first node: \n";
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    return 0; 
}