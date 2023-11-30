#include<iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

 bool exists(TreeNode* root, TreeNode *target)
    {
        if(!root)
            return false;
        if(root==target)
            return true;
        return exists(root->left,target) || exists(root->right,target);
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == p || root ==q)
            return root;

        else if (exists(root->left,p) && exists(root->right,q))
            return root;
        else if (exists(root->right,p) && exists(root->left,q))
            return root;    
        
        else if (exists(root->left, p) && exists(root->left,p))
            return lowestCommonAncestor(root->left,p,q);
        else {
            return lowestCommonAncestor(root->right,p,q);

        }
    }

/*
    Short Code
    TreeNode*lowestCommonAncestor(TreeNode*root,TreeNode*p,TreeNode*q)
    {
        if(exists(root->left,p) && exists(root->left,q))
        return lowestCommonAncestor(root->left,p,q);
        else if(exists(root->right,p) && exists(root->right,q))
        return lowestCommonAncestor(root->right,p,q);

        return root;
    }

*/

int main() {
    TreeNode *root = new TreeNode(3);
    TreeNode *node5 = root->left = new TreeNode(5);
    TreeNode *node1 = root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    TreeNode *node2 = root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    TreeNode *node4 = root->left->right->right = new TreeNode(4);

    TreeNode* lca = lowestCommonAncestor(root, node5, node1);
    cout << "The LCA of node 5 and node 1 is: " << (lca ? lca->val : -1) << endl;

    lca = lowestCommonAncestor(root, node5, node4);
    cout << "The LCA of node 5 and node 4 is: " << (lca ? lca->val : -1) << endl;


    return 0;
}
