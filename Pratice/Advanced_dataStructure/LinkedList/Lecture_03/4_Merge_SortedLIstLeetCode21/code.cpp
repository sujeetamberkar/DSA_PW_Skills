/*

1 ) mergeTwoLists merges two sorted lists by comparing nodes and appending smaller one.
2 ) mergeKLists repeatedly merges pairs of lists from lists vector.
3) Reduces lists size by one each iteration by merging last two lists.
4 ) Ends when a single, fully merged list remains in lists


*/
#include<iostream>
#include<climits>
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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
int main ()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(4);


    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);

    ListNode* answer = mergeTwoLists(head,head2);
    display(answer);
return 0;
}
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
    ListNode* tail =new ListNode (INT_MIN);
    ListNode * head = tail;
    // 1) Use a Dummy pointer
    // 2) if (list1.val or list2.val)


    while (list1!=NULL && list2!=NULL) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    if (list1!=NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return head->next;    
}