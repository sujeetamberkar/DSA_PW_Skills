#include <iostream>
#include <climits>
#include <queue>
#include <stack>
#include<unordered_map>
#include<algorithm>
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

void displayNthLevel(TreeNode* root, int level,int index)
{
    if(!root)
    {
        return;
    }
    displayNthLevel(root->left,level+1,index);
    displayNthLevel(root->right,level+1,index);
    if(level==index)
    {
        cout<<root->val<<"\t";
        return;
    }

}
int levlOrder(TreeNode *root){
        if(!root) {
            return 0; // height of a null node is 0
        }
        return 1 + max(levlOrder(root->left), levlOrder(root->right)); // corrected to root->right
    }


void levelOrderTraversal(TreeNode* root)
{
    int height =levlOrder(root);
    for(int i =0;i<height;i++)
    {
        displayNthLevel(root,0,i);
        cout<<endl;
    }

}
void topview(TreeNode *);
int main ()
{
    int array[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n = sizeof(array)/sizeof(array[0]);
    TreeNode*  root = construct(array,n);
    // levelOrderTraversal(root);
    topview(root);
}
void topview(TreeNode *root)
{
    unordered_map <int, int> m; 
    queue < pair < TreeNode *,int >> q;
    pair <TreeNode* ,int> r;
    r.first = root;
    r.second = 0;

    q.push(r);
    while (q.size())
    {
        TreeNode * node = (q.front()).first;
        int level = (q.front()).second;
        q.pop();
        if(m.find(level)==m.end()) // Not present in the map
        {
            m[level] = node->val;
        }
        if(node->left != NULL)
        {
            pair <TreeNode * , int > left_pair ;
            left_pair.first=node->left;
            left_pair.second=level-1;
            q.push(left_pair);
        }
         if(node->right != NULL)
        {
            pair <TreeNode * , int > right_pair ;
            right_pair.first=node->right;
            right_pair.second=level+1;
            q.push(right_pair);
        }
    }

    int min_Level = INT_MAX;
    int max_Level = INT_MIN;
    for (auto x: m)
    {
        int level = x.first;
        min_Level = min(min_Level,level);
        max_Level = max(max_Level,level);
    }
    for(int i = min_Level;i <=max_Level;i++)
    {
        cout<<m[i]<<"\t";
    }

    cout<<endl;

}
