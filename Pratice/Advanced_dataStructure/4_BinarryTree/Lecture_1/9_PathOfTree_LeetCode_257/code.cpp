#include <iostream>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
void helper(TreeNode *root, string s, vector<string> &answer)
{
    if (!root)
    {
        return;
    }
    string a = to_string(root->val);
    if (root->left == NULL && root->right == NULL)
    {
        s = s + a;
        answer.push_back(s);
        return;
    }
    helper(root->left, s + a + "->", answer);
    helper(root->right, s + a + "->", answer);
}

vector<string> binaryTreePaths(TreeNode *root)
{
    vector<string> answer;
    helper(root, "", answer);
    return answer;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    vector<string> paths = binaryTreePaths(root);

    for (string element : paths)
    {
        cout << element << "\t" << endl;
    }

    return 0;
}
