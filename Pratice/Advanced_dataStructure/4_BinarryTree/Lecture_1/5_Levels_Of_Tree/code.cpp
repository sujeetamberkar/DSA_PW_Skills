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
void displayTree(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->value<<"\t";
    displayTree(root->left);
    displayTree(root->right);
}

int Level_Tree(Node* root);
int main ()
{

    Node * a = new Node(1);
    Node * b = new Node(4);
    Node * c = new Node(7);
    Node * d = new Node(2);
    Node * e = new Node(5);
    Node * f = new Node(8);
    Node * g = new Node(9);
    Node * h = new Node(10);
    Node * i = new Node(11);     
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    d->right=g;
    g->left=h;
    g->right=i;

    displayTree(a);
    cout<<endl;
    cout<<Level_Tree(a);

}

int Level_Tree(Node* root)
{
    if(!root)
    {
        return 0;
    }

    int left = Level_Tree(root->left);
    int right = Level_Tree(root->right);
    return 1 + max(left,right);
}
int getheight(Node *root){
        if(!root) {
            return 0; // height of a null node is 0
        }
        return 1 + max(getheight(root->left), getheight(root->right));
    }