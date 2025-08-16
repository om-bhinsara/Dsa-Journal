#include<iostream>
using namespace std;

// Node structure for singly linked list
class Node {
public:
    int data;
    Node* next;

    // constructor to initialize a new node
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to create a linked list with a cycle
Node* createListWithCycle() {
    // create head node with value 1
    Node* head = new Node(1);
    Node* curr = head;
    Node* cycleStart = NULL;  // pointer to store node where cycle starts

    // create nodes from 2 to 12
    for(int i=2; i<=12; i++) {
        curr->next = new Node(i); // link new node
        curr = curr->next;        // move forward

        if(i == 4) {
            cycleStart = curr; // store node 4 (start of cycle)
        }
    }

    // link last node (12) back to node 4 → creates cycle
    curr->next = cycleStart;
    return head;
}

/* Example created list:
   1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9 → 10 → 11 → 12
                        ↑                         |
                        |_________________________|
   (12 points back to 4, forming a cycle)
*/

// Function to detect and remove cycle using Floyd’s Cycle Detection Algorithm
bool checkCycle(Node *head)
{
    Node* slow = head; // slow pointer (moves 1 step)
    Node* fast = head; // fast pointer (moves 2 steps)

    // loop until fast reaches end or NULL (no cycle)
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;         // move one step
        fast = fast->next->next;   // move two steps 

        // if slow == fast → cycle detected
        if(slow == fast)
        {
            // reset slow to head, keep fast where they met
            slow = head;

            // move both one step at a time until they meet again
            // meeting point = start of cycle
            while(slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            // now "slow" (or "fast") is at start of cycle
            // to break cycle → find last node of loop
            Node *temp = slow;
            while(temp->next != fast) // move until just before cycle start
            {
                temp = temp->next;
            }

            temp->next = NULL; // break the cycle
            return true;       // loop detected and removed
        }
    }
    return false; // no loop present
}

// Utility function to print list after loop removal
void printList(Node* head) {
    Node* curr = head;
    while(curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main()
{
    // create linked list with cycle
    Node* head = createListWithCycle(); 
    
    // detect and remove loop
    bool ans = checkCycle(head);

    if(ans)
        cout << "Loop detected and breaked!" << endl;
    else
        cout << "There's no Loop" << endl;

    // verify by printing list after loop removal
    printList(head);

    return 0;
}
