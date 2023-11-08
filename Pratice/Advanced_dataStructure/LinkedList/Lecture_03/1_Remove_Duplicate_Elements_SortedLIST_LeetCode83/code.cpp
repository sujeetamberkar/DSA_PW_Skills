#include<iostream>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
void display (ListNode *head)
{
    ListNode * temp = head;
    while (temp!=NULL)
    {
        cout << temp->val<<" ";
        temp = temp->next;
    }
    cout <<endl;
}
ListNode* deleteDuplicates(ListNode* head);
int main()
{
    ListNode *head1 = new ListNode(1);
    head1->next = new ListNode(1);
    head1->next->next = new ListNode(2);
    head1->next->next->next = new ListNode(3);
    head1->next->next->next->next= new ListNode(3);


    display(head1);

    head1=deleteDuplicates(head1);    
        display(head1);


}
ListNode* deleteDuplicates(ListNode* head) {
if (head == nullptr) return nullptr; 

    ListNode* current = head;
    while (current != nullptr) {
        ListNode* nextUnique = current->next;
        while (nextUnique != nullptr && nextUnique->val == current->val) {
            nextUnique = nextUnique->next;
        }
        current->next = nextUnique;
        current = nextUnique;
    }

    return head;
}