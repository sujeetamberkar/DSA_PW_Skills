#include<iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL){}
};
ListNode* middleNode(ListNode* );
void display(ListNode *);
ListNode* middleNodeUsingSlowFastPointer(ListNode *);
ListNode* middleNodeUsingSlowFastPointerLeftMiddle(ListNode *);


int main ()
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next  = new ListNode(5);
    // head->next->next->next->next->next  = new ListNode(6);


    display(head);
    // ListNode * middle_element=middleNode(head);
    // ListNode * middle_element=middleNodeUsingSlowFastPointer(head);
    ListNode * middle_element=middleNodeUsingSlowFastPointerLeftMiddle(head);


    cout<<"Middle Element"<<endl;
    cout<<"Value "<<middle_element->val<<endl;
    cout<<"Next "<<middle_element->next<<endl;

}
ListNode* middleNode(ListNode* head)
{
    ListNode* temp = head;
    int size = 0;
    while (temp!=NULL)
    {
        temp=temp->next;
        size++;
    }
    int mid = size/2;

   
        mid++;

    temp = head;
    for(int i = 0; i <mid-1;i++)
    {
        temp=temp->next;
    }
    return temp;
    
}
void display(ListNode *node) {
    ListNode* temp = node;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
ListNode* middleNodeUsingSlowFastPointer(ListNode *head)
{
    ListNode *slowPointer=head;
    ListNode *FastPointer=head;

    // First condition is check if thats not true then we
    // Check logic statement of while
    // If one condition is satisfied  only then we will check the 2nd condition


    // So here the first condition is false, so break ERROR will never be checked
    while (FastPointer!=NULL && FastPointer->next !=NULL )
    {
        slowPointer=slowPointer->next;
        FastPointer=FastPointer->next->next;
    }
    return slowPointer;
    

}
ListNode* middleNodeUsingSlowFastPointerLeftMiddle(ListNode *head)
{
    ListNode *slowPointer=head;
    ListNode *FastPointer=head;

    // First condition is check if thats not true then we
    // Check logic statement of while
    // If one condition is satisfied  only then we will check the 2nd condition


    // So here the first condition is false, so break ERROR will never be checked
while (FastPointer != NULL && FastPointer->next != NULL && FastPointer->next->next != NULL) {
    slowPointer = slowPointer->next;
    FastPointer = FastPointer->next->next;
}
    return slowPointer;
    

}