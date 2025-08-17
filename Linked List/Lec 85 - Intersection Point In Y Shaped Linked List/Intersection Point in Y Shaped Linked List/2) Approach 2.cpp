#include <iostream>
using namespace std;

// Class representing a node of the linked list
class Node 
{
public:
    int data;     // Data part of the node
    Node* next;   // Pointer to the next node

    // Constructor to initialize node with a value
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

    // Traverse through the list until NULL is reached
    while (curr != NULL) 
    {
        cout << curr->data << " ";  // Print data
        curr = curr->next;          // Move to next node
    }
    cout << endl;
}

// Function to create a Y-shaped linked list
// List 1: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7
// List 2: 8 -> 9 -> 5 -> 6 -> 7
void createYShapedList(Node*& head1, Node*& head2) 
{
    // Common part: 5 -> 6 -> 7
    Node* common = new Node(5);
    common->next = new Node(6);
    common->next->next = new Node(7);

    // First list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7
    head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);
    head1->next->next->next->next = common;

    // Second list: 8 -> 9 -> 5 -> 6 -> 7
    head2 = new Node(8);
    head2->next = new Node(9);
    head2->next->next = common;
}

// Function to detect intersection using cycle detection
int findIntersection(Node* head2)
{
    Node* slow = head2;
    Node* fast = head2; 

    // Traverse while fast and fast->next are not NULL
    while (fast != NULL && fast->next != NULL) 
    {
        slow = slow->next;           // Move slow by 1 step
        fast = fast->next->next;     // Move fast by 2 steps

        // If slow and fast meet, loop exists
        if (slow == fast) 
        {
            // Reset slow to head
            slow = head2;

            // Move both one step until they meet at intersection
            while (slow != fast) 
            {
                slow = slow->next;
                fast = fast->next;
            }

            return slow->data;   // Intersection point found
        }
    }

    return -1; // No intersection found
}

int main() 
{
    Node* head1 = NULL;
    Node* head2 = NULL;

    // Create Y-shaped linked list
    createYShapedList(head1, head2);

    // Print both lists
    cout << "List 1: ";
    printList(head1);

    cout << "List 2: ";
    printList(head2);

    // Create a cycle for detection (tail of list1 connected back to head1)
    Node* curr1 = head1;
    while (curr1->next != NULL) 
    {   
        curr1 = curr1->next;
    }
    curr1->next = head1;  

    // Check if loop exists (to detect intersection)
    int ans = findIntersection(head2);

    if (ans != -1) 
    {
        cout << "Intersection point is " << ans;
    } 
    else 
    {
        cout << "There's no intersection point";
    }

    return 0;
}
