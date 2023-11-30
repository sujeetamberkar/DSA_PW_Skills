#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void helper(TreeNode *tempRoot)
{
    if (tempRoot == nullptr)
    {
        return;
    }

    TreeNode *temp = tempRoot->left;
    tempRoot->left = tempRoot->right;
    tempRoot->right = temp;
}
TreeNode *invertTree(TreeNode *root)
{
    if (!root)
    {
        return NULL;
    }

    helper(root);
    invertTree(root->left);
    invertTree(root->right);

    return root;
}
void printTree(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

int main()
{
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    cout << "Original tree: ";
    printTree(root);
    cout << endl;

    TreeNode *invertedRoot = invertTree(root);

    cout << "Inverted tree: ";
    printTree(invertedRoot);
    cout << endl;

    return 0;
}