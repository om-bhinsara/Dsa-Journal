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
    vector <int> arr={1,2,3,4,5};

    Node *head=createlist(arr, 0, arr.size(), NULL);

    Node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
    cout<<"After which position you want to enter node: ";
    int pos;
    cin>>pos;

    // now go at the position after which you want to add node

    Node *current=head;
    
    // if there's no linked list
    if(pos==0) // we want to add node at first
    {
        if(head==NULL)
        {
            head=new Node(5);
        }
        // if there's linked list exists
        else
        {
            if(head!=NULL) // if insertion at start
            {
                Node *temp=new Node(5);
                temp->next=head;
                head->prev=temp;
                head=temp;
            }
        }
    }
    else // if insetion at mid
    {
        while (--pos)
        {
        current=current->next;
        }

        if(current->next==NULL) // if insertion at last node
        {
            Node* temp=new Node(5);
            temp->prev=current;
            current->next=temp; 
        }
        else // at mid (other than start and end)
        {
            Node *temp=new Node(5);
            temp->next=current->next;
            temp->prev=current;
            current->next=temp;
            current->next->prev=temp;
        }
    }

    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }


    return 0; 
}