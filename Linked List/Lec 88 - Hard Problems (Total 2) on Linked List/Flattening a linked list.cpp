#include <iostream>
using namespace std;

// Node structure for linked list
class Node
{
public:
    int data;
    Node* next;    // Horizontal pointer (to next list head)
    Node* bottom;  // Vertical pointer (to elements of current list)

    Node(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};

// Function to print a bottom-linked list
void printList(Node* root)
{
    while (root != NULL)
    {
        cout << root->data << " ";
        root = root->bottom;
    }
    cout << endl;
}

// Function to merge two bottom-linked lists
Node* mergeNodes(Node* head1, Node* head2)
{
    Node* head = new Node(0);  // Dummy node
    Node* tail = head;

    // Merge like merging 2 sorted linked lists
    while (head1 && head2)
    {
        if (head1->data > head2->data)
        {
            tail->bottom = head2;
            tail = tail->bottom;
            head2 = head2->bottom;
        }
        else
        {
            tail->bottom = head1;
            tail = tail->bottom;
            head1 = head1->bottom;
        }
        // Ensure no wrong connections
        tail->bottom = NULL;
    }

    // Attach remaining nodes
    if (head1)
        tail->bottom = head1;
    else
        tail->bottom = head2;

    return head->bottom;  // Return merged list (skip dummy node)
}

// Function to flatten the linked list
Node* flatten(Node* head)
{
    while (head->next)
    {
        Node* head1 = head;           // First column
        Node* head2 = head->next;     // Second column
        Node* head3 = head->next->next; // Remaining list

        // Disconnect next pointers (only merge bottom lists)
        head1->next = NULL;
        head2->next = NULL;

        // Merge first two lists
        head = mergeNodes(head1, head2);

        // Reattach the remaining horizontal part
        if (head3)
            head->next = head3;
    }

    return head;
}

int main()
{
    // Creating nodes row-wise (like in GFG "Flattening a Linked List")
    Node* head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(19);
    head->next->next->next = new Node(28);
    head->next->next->next->next = new Node(30);

    // Column 1 (5 -> 7 -> 8 -> 30)
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);
    head->bottom->bottom->bottom = new Node(30);

    // Column 2 (10 -> 20 -> 40)
    head->next->bottom = new Node(20);
    head->next->bottom->bottom = new Node(40);

    // Column 3 (19 -> 22 -> 50)
    head->next->next->bottom = new Node(22);
    head->next->next->bottom->bottom = new Node(50);

    // Column 4 (28 -> 35 -> 40 -> 45)
    head->next->next->next->bottom = new Node(35);
    head->next->next->next->bottom->bottom = new Node(40);
    head->next->next->next->bottom->bottom->bottom = new Node(45);

    // Column 5 (30 -> 34 -> 40)
    head->next->next->next->next->bottom = new Node(34);
    head->next->next->next->next->bottom->bottom = new Node(40);

    // Printing all columns before flattening
    cout << "Column 1: ";
    printList(head);

    cout << "Column 2: ";
    printList(head->next);

    cout << "Column 3: ";
    printList(head->next->next);

    cout << "Column 4: ";
    printList(head->next->next->next);

    cout << "Column 5: ";
    printList(head->next->next->next->next);

    // Flattening the linked list
    Node* flatHead = flatten(head);

    // Printing the flattened list
    cout << "\nFlattened List: ";
    printList(flatHead);

    return 0;
}
