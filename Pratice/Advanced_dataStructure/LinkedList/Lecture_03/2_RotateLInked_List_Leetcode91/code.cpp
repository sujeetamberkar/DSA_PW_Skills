#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
ListNode *rotateRight(ListNode *head, int k);

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2;
    head = rotateRight(head, k);
    display(head);
}
ListNode *rotateRight(ListNode *head, int k)
{
    if (!head || k == 0)
        return head;

    int size = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    k = k % size;
    if (k == 0)
        return head;
    temp = head;
    for (int i = 1; i <= size - k - 1; i++)
    {
        temp = temp->next;
    }
    ListNode *piviot = temp;
    ListNode *newHead = temp->next;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    piviot->next = NULL;

    return newHead;

    return newHead;
}