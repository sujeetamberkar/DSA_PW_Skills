#include<iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL){}
};
void display(ListNode *);
ListNode* removeNthFromEnd(ListNode* , int );
ListNode* removeNthFromEnd_Window_Pointer(ListNode*, int ) ;

int main ()
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next  = new ListNode(5);
    int n =2;
    display(head);
    removeNthFromEnd(head,n);
    display(head);



}
void display(ListNode *node) {
    ListNode* temp = node;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while(temp!=NULL)
        {
            temp=temp->next;
            size++;
        }
        if (n==size)
        {
            head=head->next;

        }
        else {
        temp = head;
        for (int i = 1; i < size-n+1-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;

        }



        return head;
        
    }


    ListNode* removeNthFromEnd_Window_Pointer(ListNode* head, int n) {

        ListNode * temp = head;
        ListNode * slow = head;
        ListNode * fast = head;

        for (int i = 1; i <= n+1;i++)
        {
            if (fast==NULL)
            {
                return head->next;
            }
            fast=fast->next;
        }

        while (fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;

        return head;
    }