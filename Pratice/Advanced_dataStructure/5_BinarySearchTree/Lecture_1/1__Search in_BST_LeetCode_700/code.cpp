#include <iostream>
#include <queue>
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

TreeNode *searchBST(TreeNode *root, int val)
{
    if (!root)
        return NULL;
    else if (root->val == val)
        return root;
    else if (root->val > val)
        return searchBST(root->left, val);
    else
        return searchBST(root->right, val);
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

void displayAnswer(TreeNode *answer)
{

    cout <<endl<<"Node val ";
    if(answer)
        cout << answer->val << endl;
    else
        cout << "NULL";

    cout << endl << "Left\t";
    if((answer) && answer->left)
        cout << answer->left->val << endl;
    else 
        cout << "NULL";

    cout << endl << "Right\t";
    if((answer) && answer->right)
        cout << answer->right->val << endl;
    else 
        cout << "NULL";




    

}

int main()
{
    int array[] = {10, 5, 15, 2, 8, 12, 18, INT_MIN, INT_MIN, 6, INT_MIN, INT_MIN, 13, INT_MIN, INT_MIN};
    int n = sizeof(array) / sizeof(array[0]);
    TreeNode *root = construct(array, n);
    cout << "PreDisplayTree" << endl;
    Pre_display(root);
    cout << endl;
    int targetElement = 8;

    TreeNode *answer = searchBST(root,targetElement);

    displayAnswer(answer);

}
