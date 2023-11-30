#include <iostream>
#include <climits>
#include <queue>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) : val(val), left(NULL), right(NULL) {}
};


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
void display(Node* root)
{
    if(!root)
    {
        return;
    }
    cout<<root->val<<"\t";
    display(root->left);
    display(root->right);
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, INT_MIN, 6, INT_MIN, INT_MIN, 7, 8, 9, INT_MIN};
    int n = sizeof(array) / sizeof(array[0]);
    Node *root = construct(array, n);
    display(root);

    return 0;
}