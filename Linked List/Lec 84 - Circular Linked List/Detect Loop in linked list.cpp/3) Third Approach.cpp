#include<iostream>
#include<vector>
#include<unordered_map> 
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

bool checkCycle(Node *head)
{
    Node* slow=head, *fast=head;
    while(fast!=NULL && fast->next!=NULL) // if there's no loop then fast will become null or in case of odd no of nodes fast->next will become null
    {
        slow=slow->next; // it will take one steps
        fast=fast->next->next; // it will take two steps 
        if(slow==fast) // if both matches then there's loop in linked list
        {
            return true; // if loop is present
        }
    }
    return false; // if loop is not present 
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
    temp->next=head; // to make linked list circular or to make loop inside it
    
    // detect loop in linked list - Floyd’s algorithm
    bool ans=checkCycle(head); 

    if(ans)
    cout<<"Cycle exist";
    else 
    cout<<"Cycle doesn't exist";

    return 0; 
}