#include<iostream>
#include<climits>
#include<queue>
using namespace std;

class Node {
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val): val(val),left(NULL),right(NULL){} 
};
int level(Node *root)
{
    if(!root)
    {
        return 0;
    }
    return 1 + max(level(root->left),level(root->right)); 
}
void nthLevel(Node *root,int current, int level)
{
    if(!root)
    {
        return;
    }
    if(current==level)
    {
        cout<<root->val<<"\t";
    }
    nthLevel(root->left,current+1,level);
    nthLevel(root->right,current+1,level);

}
void levelOrder(Node * root)
{
    int n = level(root);
    for(int i = 0;i<=n;i++)
    {
        nthLevel(root,1,i);
        cout<<endl;
    }
}
Node *construct(int array[], int n)
{

    queue<Node *> q;
    Node *root = new Node(array[0]);
    q.push(root);

    int i = 1;
    int j = 2;
    while (q.size() && i < n)
    {
        Node *temp = q.front();
        q.pop();
        Node *l = temp->left;
        Node *r = temp->left;

        if (array[i] != INT_MIN)
            l = new Node(array[i]);
        else
            l = NULL;
        if (j != n && array[j] != INT_MIN)
            r = new Node(array[j]);
        else
            r = NULL;
        temp->left = l;
        temp->right = r;

        if (l)
            q.push(l);
        if (r)
            q.push(r);

        i +=2;
        j +=2;
    }
    return root;
}

void leftBoundary (Node* root)
{
    if(!root)
        return;
    if( !(root->left) && !(root->right))
    return;

    cout<<root->val<<"\t";
    leftBoundary(root->left);
    if(!(root->left))
        leftBoundary(root->right);
}

void rightBoundary (Node* root)
{
    if(!root)
        return;
    if( !(root->right) && !(root->left))
    return;

    rightBoundary(root->right);
    if(!(root->right))
        rightBoundary(root->left);
    cout<<root->val<<"\t";

}
void botomBoundary(Node *root)
{
    if(!root)
    {
        return;
    }
    if(!(root->left) && !(root->right))
    cout<<root->val<<"\t";

    botomBoundary(root->left);
    botomBoundary(root->right);
}

void boundary(Node * root)
{
    leftBoundary(root);
    cout<<endl;
    botomBoundary(root);
    cout<<endl;
    rightBoundary(root);

}




int main ()
{
int array [] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN}; 
int n = sizeof(array)/sizeof(array[0]);
Node * root = construct(array,n);

boundary(root);
// levelOrder(root);
}