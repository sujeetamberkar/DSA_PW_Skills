#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        stack <TreeNode *> st;
        TreeNode* node = root;
        while(st.size()||node)
        {
            if(node)
            {
                st.push(node);
                node=node->left;
            }
            else {
                TreeNode* temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                node=temp->right;
            }
        }
        return ans;
    }
    int main() {
    // Create a simple binary tree.
    //      1
    //     / \
    //    2   3
    //   / \
    //  4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Perform inorder traversal.
    vector<int> result = inorderTraversal(root);

    // Print the result.
    for (int val : result) {
        cout << val << " ";
    }
    }