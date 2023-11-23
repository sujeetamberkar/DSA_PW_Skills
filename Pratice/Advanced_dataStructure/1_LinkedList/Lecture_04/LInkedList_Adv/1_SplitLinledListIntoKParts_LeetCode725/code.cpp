#include<iostream>
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

/*
Under Equal division
    1->2->3->4->5->6->7->8->9->10->11->NULL

    when k = 3;

    length of each parts can be 
        1) n / k
        2) (n / k) + 1
        3) 0

    How many ( n / k ) + 1 ?
        4) Reminder = ( n % k ) ?   
*/
vector<ListNode*> splitListToParts(ListNode* , int );

int main ()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(8);
    head->next->next->next->next->next->next->next->next = new ListNode(9);
    head->next->next->next->next->next->next->next->next->next = new ListNode(10);
    head->next ->next->next->next->next->next->next->next->next->next= new ListNode(11);

    int k = 3;
    vector<ListNode*> answer = splitListToParts(head,k);
    for (ListNode* element : answer)
    {
        display(element);
    }
    // int n = 11;

return 0;
}
vector<ListNode*> splitListToParts(ListNode* head, int k) 
{
    vector < ListNode * > answer (k,nullptr);
    int vector_counter =0;
    ListNode *temp = head;
    int size = 0;
    while (temp)
    {
        temp = temp->next;
        size++;
    }
    temp = head;
    int loopIndex = size/k;
    int high_counter = size %k;

    while (temp)
    {
        ListNode *c = new ListNode(-1);
        ListNode *c_temp = c;
        int s = loopIndex;
        if (high_counter > 0)
        {
            s++;
            high_counter--;
        }

        for (int i = 1; i <=s;i++)
        {
            c_temp ->next = temp;
            temp = temp->next;
            c_temp = c_temp->next;
        }
        c_temp->next = NULL;  // V IMP
        answer[vector_counter] = c->next;
        vector_counter++;
    }
    return answer;
}