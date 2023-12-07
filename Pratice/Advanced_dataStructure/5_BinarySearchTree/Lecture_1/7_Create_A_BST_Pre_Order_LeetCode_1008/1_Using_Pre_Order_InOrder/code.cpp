#include <iostream>
#include <queue>
#include <climits>
using namespace std;
using namespace std;
int sum = 0;
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


    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector <int> inorder = preorder;
        sort(inorder.begin(),inorder.end());


    return buildTree(preorder,inorder);
    }
int main ()
{
    vector <int> preorder {8,5,1,7,10,12};

    TreeNode * answer = bstFromPreorder(preorder);
    Pre_display(answer);

}