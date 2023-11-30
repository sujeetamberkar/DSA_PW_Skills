#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// WHILE PUSHING in stack
// Push right, then left
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> preorderTraversal(TreeNode* root) {
        vector <int> ans;
        stack <TreeNode* > st;
        if(root)
            st.push(root);
        while(st.size())
        {
            TreeNode *temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->right)
                st.push(temp->right);
            if(temp->left)
                st.push(temp->left);
        }
    return ans;}

int main ()
{
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    // Perform preorder traversal
    vector<int> result = preorderTraversal(root);
    
    // Print the preorder traversal
    cout << "Preorder traversal:" << endl;
    for(int element : result)
    cout<<element<<"\t";


    return 0;

}