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
vector <int> inorderMorisTraversal(TreeNode* root)
{
        vector <int> answer;
    TreeNode* current = root;
    while (current!=NULL)
    {
        if(current->left!=NULL) // Find Pred
        {
            TreeNode *pred = current->left;
            while (pred->right!=NULL && pred->right!=current)
            {
                pred = pred->right;
            }
            
            if (pred->right == NULL)
            {// Make fake connections 
                pred->right=current;
                current=current->left;
            }
            else {// pred->right!=current 
            // Unlink
            pred->right=NULL;
            answer.push_back(current->val);
            current = current->right;


            }
        }

        else 
        {
            answer.push_back(current->val);
            current = current->right;
        }
    }
    return answer;
    }
    

int main ()
{
    int array[] = {10, 5, 15, 3, 8, INT_MIN, 20, INT_MIN, 6, INT_MIN, INT_MIN, 18, INT_MIN};
    int n = sizeof(array)/sizeof(array[0]);

    TreeNode* root = construct(array,n);

    vector <int>answer = inorderMorisTraversal(root);
    for(int element: answer)
        cout<<element<<"\t";

}