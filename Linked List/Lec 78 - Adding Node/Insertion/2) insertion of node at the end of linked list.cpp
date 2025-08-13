#include<iostream>
#include<vector> 
using namespace std; 

class node
{
    public: 
    int data; 
    node *next; 

    node(int data)
    {
        this->data=data; 
        next=NULL;
    }
};

int main()
{
    cout<<"Enter size of the array: ";
    int size; 
    cin>>size; 

    vector <int> arr(size);
    for(int i=0; i<arr.size(); i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }

    node *head;
    for(int i=0; i<arr.size(); i++)
    {
        if(head==NULL)
        {
            head=new node(arr[i]);
        }
        else
        {
            node* tail=head;
            node* temp=new node(arr[i]); // temp's memory will automatically deallocated because of scope 
            while(tail->next!=NULL)
            {
            tail=tail->next; 
            }
            tail->next=temp;
        }
    }

    cout<<"Enter data of the node which you want to connect at the end: ";
    int data;
    cin>>data; 
    
    node *last_node; 
    node *tail=head; 
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    last_node=new node(data);
    tail->next=last_node;

    cout<<"\nHere's the all element with their address:\n";  
    /* condition for linked list element printing should be this */
    node *forprint=head;
    while(forprint!=NULL)
    {
        cout<<forprint->data<<" "<<forprint->next<<endl; 
        forprint=forprint->next;
    }

    delete head, tail; // deallocation of memory which is allocated dynamically  
    return 0; 
}