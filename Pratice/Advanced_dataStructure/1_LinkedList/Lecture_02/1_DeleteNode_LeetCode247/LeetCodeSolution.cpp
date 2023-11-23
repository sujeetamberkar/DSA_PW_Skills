#include<iostream>
using namespace std;
class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL){}
};

void deleteNode(ListNode* node) {
        ListNode* temp = node;
        temp->val=temp->next->val;
        temp->next = temp->next->next;
}

 void deleteNodeUsingLoop(ListNode* node) {
        ListNode* temp = node;
        while(temp->next!=NULL)
        {
            temp->val=temp->next->val;
            temp=temp->next;

        }
        temp = node;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=NULL;
        
    }
void display (ListNode * node)
{
    ListNode*temp = node;
    while (temp!=NULL)
    {
        cout <<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

int main ()
{
    ListNode* a = new ListNode (4);
    ListNode* b = new ListNode (5);
    ListNode* c = new ListNode (1);
    ListNode* d = new ListNode (9);
    a->next=b;
    b->next=c;
    c->next=d;

    display(a);

    deleteNodeUsingLoop(a);
    display(a);





}