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

Node* createlist(vector <int> &arr, int index, int size)
{
    if(index==size) // base case
    {
        return NULL;
    }
    Node *temp=new Node(arr[index]);
    temp->next=createlist(arr, index+1, size);
    return temp;
}

int main()
{
    /*
    Constraints:
    1) Elements in linekd list are always in ascending order or non decreasing order
    2) At least one node will be present in linked list
    */

    vector <int> arr={1,2,3,3,4,4,5};
    Node *Head;
    Head=createlist(arr, 0, arr.size());

    Node* temp=Head;
    cout<<"Given Linked list: ";
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    Node* curr=Head;
    vector<int> ans;
    ans.push_back(curr->data);
    
    while(curr)
    {
            if(curr->data!=ans[ans.size()-1])
            {
                ans.push_back(curr->data);
            }
            curr=curr->next;
    }

    cout<<endl;

    cout<<"Stored element in array: ";
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    int index=0;
    curr=Head;
    while(index<ans.size())
    {
        curr->data=ans[index];
        index++;
        curr=curr->next;
    }
    
    // for linked list break
    int size=ans.size()-1; 
    curr=Head;
    while(size--)
    {
        curr=curr->next;
    }
    curr->next=NULL;

    cout<<endl; 

    cout<<"Distinct elements in linked list: ";
    curr=Head;
    while(curr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    return 0;
}