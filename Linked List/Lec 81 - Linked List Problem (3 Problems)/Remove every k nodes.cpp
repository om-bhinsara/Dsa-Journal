#include<iostream>
#include<vector>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;

    Node(int data) // constructor 
    {
        val=data;
        next=NULL;
    }
};

Node* createlist(vector <int> &nums, int i, int n)
{
    if(i==n) // base case
    {
        return NULL;
    }
    Node* temp=new Node(nums[i]);
    temp->next=createlist(nums, i+1, n);
    return temp;
}

void delete_every_k(Node* prev, Node* curr, int k)
{
    int count=1; 
    while(curr)
    {
        if(count==k)
        {
            if(curr->next!=NULL)
            {
            prev->next=curr->next;
            count=1;
            }
            else
            {
                prev->next=curr;
                curr=curr->next;
            }
        }
        else // if not
        {
            prev=curr;
            curr=curr->next;
            count=count+1;
        }
    }
}

int main()
{   
    int n; 
    cout<<"How many elements you want in linked list: ";
    cin>>n;

    vector <int> nums(n);
    for(int i=0; i<n; i++)
    {
        cout<<"Enter element nums["<<i+1<<"]: ";
        cin>>nums[i];
    }

    Node* head=createlist(nums, 0, n);
    Node *temp=head;

    while(temp)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }

    cout<<"Enter value of K: ";
    int k;                      // every k node will be deleted
    cin>>k;

    if(k==1)
    {
        cout<<head->val;
        head->next=NULL;
    }

    // if k is not equals to 1
    delete_every_k(head, head->next, k);
    
    temp=head;
    while(temp)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }

    return 0; 
}