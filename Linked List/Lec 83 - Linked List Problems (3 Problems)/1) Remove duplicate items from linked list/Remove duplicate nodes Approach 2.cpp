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
    if(index==size) // base case
    {
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->next=createlist(arr, index+1, size);
    return temp;
}

int main()
{
    /*
    Constraints:
    1) Elements in linekd list are always in ascending order or non decreasing order
    2) At least one node will be present in linked list
    */

    vector <int> arr={1,2,2};
    Node *Head;
    Head=createlist(arr, 0, arr.size());

    Node* temp=Head;
    cout<<"Given Linked list: ";
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    if(Head->next==NULL)
    {
        cout<<"Distinct elements in linked list: ";
        cout<<Head->data;
        return 0;
    }
    else
    {
        Node* current=Head->next, *prev=Head;
        while(current)
        {
            // Duplicate mila
            if(current->data==prev->data)
            {
                Node *temp=current;
                prev->next=current->next;
                current=current->next;
                delete temp; 
            }   
            // Duplicate nahi mila
            else
            {
                prev=current;
                current=current->next;
            }
        }
    }

    cout<<endl;
    cout<<"Distinct elements in linked list: ";

    temp=Head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}