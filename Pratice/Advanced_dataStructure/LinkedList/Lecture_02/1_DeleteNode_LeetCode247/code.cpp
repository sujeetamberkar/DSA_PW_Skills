#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL){}
};

Node* deleteNode (Node *head, Node * node)
{
    if (head == node)
    {
        head = head->next;
        return head;
    }

    Node *tem= head;
    while (tem->next!=node)
    {
        tem=tem->next;
    }
    tem->next = tem->next->next;
    return head;
        
}

void display (Node *head)
{
    Node * temp = head;
    while (temp!=NULL)
    {
        cout << temp->val<<" ";
        temp = temp->next;
    }
    cout <<endl;
}

int main (){
    Node * a = new Node(4);
    Node * b = new Node(5);
    Node * c = new Node(1);
    Node * d = new Node(9);
    a->next=b;
    b->next=c;
    c->next=d;
    Node* head = a;
    
    display(head);
    head= deleteNode(a,c);
    display(head);

    return 0;
}