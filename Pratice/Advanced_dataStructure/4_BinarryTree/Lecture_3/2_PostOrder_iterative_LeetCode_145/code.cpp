#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> answer;
    stack<TreeNode *> st;
    if (root)
    {
        st.push(root);
    }
    while (st.size())
    {
        TreeNode *temp = st.top();
        st.pop();
        answer.push_back(temp->val);
        if (temp->left)
        {
            st.push(temp->left);
        }
        if (temp->right)
        {
            st.push(temp->right);
        }
    }
    reverse(answer.begin(), answer.end());
    return answer;
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

    // Perform postorder traversal.
    vector<int> result = postorderTraversal(root);

    // Print the result.
    for (int val : result) {
        cout << val << "\t";
    }
}