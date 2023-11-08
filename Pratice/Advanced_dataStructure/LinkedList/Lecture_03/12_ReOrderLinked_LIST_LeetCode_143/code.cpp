#include <iostream>
using namespace std;

/*
    1 - >2- >3- >4- >5- >6
               (Mid Right)

    1-->2-->3-->(4-->5- >6)

    1-->2-->3    6-->5-->4

Now have a dummy list to add one element from the LHS or RHS
*/
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
void display(ListNode *node)
{
    ListNode *temp = node;
    while (temp != NULL)
    {
        cout << temp->val << "\t";
        temp = temp->next;
    }
    cout << endl;
}
ListNode *reverseList(ListNode *head)
{

    ListNode *prev = NULL;
    ListNode *NEXT = NULL;
    ListNode *current = head;

    while (NEXT != NULL || current != NULL)
    {
        NEXT = current->next;
        current->next = prev;
        prev = current;
        current = NEXT;
    }
    return prev;
}
void reorderList(ListNode* head);
int main ()
{    
    ListNode* head = new ListNode (1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

reorderList(head);


}
void reorderList(ListNode* head) {
    ListNode* temp = head;
    ListNode* fast = head;
    ListNode* slow = head;

    // Start fast one node ahead if you want the left middle in case of an even number of nodes
    if (fast) fast = fast->next;

    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode* secPart = slow->next;
    slow->next=NULL;
    secPart = reverseList(secPart);
    // display(head);

    ListNode *c = new ListNode (100);
    ListNode* a = head;
    ListNode* b = secPart;
    ListNode* a_temp = a;
    ListNode* b_temp = b;
    ListNode* c_temp = c;

    
while (a_temp != NULL && b_temp != NULL) {
    ListNode* a_next = a_temp->next;
    ListNode* b_next = b_temp->next;

    a_temp->next = b_temp;
    if (a_next == NULL) break; // If it's the end of the first part, stop.
    b_temp->next = a_next;

    a_temp = a_next;
    b_temp = b_next;
}
    c_temp->next = NULL;
    
    display(a);
        
}