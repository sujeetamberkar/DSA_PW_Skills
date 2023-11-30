#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) : val(val), left(NULL), right(NULL) {}
};
void Pre_display(Node *root)
{
    // ROOT, LEFT, Right
    if (!root)
    {
        return;
    }
    cout << root->val << "\t";
    Pre_display(root->left);
    Pre_display(root->right);
}
void Post_display(Node *root)
{
    // Left Right Root
    if (!root)
    {
        return;
    }
    Post_display(root->left);// Left
    Post_display(root->right); // Right
    cout << root->val << "\t"; // Root
}
void In_display(Node *root)
{
    // Left Root RIght
    if (!root)
    {
        return;
    }
    In_display(root->left); // Left 
    cout << root->val << "\t"; // Root
    In_display(root->right); // Right
}

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    Pre_display(a);
    cout<<endl;
    In_display(a);
    cout<<endl;
    Post_display(a);
    cout<<endl;

}