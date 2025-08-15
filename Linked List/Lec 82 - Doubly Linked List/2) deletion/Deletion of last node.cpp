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

    cout<<"Before deleting the last node: \n";
    Node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    if(head!=NULL)
    {
        if(head->next==NULL) // edge case
        {
            delete head;
            head=NULL;
        }
        else
        {
            Node *current=head;
            while(current->next)
            {
                current=current->next;
            }
            current->prev->next=NULL;
            delete current;
        }
    }

    cout<<"\nAfter deleting the last node: \n";
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    return 0; 
}