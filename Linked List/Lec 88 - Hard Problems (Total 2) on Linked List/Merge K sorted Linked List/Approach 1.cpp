#include <iostream>
#include <vector>
using namespace std;

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

// Function to create linked list from vector
Node* createList(vector<int>& arr)
{
    if (arr.empty()) return NULL;

    Node* head = new Node(arr[0]);
    Node* curr = head;

    for (int i = 1; i < arr.size(); i++)
    {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }

    return head;
}

// Function to print linked list
void printList(Node* head)
{
    Node* curr = head;
    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Function to merge two sorted linked lists
Node* mergeTwoLists(Node* head1, Node* head2)
{
    Node* dummy = new Node(0);  // Dummy node
    Node* tail = dummy;

    while (head1 && head2)
    {
        if (head1->data > head2->data)
        {
            tail->next = head2;
            head2 = head2->next;
        }
        else
        {
            tail->next = head1;
            head1 = head1->next;
        }
        tail = tail->next;
        tail->next = NULL;
    }

    // Attach remaining nodes
    if (head1) tail->next = head1;
    if (head2) tail->next = head2;

    return dummy->next;  // Skip dummy node
}

int main()
{
    // Example 8 sorted linked lists
    vector<int> arr1 = {1, 4, 5};
    vector<int> arr2 = {1, 3, 4};
    vector<int> arr3 = {2, 6};
    vector<int> arr4 = {7, 8};
    vector<int> arr5 = {0, 9};
    vector<int> arr6 = {11, 13};
    vector<int> arr7 = {12, 14, 15};
    vector<int> arr8 = {16, 20};

    // Create heads
    Node* head1 = createList(arr1);
    Node* head2 = createList(arr2);
    Node* head3 = createList(arr3);
    Node* head4 = createList(arr4);
    Node* head5 = createList(arr5);
    Node* head6 = createList(arr6);
    Node* head7 = createList(arr7);
    Node* head8 = createList(arr8);

    // Store all 8 heads in vector
    vector<Node*> lists = {head1, head2, head3, head4, head5, head6, head7, head8};
    int k = lists.size();

    // Merge sequentially
    Node* ans = lists[0];
    for (int i = 1; i < k; i++)
    {
        ans = mergeTwoLists(ans, lists[i]);
    }

    // Print merged list
    printList(ans);

    return 0;
}
