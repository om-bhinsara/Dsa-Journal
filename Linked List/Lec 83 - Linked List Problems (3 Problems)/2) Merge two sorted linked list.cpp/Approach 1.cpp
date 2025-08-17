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
    vector<int> arr1={1,2,3,4,5};
    vector<int> arr2={1,2,2,3,4,5,5,5};

    Node *head1, *head2;

    head1=createlist(arr1, 0, arr1.size());
    head2=createlist(arr2, 0, arr2.size());
    Node *temp;

    cout<<endl<<"Linked list one: "<<endl;
    temp=head1;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl<<"Linked list two: "<<endl;

    temp=head2;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    Node *head;
    if(head1->data >= head2->data)
    {
        head=new Node(head2->data);
        head2=head2->next;
    }
    else
    {
        head=new Node(head1->data);
        head1=head1->next;
    }

    Node *curr=head;

    while(head1 && head2)
    { 
        if(head1->data >= head2->data)
        {
            Node *temp=head2;
            temp->data=head2->data;
            curr->next=temp;
            curr=curr->next;
            head2=head2->next;
        }
        else    
        {
            Node *temp=head1;
            temp->data=head1->data;
            curr->next=temp;
            curr=curr->next;
            head1=head1->next;
        }
    }

    if(head1)
    {
        curr->next=head1;
    }
    else
    {
        curr->next=head2;
    }


    cout<<endl;
    cout<<"Final Merged linked list: "<<endl;
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0; 
}