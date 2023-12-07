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

        i +=2;
        j +=2;
    }
    return root;
}

void trim(TreeNode *root, int lo, int hi)
    {
        if(root==NULL)
            return;
        while(root->left !=NULL)
        {
            if(root->left->val < lo)
                root->left = root->left->right;
            else if (root->left -> val > hi)
                root->left = root->left ->left;
            else 
                break;       
        }
        while (root->right !=NULL)
        {
            if(root->right->val > hi)
                root->right = root->right->left;
            else if (root->right->val <lo)
                root->right = root->right->right;
            else 
                break;
        }
        trim(root->left,lo,hi);
        trim(root->right,lo,hi);
    }

    TreeNode* trimBST(TreeNode* root, int low, int high) {
        TreeNode * dummy = new TreeNode(INT_MAX);
        dummy->left = root;
        trim(dummy,low,high);
        return dummy->left;    
    }
    int main ()
    {
        int array[]= {3,0,4,INT_MIN,2,INT_MIN,INT_MIN,1};
        int n = sizeof(array)/sizeof(array[0]);
        TreeNode *root = construct(array,n);
        Pre_display(root);
        cout<<endl;
        TreeNode *answer = trimBST(root,1,3);
        Pre_display(answer);

    }