#include <iostream>
#include <climits>
#include <queue>
#include <stack>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(NULL), right(NULL) {}
};
void Pre_display(TreeNode *root)
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

TreeNode *construct(int array[], int n)
{

    queue<TreeNode *> q;
    TreeNode *root = new TreeNode(array[0]);
    q.push(root);

    int i = 1;
    int j = 2;
    while (q.size() && i < n)
    {
        TreeNode *temp = q.front();
        q.pop();
        TreeNode *l = temp->left;
        TreeNode *r = temp->left;

        if (array[i] != INT_MIN)
            l = new TreeNode(array[i]);
        else
            l = NULL;
        if (j != n && array[j] != INT_MIN)
            r = new TreeNode(array[j]);
        else
            r = NULL;
        temp->left = l;
        temp->right = r;

        if (l)
            q.push(l);
        if (r)
            q.push(r);

        i += 2;
        j += 2;
    }
    return root;
}
void flatten(TreeNode *root)
{
    if (root == NULL)
        return;
    TreeNode *l = root->left;
    TreeNode *r = root->right;
    root->left = NULL;
    root->right = NULL;
    flatten(l);
    flatten(r);
    // Root Left Right
    root->right = l;
    TreeNode *temp = root;
    while (temp->right != NULL)
        temp = temp->right;
    temp->right = r;
}
void rightDisplay(TreeNode *root)
{
    while (root)
    {
        cout << root->val << "\t";
        root = root->right;
    }
}
int main()
{
    int array[] = {1, 2, 5, 3, 4, INT_MIN, 6};
    int n = sizeof(array) / sizeof(array[0]);
    TreeNode *root = construct(array, n);
    Pre_display(root);
    cout << endl;
    flatten(root);
    rightDisplay(root);
}
