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

bool checkCycle(Node *curr, vector <Node*> &addresses)
{
    while(curr)
    {
        for(int i=0; i<addresses.size(); i++)
        {
            if(addresses[i]==curr)
            {
                return true;
            }
        }
        addresses.push_back(curr);
        curr=curr->next;
    }
    return false;
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
    // temp->next=head; // to make linked list circular or to make loop inside it
    
    // detect loop in linked list
    vector <Node*> addresses;
    bool ans=checkCycle(head, addresses);

    if(ans) 
    cout<<"Cycle exist";
    else 
    cout<<"Cycle doesn't exist";

    return 0; 
}