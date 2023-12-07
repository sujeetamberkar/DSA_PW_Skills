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
TreeNode * iop(TreeNode * root)
    {
        // No base case because we assume, all will have a predessor 
        TreeNode * pred = root->left;
        while(pred->right!=NULL)
        {
            pred = pred->right;
        }
        return pred;
    }

    TreeNode * ios(TreeNode * root)
    {
        // No base case because we assume, all will have a predessor 
        TreeNode * suc = root->right;
        while(suc->left !=NULL)
        {
            suc = suc->left;
        }
        return suc;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root==NULL)
            return NULL;
        // LeafNode
        if(root->val == key)
            {
            // CASE 1 : No child 
            if(root->left == NULL && root->right == NULL)
                return NULL;
            

            // Case 2: 1 Child 
            else if(root->left == NULL || root->right == NULL)
                if(root->left !=NULL)
                    return root->left;
                else 
                    return root->right;
            
            
            // Case 3: 2 Child 
            // Replace the node with inorder predecessor / sucessor
            else {
                // root->left != NULL && root->right != NULL
                // Repace it with Inorder Predessor/ sucessor 
                TreeNode * pred = iop(root);
                // Predecesor will never have 2 child
                // It will have 1 child or no child
                root->val = pred->val;
                root->left = deleteNode(root->left,pred->val);
            }


            }


        // Node with One Child


        else if(root->val >key)
            root->left = deleteNode(root->left,key);
        else
            root->right = deleteNode(root->right,key);
        return root;
    }

int main ()
{
    int array[]= {5,3,6,2,4,INT_MIN,7};
    int n = sizeof(array)/ sizeof(array[0]);
    TreeNode* root = construct(array,n);
    Pre_display(root);
    cout<<endl;
    deleteNode(root,6);
    Pre_display(root);
    cout<<endl;

}