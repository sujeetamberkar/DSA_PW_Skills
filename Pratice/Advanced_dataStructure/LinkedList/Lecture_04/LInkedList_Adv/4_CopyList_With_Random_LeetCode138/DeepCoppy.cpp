#include <iostream>
#include<vector>
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
ListNode *DeepCoppy(ListNode * head);
int main ()
{
    ListNode * head = new ListNode (1);
    head->next = new ListNode(2);
    head->next->next = new ListNode (3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next->next->next->next = new ListNode(9);
    head->next->next->next->next->next->next->next->next->next = new ListNode(10);


    ListNode *coppy = DeepCoppy(head);

}
ListNode *DeepCoppy(ListNode * head)
{
    ListNode* temp = head;
    ListNode* dummy = new ListNode (-1);
    ListNode* temp_dummy = dummy; 

    // while (temp && temp->next) 
    // {
    //     ListNode*node1 = new ListNode(temp->val);
    //     ListNode*node2 = new ListNode(temp->next->val);

    //     temp_dummy->next=node1;
    //     node1->next=node2;
    //     temp_dummy=temp_dummy->next->next;
    //     temp=temp->next;
    //     temp=temp->next;
    // }

    while (temp)
    {
        ListNode* node = new ListNode (temp->val);
        temp_dummy->next = node;
        temp_dummy=temp_dummy->next;
        temp=temp->next;
    }
    
    display(dummy->next);

    return dummy->next;
    
}

