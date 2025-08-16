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
    if(index==size)
    {
        return NULL;
    }
    Node* temp=new Node(arr[index]);
    temp->next=createlist(arr, index+1, size);
    return temp;
}

int checkCycle(Node *head)
{
    Node* slow=head, *fast=head;
    while(fast!=NULL && fast->next!=NULL) // if there's no loop then fast will become null or in case of odd no of nodes fast->next will become null
    {
        slow=slow->next; // it will take one steps
        fast=fast->next->next; // it will take two steps 
        if(slow==fast) // if both matches then there's loop in linked list
        {
            slow=slow->next;
            int count=1; 
            while(slow!=fast) // iterate slow till fast to calculate length
            {
                slow=slow->next;
                count+=1;
            }
            return count; // return cycle length
        }
    }
    return 0; // if loop is not present 
}


int main()
{
    vector <int> arr={1,2,3,4,5,6};

    Node *head=createlist(arr, 0, arr.size());

    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;
    
    // first check if loop exist 
    int ans=checkCycle(head); 

    if(ans)
    cout<<"Cycle exist and it has length "<<ans;
    else 
    cout<<"Cycle doesn't exist";
    
    return 0; 
}