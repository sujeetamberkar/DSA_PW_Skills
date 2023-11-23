#include <iostream>
using namespace std;
/*
    1 -> 2 -> 3 -> 3 -> 2 -> 1


    Left Middle         Right Middle
    1 -> 2 -> (3)       (3) -> 2 -> 1
    Revserse it
    1 <- 2 <- (3)       (3) -> 2 -> 1
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
bool isPalindrome(ListNode *head);
ListNode *reverseList(ListNode *head);

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next = new ListNode(1);

    cout << isPalindrome(head);
}
bool isPalindrome(ListNode *head)
{

        if (head == NULL || head->next == NULL) {
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* firstHalf = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* secondHalf = reverseList(slow->next);
        slow->next = NULL;


        while (firstHalf != NULL && secondHalf != NULL) {
            if (firstHalf->val != secondHalf->val) {
                return false; 
            }
            firstHalf = firstHalf->next; 
            secondHalf = secondHalf->next; 
        }

        return true;    
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