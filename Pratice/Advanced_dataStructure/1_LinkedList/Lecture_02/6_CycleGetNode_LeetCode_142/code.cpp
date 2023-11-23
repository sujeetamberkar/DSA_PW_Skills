#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *detectCycle(ListNode *head) {
    bool check = false;
    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *temp = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            check = true;
            break;
        }
    }

    if (check) {
        ListNode *temp = head;
        while (temp != slow) {
            temp = temp->next;
            slow = slow->next;
        }
        return temp;
    } else {
        return NULL;
    }
}

int main() {
    ListNode *head1 = new ListNode(3);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(0);
    head1->next->next->next = new ListNode(-4);
    head1->next->next->next->next = head1->next; // Cycle: -4 -> 2

    ListNode *result1 = detectCycle(head1);
    if (result1 != nullptr) {
        cout << "Test case 1: Cycle begins at node with value " << result1->val << endl;
    } else {
        cout << "Test case 1: No cycle detected" << endl;
    }

    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = nullptr; // No cycle

    ListNode *result2 = detectCycle(head2);
    if (result2 != nullptr) {
        cout << "Test case 2: Cycle begins at node with value " << result2->val << endl;
    } else {
        cout << "Test case 2: No cycle detected" << endl;
    }

    return 0;
}
