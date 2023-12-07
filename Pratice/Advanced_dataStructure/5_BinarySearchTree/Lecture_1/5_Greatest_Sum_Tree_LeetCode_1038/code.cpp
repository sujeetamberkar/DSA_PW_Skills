#include <iostream>
#include <queue>
#include <climits>
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

int sum = 0;

TreeNode *bstToGst(TreeNode *root)
{
    if (!root)
        return nullptr;

    bstToGst(root->right);

    sum += root->val;
    root->val = sum;

    bstToGst(root->left);

    return root;
}
int main()
{
    int array [] = {4,1,6,0,2,5,7,INT_MIN,INT_MIN,INT_MIN,3,INT_MIN,INT_MIN,INT_MIN,8};
    int n = sizeof(array)/sizeof(array[0]);
    TreeNode *root = construct(array, n);
    TreeNode *answer = bstToGst(root);
    Pre_display(answer);
}