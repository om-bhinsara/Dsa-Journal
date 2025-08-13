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
    int arr[]={1,2,3,4,5};

    Node *head;
    head=createlist(arr, 0, 5);

    Node *temp=head;
    int count=0;
    while(temp)
    {
        count++;
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    int k;
    cout<<"Enter how many roataion you want: ";
    cin>>k;

    k=k%count;
    count=count-k;

    Node *current=head;
    
    while(count--)
    {
        current=current->next;
    }

    vector<int> rotation_arr(5);

    for(int i=0; i<k; i++)
    {
        rotation_arr[i]=current->data;
        current=current->next;
    }

    current=head;
    for(int i=k; i<rotation_arr.size(); i++)
    {
        rotation_arr[i]=current->data;
        current=current->next;
    }

    for(int i=0; i<rotation_arr.size(); i++)
    {
        cout<<rotation_arr[i]<<" ";
    }

    temp=head; int i=0;
    while(temp)
    {
        temp->data=rotation_arr[i];
        i++;
        temp=temp->next;
    }

    cout<<endl; 

    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}