#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

Node* createLinkedList(int arr[], int index, int size)
{
    if(index==size)
    {
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->next=createLinkedList(arr, index+1, size);
    return temp;
}
int main()
{
    int arr[]={1,2,3,4,5,6};

    Node* head;
    head=createLinkedList(arr, 0, 6);

    Node* temp;
    temp=head;
    int count=0;
    while(temp)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
        count++;
    }
    cout<<endl;
    
    count=count/2;

    temp=head;
    while(count--)
    {
        temp=temp->next;
    }

    cout<<temp->data;
    
    return 0;
}