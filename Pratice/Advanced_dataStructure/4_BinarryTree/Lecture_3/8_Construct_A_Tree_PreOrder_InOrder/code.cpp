#include<iostream>
using namespace std;
using namespace std;

class TreeNode {
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val): val(val),left(NULL),right(NULL){} 
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

TreeNode* build(vector<int>& pre,int prelo, int prehi, vector <int> &in, int inlo,int inhi)
    {
        if(prelo > prehi)
        {
            return NULL;
        }
        TreeNode * root = new TreeNode (pre[prelo]);
        if(prelo == prehi)
            return root;
        int i = inlo;
        while(i<=inhi)
        {
            if(in[i]==pre[prelo])
                break;
            i++;
        }
        int leftCount = i - inlo;
        int rightCount = inhi - i;
        root->left = build(pre,prelo +1,prelo+leftCount,in,inlo,i-1);
        root->right = build(pre,prelo+leftCount+1,prehi,in,i+1,inhi);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        return build(preorder,0,n-1,inorder,0,n-1);
    }

int main ()
{
    vector <int> pre_order ={3,9,20,15,7};
    vector <int> in_order= {9,3,15,20,7};
    TreeNode * root = buildTree(pre_order,in_order);
    Pre_display(root);
}