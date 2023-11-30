#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

    int getheight(TreeNode *root){
        if(!root) {
            return 0; // height of a null node is 0
        }
        return 1 + max(getheight(root->left), getheight(root->right));
    }

    void getA_Level(TreeNode* root, vector < vector < int > >& ans, int level)
    {
        if(!root)
        {
            return;
        }
        ans[level].push_back(root->val);
        getA_Level(root->left,ans,level+1);
        getA_Level(root->right,ans,level+1);

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = getheight(root);
        vector < vector < int > > answer (n);
        getA_Level(root,answer,0);
        return answer;

    }
int main() {
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // Instantiate Solution and get level order traversal
    vector<vector<int>> result = levelOrder(root);
    
    for(vector < int > temp : result)
    {
        for(int element: temp)
        {
            cout<<element<<"\t";
        }
        cout<<endl;
    }

    return 0;
}

