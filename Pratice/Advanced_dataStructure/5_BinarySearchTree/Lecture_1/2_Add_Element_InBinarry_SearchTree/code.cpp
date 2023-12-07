#include <iostream>
#include <queue>
using namespace std;
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

void insert(TreeNode *root, int val)
{
    if (root->val > val)
    {
        if (!(root->left))
            root->left = new TreeNode(val);
        else
            insert(root->left, val);
    }
    else
    {
        if (!(root->right))
            root->right = new TreeNode(val);
        else
            insert(root->right, val);
    }
}
TreeNode *insertIntoBST(TreeNode *root, int val)
{

    if (!root)
        return new TreeNode(val);
    else
    {
        insert(root, val);
        return root;
    }

}

int main ()
{
    int array[] = {10, 5, 15, 2, 8, 12, 18, INT_MIN, INT_MIN, 6, INT_MIN, INT_MIN, 13, INT_MIN, INT_MIN};
    int n = sizeof(array)/sizeof(array[0]);
    TreeNode *root = construct(array, n);
    Pre_display(root);

    TreeNode *answer = insertIntoBST(root,7);
    cout<<endl;
    Pre_display(answer);

}