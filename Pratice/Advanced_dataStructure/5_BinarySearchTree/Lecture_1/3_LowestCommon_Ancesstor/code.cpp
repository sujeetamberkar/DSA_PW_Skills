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

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (root->val == p->val || root->val == q->val) return root;
        else if(root->val > p->val && root->val < q->val)
            return root;
        else if(root->val <p->val && root->val >q->val)
            return root;
        else if(root->val > p->val && root->val >q->val)
            return lowestCommonAncestor(root->left,p,q);
        else 
            return lowestCommonAncestor(root->right,p,q);
    }

int main()
{
    int array[] = {6, 2, 8, 0, 4, 7, 9, INT_MIN, INT_MIN, 3, 5};
    int n = sizeof(array) / sizeof(array[0]);
    TreeNode *root = construct(array, n);

    TreeNode *p = root->left; // You can choose your own nodes for testing
    TreeNode *q = root->right;

    TreeNode *lca = lowestCommonAncestor(root, p, q);
    
    cout << "\nLowest Common Ancestor: " << lca->val << endl;

    return 0;
}
