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

bool checkCycle(Node *curr, unordered_map <Node*, bool> &visited)
{
    while(curr)
    {
        if(visited[curr]==1)
        {
            return true;
        }
        visited[curr]=true;
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
    temp->next=head; // to make linked list circular or to make loop inside it
    
    // detect loop in linked list
    unordered_map <Node*, bool> visited; 
    bool ans=checkCycle(head, visited); 

    if(ans)
    cout<<"Cycle exist";
    else 
    cout<<"Cycle doesn't exist";

    return 0; 
}