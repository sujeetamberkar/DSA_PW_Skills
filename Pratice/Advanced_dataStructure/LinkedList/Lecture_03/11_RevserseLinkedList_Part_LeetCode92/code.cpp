#include <iostream>
using namespace std;
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

ListNode *reverseBetween(ListNode *head, int left, int right);
int main()
{
    ListNode* head = new ListNode (10);
    head->next = new ListNode(20);
    head->next->next = new ListNode(30);
    head->next->next->next = new ListNode(40);
    head->next->next->next->next = new ListNode(50);
    int left = 2;
    int right = 4;;
    head = reverseBetween(head,left,right);
    display(head);

}
ListNode *reverseBetween(ListNode *head, int left, int right)
{
    ListNode *temp = head;
    for(int i = 1 ; i <left-1;i++)
    {
        temp=temp->next;
    }
    ListNode *FirstEND =temp;
    ListNode *mid = temp->next;
    ListNode *mid_temp = mid;
    temp->next = NULL;

    for(int i = 1; i <=right-left;i++)
    {
        mid_temp=mid_temp->next;
    }
    ListNode *MidEND =mid_temp;

    ListNode *ThirdPart = mid_temp->next;
    ListNode *ThirdPart_temp = ThirdPart;


    mid_temp->next = NULL;

    temp = head;
    while (temp->next)
    {
        temp=temp->next;
    }
    mid = reverseList(mid);
    temp->next=mid;
    temp= head;
    while (temp->next)
    {
        temp=temp->next;
    }
    temp->next = ThirdPart;
    return head;
    
}

/*

if (!head) return nullptr;

    // Dummy nodes for the beginning of each sublist
    ListNode* dummy_first = new ListNode(0);
    ListNode* dummy_mid = new ListNode(0);
    ListNode* dummy_third = new ListNode(0);

    // Connect dummy_first to the head of the list
    dummy_first->next = head;
    ListNode* pre = dummy_first;

    // Traverse to the node just before the left position
    for (int i = 1; i < left; ++i) {
        pre = pre->next;
    }

    // pre is now the last node before the sublist to be reversed
    ListNode* firstEnd = pre;
    dummy_mid->next = pre->next; // This will be the start of the sublist to reverse

    // Start reversing the nodes
    ListNode* current = dummy_mid->next;
    ListNode* prev = dummy_third; // Prev will work as the reversed sublist's dummy head
    ListNode* next;

    for (int i = left; i <= right; i++) {
        next = current->next;
        current->next = prev->next;
        prev->next = current;
        current = next;
    }

    // Connect the first part with the reversed middle part
    firstEnd->next = prev->next;

    // Find the last node of the reversed middle part
    ListNode* lastReversed = firstEnd->next;
    while (lastReversed->next != nullptr) {
        lastReversed = lastReversed->next;
    }

    // Connect the last node of the reversed middle part with the third part
    lastReversed->next = current;
    dummy_third->next = current; // The remaining part of the list after 'right'

    // // Display the three parts
    // cout << "First Part: ";
    // display(dummy_first->next);

    // cout << "Reversed Middle Part: ";
    // display(firstEnd->next);

    // cout << "Third Part: ";
    // display(dummy_third->next);

    // Cleanup dummy nodes
    ListNode* newHead = dummy_first->next;
    delete dummy_first;
    delete dummy_mid;
    delete dummy_third;

    return newHead;
    */
