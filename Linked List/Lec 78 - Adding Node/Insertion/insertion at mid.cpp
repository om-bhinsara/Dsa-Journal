#include<iostream>
#include<vector> 
using namespace std;
// om metod
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
int main()
{
    Node *Head;
    Head=NULL;
    Node *Tail;
    Tail=NULL;

    cout<<"Enter how many elements you want to enter: ";
    int n; 
    cin>>n; 


    vector <int> arr(n);
    for(int i=0; i<n; i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    for(int i=0; i<arr.size(); i++)
    {
        if(Head==NULL)
        {
            Head=new Node(arr[i]);
            Tail=Head; 
        }
        else
        {
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
        }
    }
   

    cout<<"Enter x (After which node you want to add value): ";
    int x; 
    cin>>x;

    if(x>arr.size())
    {
        cout<<"Enter valid value of linked list node";
        return 0;
    }

    cout<<"Enter data: ";
    int data;
    cin>>data;

    Node *temp;
    temp=Head;

    int i=1;
    while(i!=x)
    {
        temp=temp->next;
        i++; 
    }

    Node *newNode;
    newNode=new Node(data);
    Node *temp2;

    temp2=temp->next;
    temp->next=newNode;
    newNode->next=temp2; 

    Node *for_print;
    for_print=Head;

    while(for_print!=NULL)
    {
        cout<<for_print->data<<endl;
        for_print=for_print->next;
    }
    return 0;
}