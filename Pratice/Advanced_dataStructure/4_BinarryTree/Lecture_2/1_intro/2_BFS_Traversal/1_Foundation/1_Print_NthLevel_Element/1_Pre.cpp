#include<iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) : val(val), left(NULL), right(NULL) {}
};

void displayNthLevel(Node* root, int level,int index)
{
    if(!root)
    {
        return;
    }
    if(level==index)
    {
        cout<<root->val<<"\t";
    }
    displayNthLevel(root->left,level+1,index);
    displayNthLevel(root->right,level+1,index);
}

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(7);
    Node *c = new Node(9);
    Node *d = new Node(2);
    Node *e = new Node(6);
    Node *f = new Node(9);
    Node *g = new Node(5);
    Node *h = new Node(11);
    Node *i = new Node(5);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    e->left=g;
    e->right=h;
    f->left=i;

    displayNthLevel(a,0,0);
    cout<<endl;
    displayNthLevel(a,0,1);
    cout<<endl;
    displayNthLevel(a,0,2);
    cout<<endl;
    displayNthLevel(a,0,3);


}

