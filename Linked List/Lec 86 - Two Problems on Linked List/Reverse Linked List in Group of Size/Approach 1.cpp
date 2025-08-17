#include <iostream>
using namespace std;

// Node structure for Linked List
class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Function to create a linked list with elements 1 → 2 → ... → 10
Node* createList()
{
    Node* head = new Node(1);   // head node
    Node* curr = head;

    for (int i = 2; i <= 10; i++)
    {
        curr->next = new Node(i); // create new node
        curr = curr->next;        // move forward
    }
    return head;
}

// Function to print linked list
void printList(Node* head)
{
    Node* curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    // Create a linked list: 1 → 2 → ... → 10
    Node* head = createList();  
    cout << "Linked List: ";
    printList(head);

    cout << "Enter k: ";
    int k; 
    cin >> k;

    /* 
       NOTE:
       - GFG version → If remaining nodes < k → Still reverse them.
       - LeetCode version → If remaining nodes < k → Leave them as-is.
       
       Uncomment this block for LeetCode version:
    
        int count = 0;
        Node* temp = head;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        if (count < k)
        {
            cout << "Not enough nodes";
            return 0;
        }
    */

    // Dummy node creation (helps handle edge cases easily)
    Node* first = new Node(0);
    first->next = head;
    head = first;   // make dummy node as new head temporarily
    
    // Traverse and reverse groups of size k
    while (first->next)
    {
        Node* prev = first;         // "prev" initially points to dummy or last node of previous block
        Node* curr = prev->next;    // "curr" points to the first node of current block
        Node* second = first->next; // "second" stores start of this block (will become the end after reversal)
        Node* fut;                  // pointer to store next node
        int x = k;

        // Reverse exactly k nodes (or remaining nodes if < k)
        while (x && curr)
        {
            fut = curr->next;   // store next node
            curr->next = prev;  // reverse the link
            prev = curr;        // move prev ahead
            curr = fut;         // move curr ahead
            x--;
        }

        // After reversing, reconnect links
        first->next = prev;     // connect dummy/last block to new head of this block
        second->next = curr;    // connect new tail of this block to next part
        first = second;         // move first to end of this block
    }

    // Remove dummy node
    Node* temp = head;
    head = head->next;
    delete temp;

    // Print final reversed linked list
    cout << "Reversed List in groups of k: ";
    printList(head);

    return 0;
}
