#include<iostream>
using namespace std;
class Node {
    public:

    Node *left;
    Node * right;
    int val;
    Node(int val):val(val),left(NULL),right(NULL){};
};
int sizeOFtree(Node* );
int main ()
{
    Node * a = new Node(5);
    Node * b = new Node(4);
    Node * c = new Node(3);
    Node * d = new Node(6);
    Node * e = new Node(2);
    Node * f = new Node(1);

     
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;

    cout<<sizeOFtree(a);
}
int sizeOFtree(Node*root)
// Root Value + Right Sub Tree + Left Tree
{

    if(!root)
    {
        return 0;
    }
    
    return 1+ sizeOFtree(root->left) + sizeOFtree(root->right);
}
