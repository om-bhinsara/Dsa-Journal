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

    int count0=0, count1=0, count2=0;

    temp=head;
    while(temp)
    {
        if(temp->data==0)
        count0++;
        else if(temp->data==1)
        count1++;
        else
        count2++;

        temp=temp->next;
    }

    temp=head;

    while(count0--)
    {
        temp->data=0;
        temp=temp->next;
    }

    while(count1--)
    {
        temp->data=1;
        temp=temp->next;
    }

    while(count2--)
    {
        temp->data=2;
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