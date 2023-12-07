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

TreeNode *helper(vector<int> &nums, int low, int high)
{
    if (low > high)
        return NULL;
    int mid = low + (high - low) / 2;
    TreeNode *root_temp = new TreeNode(nums[mid]);
    root_temp->left = helper(nums, low, mid - 1);
    root_temp->right = helper(nums, mid + 1, high);

    return root_temp;
}
TreeNode *sortedArrayToBST(vector<int> &nums)
{
    return helper(nums, 0, nums.size() - 1);
}
int main()
{
    vector<int> sortedArray{-10, -3, 0, 5, 9};
    TreeNode *answer = sortedArrayToBST(sortedArray);
    Pre_display(answer);
}