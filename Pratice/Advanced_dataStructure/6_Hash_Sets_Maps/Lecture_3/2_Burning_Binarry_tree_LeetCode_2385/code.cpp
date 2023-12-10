#include <iostream>
#include <climits>
#include <queue>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(NULL), right(NULL) {}
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

        i += 2;
        j += 2;
    }
    return root;
}

TreeNode *first = NULL;
void markParent(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parent)
{
    if (root == NULL)
        return;
    if (root->left)
        parent[root->left] = root;
    if (root->right)
        parent[root->right] = root;
    markParent(root->left, parent);
    markParent(root->right, parent);
}
void find(TreeNode *root, int start)
{
    if (root == NULL)
        return;
    if (root->val == start)
    {
        first = root;
        return;
    }
    find(root->left, start);
    find(root->right, start);
}

int amountOfTime(TreeNode *root, int start)
{
    int max_Level = INT_MIN;
    find(root, start);
    unordered_map<TreeNode *, TreeNode *> parent;
    markParent(root, parent);

    unordered_set<TreeNode *> s;
    s.insert(first);
    queue<pair<TreeNode *, int>> q;
    q.push({first, 0});
    // BFS

    while (q.size())
    {
        pair<TreeNode *, int> p = q.front();
        q.pop();
        int level = p.second;
        max_Level = max(max_Level, level);
        TreeNode *temp = p.first;
        if (temp->left)
        {
            if (s.find(temp->left) == s.end())
            {
                q.push({temp->left, level + 1});
                s.insert(temp->left);
            }
        }
        if (temp->right)
        {
            if (s.find(temp->right) == s.end())
            {
                q.push({temp->right, level + 1});
                s.insert(temp->right);
            }
        }
        if (parent.find(temp) != parent.end())
        {
            if (s.find(parent[temp]) == s.end())
            {
                q.push({parent[temp], level + 1});
                s.insert(parent[temp]);
            }
        }
    }
    return max_Level;
}
int main()
{
    int array[] = {1, 5, 3, INT_MIN, 4, 10, 6, 9, 2};
    int n = sizeof(array) / sizeof(array[0]);
    TreeNode *root = construct(array, n);
    int start = 3;
    cout << amountOfTime(root, start);
}