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
    vector <int> arr={1,2,4,5,6,6};

    Node *head=createlist(arr, 0, arr.size(), NULL);

    cout<<"Before deleting the first node: \n";
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
            Node *temp=head;
            head=head->next;
            delete temp;
            if(head!=NULL)  // edge case
            {
                head->prev=NULL;
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