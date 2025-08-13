#include<iostream>
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

Node* createlinkedlist(int arr[], int index, int size)
{
    if(index==size) // base case
    {
        return NULL;
    }
    Node *temp=new Node(arr[index]); 
    temp->next=createlinkedlist(arr, index+1, size);
    return temp; 
}

void Addnode(int x, Node *(&Head), int data, Node *(&temp))
{
    if(x--)
    {
        temp=temp->next;
        Addnode(x, Head, data, temp);
    }
    else
    {
        Node *temp1=new Node(data);
        temp1->next=temp->next;
        temp->next=temp1;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    
    Node *Head; 
    int x;
    cout<<"Enter x (After how many nodes you want to enter node): ";
    cin>>x;

    if(x<1)
    {
        cout<<"Enter correct value";
        return 0; 
    }

    int data;
    cout<<"Enter node's data part: ";
    cin>>data;

    Head=createlinkedlist(arr, 0, 5);

    cout<<"\nBefore adding a new node: \n";
    Node *temp=Head; 
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
    temp=Head; 
    Addnode(x-1, Head, data, temp);

    cout<<"\nAfter adding new node: \n";
    temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
    return 0; 
}

/*
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Recursive function to create a linked list
Node *createlinkedlist(int arr[], int index, int size)
{
    if (index == size) // Base case
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = createlinkedlist(arr, index + 1, size);
    return temp;
}

// Recursive function to add a new node at position `x`
void Addnode(int x, Node *&temp, int data)
{
    if (temp == NULL)
    {
        cout << "Error: x is out of bounds!" << endl;
        return;
    }

    if (x == 0) // Base case: insert at current position
    {
        Node *temp1 = new Node(data);
        temp1->next = temp->next;
        temp->next = temp1;
        return;
    }

    Addnode(x - 1, temp->next, data);
}

// Function to print the linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    Node *Head = createlinkedlist(arr, 0, 5);

    int x;
    cout << "Enter x (After how many nodes you want to insert the new node, 0-based index): ";
    cin >> x;

    int data;
    cout << "Enter the new node's data: ";
    cin >> data;

    if (x == 0) // Insert at the beginning
    {
        Node *newHead = new Node(data);
        newHead->next = Head;
        Head = newHead;
    }
    else
    {
        Addnode(x - 1, Head, data); // Call recursive function
    }

    cout << "\nUpdated Linked List: ";
    printList(Head);

    return 0;
}

*/