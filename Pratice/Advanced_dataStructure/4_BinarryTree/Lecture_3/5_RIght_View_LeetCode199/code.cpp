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
  int getheight(TreeNode *root){
        if(!root) {
            return 0; // height of a null node is 0
        }
        return 1 + max(getheight(root->left), getheight(root->right));
    }


    void getNthLevel(TreeNode* root, int current,int index,vector<int> & answer_row)
    {
    if(!root)
    {
        return;
    }
    getNthLevel(root->left,current+1,index,answer_row);
    getNthLevel(root->right,current+1,index,answer_row);
    if(current==index)
    {
        answer_row.push_back(root->val);
        return;
    }

    }

    vector<int> rightSideView(TreeNode* root) {
        int height = getheight(root);
        vector <int> answer;
        for(int i = 0; i<height;i++)
        {
        vector<int> answer_row;

        getNthLevel(root,0,i,answer_row);
        answer.push_back(answer_row[answer_row.size()-1]);
    }
    return answer;

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


int main ()
{
    int array []= {1,2,3,4,5,INT_MIN,INT_MIN};
    int n = sizeof(array)/sizeof(array[0]);
    TreeNode * root = construct(array,n);

    vector <int> answer = rightSideView(root);
    for (int element : answer)
    cout<<element<<"\t";

}