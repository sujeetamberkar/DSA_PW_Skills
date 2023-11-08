#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) : val (val), prev(NULL), next(NULL) {}
};

void display(Node *head)
{
    Node* temp = head;
    while (temp)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout <<endl;
    
}
void displayReversed(Node *tail)
{
    Node* temp = tail;
    while (temp)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout <<endl;
}

int main ()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next = NULL;
    
    a->prev=NULL;
    b->prev=a;
    c->prev=b;
    d->prev=c;
    e->prev=d;

    display(a);
    displayReversed(e);

}