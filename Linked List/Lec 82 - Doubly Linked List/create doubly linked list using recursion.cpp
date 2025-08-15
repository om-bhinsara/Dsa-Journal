#include<iostream>
#include<vector>
using namespace std;

// create doubly linked using recursion

class Node 
{
    public: 
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data=val; 
        next=NULL;
        prev=NULL;
    }
};

// recursive approach
Node* createlist(vector <int> &arr, int index, int size, Node *prev)
{
    if(index==size) // base case
    {
        return NULL; 
    }

    Node *temp=new Node(arr[index]);
    temp->prev=prev;
    temp->next=createlist(arr, index+1, size, temp);
    return temp;
};

int main()
{
    vector<int> arr={1,2,3,4,5};
    
    Node *head;
    head=createlist(arr, 0, arr.size(), NULL);

    Node* temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0; 
}