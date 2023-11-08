#include <iostream>
using namespace std;


/*
    1 -> 2 ->3 ->4- > 5

    Some how I will reverse 
        
        
    1->     2 <- 3 <-4
            |
            v
           NUll

    2) head -> next ->next = head
    3) head ->NULL
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
ListNode *reverseList(ListNode *);

int main()
{
    ListNode* head = new ListNode (1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    display(head);
    head = reverseList(head);
    display(head);
}


ListNode *reverseList(ListNode *head)
{
    if (head == NULL ||  head->next == NULL)
    {
        return head;
    }

    ListNode * newNode = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newNode;

    
}