#include <iostream>
#include <algorithm>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {} // Missing constructor
};
bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }
    if (q == NULL && p != NULL)
    {
        return false;
    }
    if (p == NULL && q != NULL)
    {
        return false;
    }

    if (p->val != q->val)
    {
        return false;
    }

    bool leftAnswer = isSameTree(p->left, q->left);
    if (!leftAnswer)
    {
        return false;
    }
    bool rightAnswer = isSameTree(p->right, q->right);
    if (!rightAnswer)
    {
        return false;
    }
    return true;
}
int main()
{
    TreeNode *tree1 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    TreeNode *tree2 = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    TreeNode *tree3 = new TreeNode(1, new TreeNode(2), nullptr);

    bool result1 = isSameTree(tree1, tree2);
    cout << "Tree1 and Tree2 are " << (result1 ? "the same." : "not the same.") << endl;

    bool result2 = isSameTree(tree1, tree3);
    cout << "Tree1 and Tree3 are " << (result2 ? "the same." : "not the same.") << endl;
    return 0;
}
