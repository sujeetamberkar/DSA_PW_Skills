#include<iostream>
#include<climits>
#include<queue>
using namespace std;

class TreeNode {
    public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val): val(val),left(NULL),right(NULL){} 
};
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

        i +=2;
        j +=2;
    }
    return root;
}
    void helper(TreeNode* root, long long sum, int &count)
    {
        if(!root)
            return;
        if ((long long) (root->val) == sum)
        {
            count++;
        }
        helper(root->left, sum - (long long) (root->val), count);
        helper(root->right, sum - (long long) (root->val), count);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)
            return 0;
        int count = 0;
        helper(root,(long long) (targetSum),count);
        count = count + 
        pathSum((root->left),targetSum)  +
        pathSum((root->right),targetSum) ;
        return count;
    }

int main ()
{
    
    int array [] = {10,5,-3,3,2,INT_MIN,11,3,-2,INT_MIN,1};
    int targetSum =8;
    int n = sizeof(array)/sizeof(array[0]);
    TreeNode * root = construct(array,n);

    cout<<pathSum(root,targetSum);
}