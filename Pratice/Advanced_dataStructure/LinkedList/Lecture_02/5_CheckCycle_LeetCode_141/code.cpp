#include <iostream>
using namespace std;

// Solution 
/*
    1) Check if the fast pointer reaches NULL
    2) Check if the fast pointer is sane as slow pointer
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    }
    return false;
}

int main() {
    ListNode *head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = head1->next;
    cout << "Test case 1: " << (hasCycle(head1) ? "Cycle detected" : "No cycle") << endl;

    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    cout << "Test case 2: " << (hasCycle(head2) ? "Cycle detected" : "No cycle") << endl;

    // Test case 3: Create a list with only one node (no cycle)
    ListNode *head3 = new ListNode(1);
    cout << "Test case 3: " << (hasCycle(head3) ? "Cycle detected" : "No cycle") << endl;

    return 0;
}
