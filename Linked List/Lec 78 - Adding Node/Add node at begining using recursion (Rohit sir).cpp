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

    Node* CreateLinkedList(int arr[], int index, int size, Node *prev)
    {
        if(index==size)
        {
            return prev;
        }

        Node *temp=new Node(arr[index]);
        temp->next=prev; 
        return CreateLinkedList(arr, index+1, size, temp);
    }
    int main()
    {
        int arr[]={1,2,3,4,5};

        Node *Head;
        Head=NULL;

        Head=CreateLinkedList(arr, 0, 5, NULL);
        Node *temp; 
        temp=Head; 

        while(temp!=NULL)
        {
            cout<<temp->data<<" "<<temp->next<<endl;
            temp=temp->next;
        }
        return 0;
    }