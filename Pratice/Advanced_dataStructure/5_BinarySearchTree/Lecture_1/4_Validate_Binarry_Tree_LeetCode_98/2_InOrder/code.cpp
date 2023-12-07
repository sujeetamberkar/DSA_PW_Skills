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
    void helper_Inorder(TreeNode* root, vector <int> & v)
    {
        if(!root)
            return;
        helper_Inorder(root->left,v);
        v.push_back(root->val);
        helper_Inorder(root->right,v);
    }

    bool isValidBST(TreeNode* root) {
        vector <int> v;
        helper_Inorder(root,v);
        // return is_sorted(v.begin(),v.end());

        for(int i = 1; i <v.size();i++)
        {
            if(v[i]<=v[i-1])
                return false;
        }
        return true;
    }

int main ()
{
    // int array[] = {5,1,4,INT_MIN,INT_MIN,3,6};
    int array[] = {2,1,3};

    int n = sizeof(array) / sizeof(array[0]);
    TreeNode *root = construct(array, n);
    cout<<isValidBST(root);
}