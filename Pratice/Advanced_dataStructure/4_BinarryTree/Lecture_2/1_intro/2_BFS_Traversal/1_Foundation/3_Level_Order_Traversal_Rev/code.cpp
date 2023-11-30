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
    displayNthLevel(root->right,level+1,index);
    displayNthLevel(root->left,level+1,index);

    if(level==index)
    {
        cout<<root->val<<"\t";
        return;
    }

}
int levlOrder(Node *root)
{
    if(!root)
    {
        return 1;
    }
    return 1+ max(levlOrder(root->left),levlOrder(root->left));
}

void levelOrderTraversal(Node* root)
{
    int height =levlOrder(root);
    for(int i =0;i<height;i++)
    {
        displayNthLevel(root,0,i);
        cout<<endl;
    }

}


int main ()
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

    int height =levlOrder(a);
    levelOrderTraversal(a);

    

    return 0;
}