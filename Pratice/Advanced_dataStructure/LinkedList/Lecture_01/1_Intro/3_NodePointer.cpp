#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};

void displayLinkedList(Node *);
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    Node *temp = a;
    displayLinkedList(a);


    // while (temp != NULL)
    // {
    //     cout << temp->val << " ";
    //     temp = temp->next;
    // }

    // cout << endl;
    // cout << a->val << endl;
    // cout << a->next->val << endl;
    // cout << a->next->next->val << endl;
    // cout << a->next->next->next->val << endl;

}
void displayLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
