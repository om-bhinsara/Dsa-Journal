#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Function to print a linked list
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

// Function to create first number as a linked list
// Example: Number 1243 will be stored as 3 -> 4 -> 2 -> 1 (reverse order)
void createFirstNumber(Node*& head1)
{
    head1 = new Node(3);
    head1->next = new Node(4);
    head1->next->next = new Node(2);
    head1->next->next->next = new Node(1);
}

// Function to create second number as a linked list
// Example: Number 564 will be stored as 4 -> 6 -> 5 (reverse order)
void createSecondNumber(Node*& head2)
{
    head2 = new Node(4);
    head2->next = new Node(6);
    head2->next->next = new Node(5);
}

// Function to reverse a linked list (iterative method)
Node* reverseList(Node* head)
{
    Node* prev = NULL;             // previous pointer
    Node* curr = head;             // current pointer
    Node* fut = head->next;        // future pointer (next node)

    while (curr)                   // traverse the list
    {
        curr->next = prev;         // reverse the link
        prev = curr;               // move prev forward
        curr = fut;                // move curr forward
        if (fut)                   // move fut forward if not NULL
            fut = fut->next;
    }
    return prev;                   // new head of reversed list
}

int main()
{
    Node* head1 = NULL;
    Node* head2 = NULL;

    // Create two linked lists (numbers stored in reverse order)
    createFirstNumber(head1);
    createSecondNumber(head2);

    cout << "First Number: ";
    printList(head1);

    cout << "Second Number: ";
    printList(head2);

    // Step 1: Reverse both linked lists to get the actual order
    head1 = reverseList(head1);
    head2 = reverseList(head2);

    // Pointers to traverse both lists
    Node *curr1 = head1; 
    Node *curr2 = head2; 

    int carry = 0;                 // to handle carry during addition

    // Create a dummy node to simplify result list creation
    Node *temp = new Node(0);
    Node *temp1 = temp;            // keep pointer to dummy node

    // Step 2: Add digits while both lists have nodes
    while (curr1 && curr2)   
    {
        int data = curr1->data + curr2->data + carry;   // add digits + carry
        temp->next = new Node(data % 10);               // store last digit
        carry = data / 10;                              // update carry
        curr1 = curr1->next;                            // move to next digit
        curr2 = curr2->next;
        temp = temp->next;                              // move result pointer
    }

    // Step 3: If list1 has remaining digits
    while (curr1)   
    {
        int data = curr1->data + carry;
        temp->next = new Node(data % 10);
        carry = data / 10;
        curr1 = curr1->next;
        temp = temp->next;
    }

    // Step 4: If list2 has remaining digits
    while (curr2)   
    {
        int data = curr2->data + carry;
        temp->next = new Node(data % 10);
        carry = data / 10;
        curr2 = curr2->next;
        temp = temp->next;
    }

    // Step 5: If there is still a carry left
    while (carry)   
    {
        int data = carry;
        temp->next = new Node(data % 10);
        carry = carry / 10;
        temp = temp->next;
    }

    // Remove dummy node
    temp = temp1; 
    temp1 = temp1->next;
    delete temp;

    // Step 6: Reverse the result list to get the correct number
    Node *print = reverseList(temp1);

    // Step 7: Print the final result
    cout << "Result: ";
    printList(print);

    return 0;
}
