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

Node* createlist(int arr[], int index, int size)
{
    if(index==size)
    {
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->next=createlist(arr, index+1, size);
    return temp;
}

int main()
{
    int arr[]={1,2,3,2,1};

    Node *head;
    head=createlist(arr, 0, 5);

    if(head==NULL)
    {
        cout<<"Linked list is Palindrome";
        return 0;
    }

    Node *temp=head;
    int count=0;
    while(temp)
    {
        count++;
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    count=count/2;
    
    Node *current=head, *prev=NULL;
    while(count--)
    {
        prev=current;
        current=current->next;
    }
    
    prev->next=NULL;
    Node *head2=current;

    current=head2, prev=NULL;
    Node *future=head2;
    
    while(current)
    {
        future=future->next;
        current->next=prev;
        prev=current;
        current=future;
    }
    head2=prev;
    
    while(head!=NULL)
    {
        if(head->data!=head2->data)
        {
            cout<<"Linked list is not palindrome";
            return 0;
        }
        head=head->next;
        head2=head2->next;
    }

    cout<<"Linked list is palindrome";
   
    
    return 0;
}