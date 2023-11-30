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
void helper (TreeNode* root, vector<int> path, vector < vector <int>>&answer, int sum)
    {
        if(!root)
        {
            return;
        }
        if(root->left == NULL && root->right == NULL)
        {
            if (root->val == sum)
            {
                path.push_back(root->val);
                answer.push_back(path);
            }
            return;
        }
        path.push_back(root->val);
        helper(root->left,path,answer,sum - (root->val));
        helper(root->right,path,answer,sum - (root->val));
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector < vector < int > > ans;
        vector < int > path;
        helper(root,path,ans,targetSum);
        return ans;
    }
    

int main ()
{
    int array [] = {5,4,8,11,INT_MIN,13,4,7,2,INT_MIN,INT_MIN,5,1};
    int n = sizeof(array)/sizeof(array[0]);
    TreeNode * root = construct(array,n);

    int targetsum = 22;
    vector < vector < int > > answer = pathSum(root,targetsum);
    for(vector <int> temp : answer)
    {
        for(int element : temp)
        {
            cout<<element<<"\t";
        }
        cout<<endl;
    }

}