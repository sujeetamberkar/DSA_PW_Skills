#include <iostream>
#include<vector>
using namespace std;

/*
    1) Divide the problem such a way that you can spilit the list
    2) Decide How to revser it  temp = reverseBetween(temp,2,2+jump);
    3) Decide when to reverse it, (Not necessary that gap is the only factor)
    4) IF LAST GROUP is improper, find the length of that improper group
*/

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
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
ListNode *reverseBetween(ListNode *head, int left, int right)
{
    ListNode *temp = head;
    for(int i = 1 ; i <left-1;i++)
    {
        temp=temp->next;
    }
    ListNode *FirstEND =temp;
    ListNode *mid = temp->next;
    ListNode *mid_temp = mid;
    temp->next = NULL;

    for(int i = 1; i <=right-left;i++)
    {
        mid_temp=mid_temp->next;
    }
    ListNode *MidEND =mid_temp;

    ListNode *ThirdPart = mid_temp->next;
    ListNode *ThirdPart_temp = ThirdPart;


    mid_temp->next = NULL;

    temp = head;
    while (temp->next)
    {
        temp=temp->next;
    }
    mid = reverseList(mid);
    temp->next=mid;
    temp= head;
    while (temp->next)
    {
        temp=temp->next;
    }
    temp->next = ThirdPart;
    return head;
    
}
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

ListNode *ReverseLengthGroups (ListNode* head);

int main ()
{
    ListNode * head = new ListNode (5);
    head->next = new ListNode(2);
    head->next->next = new ListNode (6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(9);
    head->next->next->next->next->next = new ListNode(1);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(3);
    head->next->next->next->next->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next->next->next->next->next = new ListNode(4);

    head = ReverseLengthGroups(head);
    display(head);
}
ListNode *ReverseLengthGroups (ListNode* head)
{
        ListNode* temp = head;
int jump = 1; 
// int stepsTaken = 0; xw


while (temp && temp->next) {
    // cout << temp->val << " ";
    int remLen = 0;
    ListNode* t =temp->next;
    for(int i = 1; i <= jump+1 && t!=NULL;i++)
    {
        t = t->next;
        remLen++;
    }
    if (remLen < jump +1)
    {
        jump = remLen-1;
    }

    if (jump % 2 != 0)
    {
        // Gap is not always the gap
            temp = reverseBetween(temp,2,2+jump);

    }
    jump++; 
    for (int i = 1; temp != NULL && i <= jump && temp; i++) {
        temp = temp->next;
    }

}

return head;
}


