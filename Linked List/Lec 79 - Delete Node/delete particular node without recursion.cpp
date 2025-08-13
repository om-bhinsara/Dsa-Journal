#include<iostream>
#include<vector>
using namespace std; 

class node
{
    public: 
    int data; 
    node *next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

int main()
{
    int n;
    cout<<"Enter no. of elements you want in linked list: ";
    cin>>n;

    vector <int> arr(n);

    cout<<"Enter linked list elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    node *head;
    
    for(int i=0; i<n; i++)
    {
        if(head==NULL)
        {
            head=new node(arr[i]);
        }
        else 
        {
            node *tail=head;
            while(tail->next!=NULL)
            {
                tail=tail->next;
            }
            tail->next=new node(arr[i]); // node *temp=new node(arr[i]), tail->next=temp; 
        }
    }

    cout<<"Linked list: ";
    node *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl; 

    cout<<"Enter which node you want to delete: ";
    int x; 
    cin>>x; 

    if(x<1 || x>arr.size())
    {
        cout<<"Enter valid node number!"; 
        return 0; 
    }
    node *prev=NULL;
    if(x==1)
    {
        temp=head;
        head=head->next;
        delete temp; 
    }
    else
    {
        temp=head;
        prev=NULL;
        while(x!=1)
        {
            prev=temp;
            temp=temp->next; 
            x--;
        }
        prev->next=temp->next;
        delete temp;
    }
    
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0; 
}