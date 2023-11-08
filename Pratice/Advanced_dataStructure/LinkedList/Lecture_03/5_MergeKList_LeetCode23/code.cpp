#include <iostream>
#include <climits>
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
ListNode* mergeKLists(vector<ListNode*>& lists);

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(4);

    ListNode *head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);

    ListNode *head3 = new ListNode(10);
    head3->next = new ListNode(20);
    head3->next->next = new ListNode(99);


    vector <ListNode *> list_Of_Linkedlist;
    list_Of_Linkedlist.push_back(head);
    list_Of_Linkedlist.push_back(head2);
    list_Of_Linkedlist.push_back(head3);
    ListNode* answer = mergeKLists(list_Of_Linkedlist);
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
ListNode* mergeKLists(vector<ListNode*>& lists) 
{
    if (lists.empty()) {  
        return NULL;
    }
    while (lists.size()>1)
    {
        int length = lists.size(); 
        ListNode * a = lists[length-1];
        lists.pop_back();

        length = lists.size(); 
        ListNode * b = lists[length-1];
        lists.pop_back();
        ListNode *c = mergeTwoLists(a,b);
        lists.push_back(c);

    }
    

        return lists[0];
        
    }
