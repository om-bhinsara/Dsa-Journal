#include<iostream>
using namespace std;
// om method
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

void createlist(int arr[], int start, int end, NODE *(&Head))
{
    if(start>=end)
    {
        return;
    }
    
    NODE *temp=new NODE(arr[start]); 
    if(Head==NULL) // First node creation
    {
        Head=temp; 
    }
    else
    {
        temp->next=Head;
        Head=temp; 
    }
    createlist(arr, start+1, end, Head);
}
int main()
{
    int arr[]={1,2,3,4,5};
    
    NODE *Head; 
    Head=NULL;

    createlist(arr, 0, 5, Head);  

    NODE *temp=Head; 
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<temp->next<<endl;
        temp=temp->next;
    }
    return 0; 
}