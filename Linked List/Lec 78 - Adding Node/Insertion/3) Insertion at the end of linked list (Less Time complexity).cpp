/**
 * The code creates a linked list based on user input and allows the user to add a node at the end of
 * the list.
 */
#include<iostream>
#include<vector> 
using namespace std; 

class NODE
{
    public: 
    int data; 
    NODE *next; 

    NODE(int val)
    {
        data=val; 
        next=NULL;
    }
};

int main()
{
    NODE *HEAD;
    HEAD=NULL;

    int size; 
    cout<<"Enter size of the array: "; 
    cin>>size;
    vector <int> arr(size);

    cout<<"Enter the values: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    NODE *TAIL; 
    TAIL=NULL;

    
    for(int i=0; i<size; i++)
    {
        if(HEAD==NULL)
        {
            HEAD=new NODE(arr[i]);
            TAIL=HEAD; 
        }
        else
        {
            TAIL->next=new NODE(arr[i]);
            TAIL=TAIL->next;
        }
    }

    NODE *temp;
    temp=HEAD;
    for(int i=0; i<arr.size(); i++)
    {
        cout<<temp->data<<" "<<temp->next<<endl; 
        temp=temp->next;
    }

    cout<<"You want to add any node in the end of linked list: (if yes then enter 1, and if no then zero): ";
    int dec;
    cin>>dec;;

    if(dec==1)
    {
        int data;
        cout<<"Enter data: "; 
        cin>>data; 
        TAIL->next=new NODE(data);
        TAIL=TAIL->next;
    }
    else if(dec==0)
    {
        return 0;
    }
    
    NODE *forprint=HEAD;

    while(forprint!=NULL)
    {
    cout<<forprint->data<<" "<<forprint->next<<endl; 
    forprint=forprint->next;
    }

    return 0; 
}