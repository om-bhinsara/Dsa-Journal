#include <iostream>
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


int main()
{
    Node *head; 
    head=NULL;
    
    cout<<"Enter no. of elements you want to enter in the list: ";
    int n; 
    cin>>n; 
    
    vector <int> arr(n);
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0; i<arr.size(); i++)
    {
        if(head==NULL)
        {
            head=new Node(arr[i]);
        }
        else
        {
            Node* tail=head;
            Node* temp=new Node(arr[i]); // temp's memory will automatically deallocated because of scope 
            while(tail->next!=NULL)
            {
            tail=tail->next; 
            }
            tail->next=temp;
        }
    }
    
    Node *temp=head;
    cout<<"Linked list: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next; 
    }

    /* The lines `delete head;` and `delete temp;` in the code are deallocating the memory that was
    dynamically allocated for the head node and the temporary node in the linked list. */
    delete head;
    delete temp; 
    return 0;
}