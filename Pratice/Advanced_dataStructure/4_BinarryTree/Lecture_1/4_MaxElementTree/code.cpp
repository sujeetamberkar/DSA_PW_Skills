#include<iostream>
#include<climits>
using namespace std;
class Node
{
    public:
    int value;
    Node * left;
    Node * right;

    Node(int value): value(value),left(NULL),right(NULL){}

};

int maxElement_Tree(Node * );
int main ()
{

    Node * a = new Node(5);
    Node * b = new Node(4);
    Node * c = new Node(3);
    Node * d = new Node(6);
    Node * e = new Node(11);
    Node * f = new Node(1);

     
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;

    cout<<maxElement_Tree(a);
}
int maxElement_Tree(Node * root)
{
    if(!root)
    {
        return INT_MIN;
    }


    return (max(root->value,max(maxElement_Tree(root->left),maxElement_Tree(root->right))));
}
