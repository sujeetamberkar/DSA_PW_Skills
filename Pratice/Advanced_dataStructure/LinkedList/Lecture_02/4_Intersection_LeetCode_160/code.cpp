#include <iostream>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(NULL) {}
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);

int main()
{
    ListNode *a1 = new ListNode(4);
    ListNode *a2 = new ListNode(1);

    ListNode *b1 = new ListNode(5);
    ListNode *b2 = new ListNode(6);
    ListNode *b3 = new ListNode(1);

    ListNode *c1 = new ListNode(8);
    ListNode *c2 = new ListNode(4);
    ListNode *c3 = new ListNode(5);

    a1->next = a2;
    a2->next = c1;
    c1->next = c2;
    c2->next = c3;

    b1->next = b2;
    b2->next = b3;
    b3->next = c1;

    ListNode *intersection = getIntersectionNode(a1, b1);

    if (intersection != nullptr)
    {
        cout << "The intersection node's value is: " << intersection->val << endl;
    }
    else
    {
        cout << "The lists do not intersect." << endl;
    }

    delete a1;
    delete a2;
    delete b1;
    delete b2;
    delete b3;
    delete c1;
    delete c2;
    delete c3;

    return 0;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    // Reach the same length 

    int sizeA = 0;
    int sizeB = 0;
    ListNode *temp_A = headA;
    ListNode *temp_B = headB;
    while (temp_A != NULL)
    {
        temp_A = temp_A->next;
        sizeA++;
    }
    while (temp_B != NULL)
    {
        temp_B = temp_B->next;
        sizeB++;
    }
    temp_A = headA;
    temp_B = headB;

    if (sizeA > sizeB)
    {
        for (int i = 1; i <= sizeA - sizeB; i++)
        {
            temp_A = temp_A->next;
        }
    }
    else
    {
        for (int i = 1; i <= sizeB - sizeA; i++)
        {
            temp_B = temp_B->next;
        }
    }

    while (temp_A != temp_B)
    {
        temp_A = temp_A->next;
        temp_B = temp_B->next;
    }
    return temp_A;
}