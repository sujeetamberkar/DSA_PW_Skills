#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};

int sizeOfLinkedList (Node *);
void display_usingRecursion(Node*);
void addNode(Node*,Node*); // Time Comeplexity = O (N) (Need to calculat Tail)
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    
    // cout << sizeOfLinkedList(a);
    // display_usingRecursion(a);


    // We do not acess to the tail
    // We only know head
    Node *t = new Node(60);
    addNode(a,t);
    display_usingRecursion(a);



    
    
}
int sizeOfLinkedList (Node *head)
{
    int size = 0;
    Node *temp = head;

    while (temp!=NULL)
    {
        size++;
        temp=temp->next;
    }
    return size;
    

}
void display_usingRecursion(Node* head)
{
    if (head == NULL)
    {
        return ;
    }
    cout<<head->val<<" ";
    return display_usingRecursion(head->next);
}
void addNode(Node* head,Node* new_node)
{
    Node *temp = head;
    while (temp->next!=NULL)
    {
        temp = temp -> next;
    }
    temp ->next = new_node;
    
}