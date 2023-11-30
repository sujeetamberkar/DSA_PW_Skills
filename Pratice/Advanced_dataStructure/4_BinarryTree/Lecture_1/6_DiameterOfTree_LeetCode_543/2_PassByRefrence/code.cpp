#include <iostream>
#include <algorithm>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Your provided functions here
int maxDiameter = 0;

int levels(TreeNode* root) {
    if(!root)
    {
        return 0;
    }

    int left = levels(root->left);
    int right = levels(root->right);
    return 1 + max(left,right);}

void helper(TreeNode* root,int &maxDiameter) {
            if(!root)
        {
            return;
        }
        int diameter = levels(root->left) + levels(root->right);
        maxDiameter = max(maxDiameter,diameter);
        helper(root->left,maxDiameter);
        helper(root->right,maxDiameter);
        }

int diameterOfBinaryTree(TreeNode* root) {
            int maxDiameter = 0;
            helper(root,maxDiameter);
            return maxDiameter;
            }

int main() {
    // Create a simple test case with a binary tree
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Call your diameterOfBinaryTree function
    cout << "The diameter of the binary tree is: " << diameterOfBinaryTree(root) << endl;

    // Clean up the allocated nodes if necessary
    // Remember to delete nodes created with 'new' to avoid memory leaks
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
