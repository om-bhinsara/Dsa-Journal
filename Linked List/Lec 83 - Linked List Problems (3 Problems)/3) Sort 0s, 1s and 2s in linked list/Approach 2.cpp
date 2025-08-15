#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public: 
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* createlist(vector <int> &arr, int index, int size)
{
    if(index==size) // Base case
    {
        return NULL; 
    }
    Node* temp;
    temp=new Node(arr[index]);
    temp->next=createlist(arr, index+1, size);
    return temp; 
}
int main()
{
    vector<int> arr1={1,0,1,2,1,0,1,2};

    Node *head, *temp;

    head=createlist(arr1, 0, arr1.size());

    Node *head0=new Node(0), *head1=new Node(0), *head2=new Node(0); 
    Node *tail0=head0, *tail1=head1, *tail2=head2;

    temp=head;
    while(temp)
    {
        if(temp->data==0)
        {
            tail0->next=temp;
            tail0=tail0->next;
            head0=head0->next;
            tail0->next=NULL;
        }
        else if(temp->data==1)
        {
            tail1->next=temp;
            tail1=tail1->next;
            head1=head1->next;
            tail1->next=NULL;
        }
        else
        {
            tail2->next=temp;
            tail2=tail2->next;
            head2=head2->next;
            tail2->next=NULL;
        }
        temp=temp->next;
    }

    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0; 
}