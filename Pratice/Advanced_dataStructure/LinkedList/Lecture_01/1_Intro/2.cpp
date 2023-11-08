#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next; // We want by default value to be NULL
    Node(int val) : val(val), next(NULL) {}
};
int main()
{
    Node a(10);

    Node b(20);

    Node c(30);

    Node d(40);

    // Forming

    a.next = &b;
    b.next = &c;
    c.next = &d;

    // cout<<a.next->val<<endl;

    cout << (*a.next).val << endl;
    cout << (*(*a.next).next).val << endl;
    cout << (*(*(*a.next).next).next).val << endl;
    // cout << (*((*a.next).next)).val << endl;

    cout << "Its arrow time" << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
    cout << a.next->next->next->val << endl;

    Node *temp = &a;
    while (temp->next != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    } 



    cout << endl;

    Node temporary = a;
    while (true)
    {
        cout << temporary.val << " ";
        if (temporary.next==NULL)
        {
            break;
        }
        temporary = *(temporary.next);

    }
cout <<endl;
    Node *temp2 = &a;
while (temp2 != NULL)
{
    cout << temp2->val << " ";
    temp2 = temp2->next;
}

}