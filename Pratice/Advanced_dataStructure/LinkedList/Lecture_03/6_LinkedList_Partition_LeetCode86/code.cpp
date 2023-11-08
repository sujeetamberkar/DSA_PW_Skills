#include<iostream>
using namespace std;
/*

    1) Create two Dummy Pointers (lOW and HIGH)
    2)  if temp-> val < x:
            low->next = temp;
        else :
            high->next = temp;
    3) SET high->next = NULL;
    4) Join the low to high;
    
    */

class ListNode {
    public:
    int val;
    ListNode* next;
    ListNode (int val) : val(val),next(NULL){}
};
void display(ListNode* node)
{
    ListNode *temp = node;
    while (temp!=NULL)
    {
        cout << temp->val<<"\t";
        temp=temp->next;
    }
    cout<<endl;
    
}
ListNode *partition (ListNode *, int );

int main ()
{

    ListNode *head = new ListNode(1);
    head->next = new ListNode(4);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(2);
    int x=3;
    ListNode *answer = partition(head,x);
    display(answer);
    return 0;  
}
ListNode *partition (ListNode* head, int x)
{

    ListNode* low = new ListNode(-1);
    ListNode* high = new ListNode(-1);

    ListNode* tempLo = low;
    ListNode* tempHi = high;
    ListNode* temp = head;


    

    while (temp!=NULL)
    {
        if(temp->val <x)
        {
            tempLo->next=temp;
            tempLo=tempLo->next;
        }
        else {
            tempHi->next=temp;
            tempHi=tempHi->next;
        }
        temp=temp->next;
    }
    tempLo->next = (high->next);
    tempHi->next = NULL;
    return low->next;
}