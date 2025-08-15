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

    if(head==NULL)
    {
        cout<<"Palindrome";
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

    temp=head;
    vector <int> elements(count);

    for(int i=0; i<count; i++)
    {
        elements[i]=temp->data;
        temp=temp->next;
        cout<<elements[i]<<" ";
    }
    cout<<endl;

    int start=0, end=count-1;
    while(start<end)
    {
        if(elements[start]!=elements[end])
        {
            cout<<"Not palindrome";
            return 0;
        }
        start++, end--;
    }
    cout<<"Palindrome";
    return 0;
}