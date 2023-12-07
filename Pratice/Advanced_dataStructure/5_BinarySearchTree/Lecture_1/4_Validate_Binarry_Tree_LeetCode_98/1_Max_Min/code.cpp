#include <iostream>
#include <queue>
#include<climits>
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
    long long maxTree(TreeNode* root)
    {
        if(!root)
        return LLONG_MIN;
        return max((long long)root->val, max(maxTree(root->left),maxTree(root->right)));
    }
    long long minTree(TreeNode* root)
    {
        if(!root)
        return LLONG_MAX;
        return min((long long)root->val, min(minTree(root->left),minTree(root->right)));
    }

    bool isValidBST(TreeNode* root) {
    if(!root || ( ((!(root->left)) && (!(root->right)))  ))
        return true;
    else if (root->val <=maxTree(root->left))
        return false;
    else if (root->val >= minTree(root->right))
        return false;
    else 
        return isValidBST(root->right) && isValidBST(root->left);
    }

int main ()
{
    // int array[] = {5,1,4,INT_MIN,INT_MIN,3,6};
    int array[] = {2,1,3};

    int n = sizeof(array) / sizeof(array[0]);
    TreeNode *root = construct(array, n);
    cout<<isValidBST(root);
}