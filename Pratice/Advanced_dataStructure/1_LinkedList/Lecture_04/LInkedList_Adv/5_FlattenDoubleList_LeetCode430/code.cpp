#include<iostream>
using namespace std;
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
    Node (int val) : val (val), prev(NULL),next(NULL),child(NULL) {}
};
Node* flatten(Node* head);
void display(Node * head)
{
    Node *temp =head;
    while (temp)
    {
        cout<<temp->val<<"\t";
        temp=temp->next;
    }
    cout<<endl;
    
}

int main ()
{
    Node * a = new Node (1);
    Node * b = new Node (2);
    Node * c = new Node (3);
    Node * d = new Node (4);
    Node * e = new Node (5);
    Node * f = new Node (6);
    Node * g = new Node (7);
    Node * h = new Node (8);
    Node * i = new Node (9);
    Node * j = new Node (10);
    Node * k = new Node (11);
    Node * l = new Node (12);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;

    f->prev=e;
    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;
    
    c->child=g;

    g->next=h;
    h->next=i;
    i->next=j;
    j->prev=i;
    i->prev=h;
    h->prev=g;


    h->child=k;
    k->next=l;
    l->prev=k;

    Node* answer = flatten(a);
    display(answer);



}

Node* flatten(Node* head)
{

      Node *temp = head;
    while (temp)
    {
        Node * a = temp->next;
        if (temp->child)
        {
            Node *c = temp->child;
            temp->child=NULL;       // Very Important to avoid infinite loop
            c = flatten(c);
            temp->next = c;
            c->prev = temp;
            while (c->next)
            {
                c=c->next;
            }// Reach the last element in the child
            c->next = a;
            if (a !=NULL) //NULL ka previous nahi hota 
            a->prev = c; // ERROR , NULL -> prev not possible
        }
        temp=a;
    }
    return head;    

}
