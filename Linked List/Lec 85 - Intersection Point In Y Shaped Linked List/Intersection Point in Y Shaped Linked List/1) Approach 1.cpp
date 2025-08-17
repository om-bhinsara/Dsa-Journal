#include <iostream>
using namespace std;

// Node structure for linked list
class Node 
{
public:
    int data;   // value stored in node
    Node* next; // pointer to next node

    Node(int val) 
    {
        data = val;
        next = NULL;
    }
};

// Function to print a linked list
void printList(Node* head) 
{
    while (head) 
    {
        cout << head->data;
        if (head->next) 
        {
            cout << " -> ";  // print arrow only if next exists
        }
        head = head->next;
    }
    cout << endl;
}

// Function to count number of nodes in a linked list
int countNodes(Node* head) 
{
    int count = 0;
    while (head) 
    {
        count++;           // increase count for each node
        head = head->next; // move to next node
    }
    return count;
}

// Function to create two linked lists that intersect at node 5
void createLists(Node*& head1, Node*& head2) 
{
    // Common part of both lists: 5 -> 6 -> 7
    Node* common = new Node(5);
    common->next = new Node(6);
    common->next->next = new Node(7);

    // First list: 1 -> 2 -> 3 -> 4 -> (common part)
    head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);
    head1->next->next->next->next = common;

    // Second list: 8 -> 9 -> (common part)
    head2 = new Node(8);
    head2->next = new Node(9);
    head2->next->next = common;
}

int main() 
{
    Node* head1 = NULL;
    Node* head2 = NULL;

    // Create two lists with intersection
    createLists(head1, head2);

    // Step 1: Count lengths of both lists
    int count_of_list1 = countNodes(head1);
    int count_of_list2 = countNodes(head2);

    // Step 2: Find difference in lengths
    int count;
    bool b = 0; // flag to know which list is longer\
    
    if (count_of_list1 > count_of_list2) 
    {
        count = count_of_list1 - count_of_list2; 
        b = 1; // list1 is longer
    } 
    else 
    {
        count = count_of_list2 - count_of_list1; // list2 is longer
    }

    // Step 3: Move the pointer of longer list ahead by "count"
    Node *curr1 = head1, *curr2 = head2; 
    if (b == 1) 
    {
        while (count--) 
        {
            curr1 = curr1->next;
        }
    } 
    else 
    {
        while (count--) 
        {
            curr2 = curr2->next;
        }
    }

    // Step 4: Move both pointers one step at a time until they meet
    while (curr1 != curr2) 
    {
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    // Step 5: Print intersection point (if found)
    if (curr1) 
    {
        cout << "Intersection point is " << curr1->data;
    } 
    else 
    {
        cout << "No intersection found.";
    }

    return 0;
}
