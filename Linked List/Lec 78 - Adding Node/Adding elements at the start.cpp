#include<iostream>
using namespace std;
#include<vector> 

class NODE
{
    public: 
    int data; 
    NODE *next;

    NODE(int data)
    {
        this->data=data; 
        next=NULL; 
    }
}; 

NODE* create_list(vector <int> &arr, int i, int n)
{
    if(i==n)
    {
        return NULL;
    }
    NODE *temp=new NODE(arr[i]);
    temp->next=create_list(arr, i+1, n);
    return temp; 
};


int main()
{
    NODE *head;

    cout<<"Enter no. of element you want to enter: ";
    int n; 
    cin>>n;

    cout<<"Enter linked list elements: ";
    vector <int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    head=create_list(arr,0,n);

    cout<<"Linked list elements: \n";
    NODE *temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}