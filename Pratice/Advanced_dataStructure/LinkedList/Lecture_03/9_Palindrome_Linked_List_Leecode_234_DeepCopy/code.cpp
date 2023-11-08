#include <iostream>
using namespace std;
/*
    1) Create a deep Coppy 
    2) Reverse it 
    3) Compare 
    Time Complexixty : O (N)
    Space Complexity : O (N)
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
ListNode *reverseList(ListNode *head);
bool isPalindrome(ListNode* head);
int main ()
{
    ListNode* head = new ListNode (1);
    head->next = new ListNode (2);
    head->next->next = new ListNode (3);
    head->next->next->next = new ListNode (2);
    head->next->next->next = new ListNode (1);
    cout<< isPalindrome(head);
    
}

    bool isPalindrome(ListNode* head) {
    ListNode *dummy = new ListNode (-1);
    ListNode *dummy_temp = dummy;
    ListNode *temp = head;
    // DEEP COPY of head
    while (temp)
    {
        ListNode* node = new ListNode(temp->val);
        dummy_temp->next=node;
        dummy_temp=dummy_temp->next;
        temp=temp->next;
    }
    dummy_temp = dummy->next;
    temp=head;
    temp=reverseList(temp);

    while (dummy_temp || temp)
    {
        if (dummy_temp->val!=temp->val)
        {
            return false;
        }
        dummy_temp=dummy_temp->next;
        temp = temp->next;
    }

    return true;

    }
ListNode *reverseList(ListNode *head)
{

ListNode *prev = NULL;
ListNode *NEXT=NULL;
ListNode *current= head;

while (NEXT!=NULL || current != NULL)
{
   NEXT = current->next;
   current->next=prev;
   prev=current;
   current=NEXT;
}
return prev;


}