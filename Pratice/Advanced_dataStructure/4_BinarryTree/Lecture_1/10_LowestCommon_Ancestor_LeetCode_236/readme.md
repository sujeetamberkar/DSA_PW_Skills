# Lowest Common Ancestor of a Binarry Tree

## Solution 
    - 1) First intersecting point
    - 2)  We are given 2 nodes and root

## Some important edge case 

1,2,4,8,9,5,10,11,3,6,12,13,7,14,15

                        1           
                       / \
                 (2)         3
               /    \        / \
              4     5      6    7
             / \   / \     / \  /  \
            8   9 10 (11) 12 13 14 15


In this case 2,11
The CLosest ancestor is 2



Extreme case 
        4 and 14 is 1
        8 10 is 2

        From the perpective of 2, 
        8 and 10 lie at LHS and RHS


    Whever p and q are present in the left subtree and right subtress, 
    That is the lowest common Ancestor
    {Something like divide and conqure}



# Condition case 
    1) Root == p or Root == Q: return root
    function (exisit) : Give a subTreeNode, return True or False

    2)  if p is at left and q is at right : return root

    3) if q is at right and p is at left : return root

    4) if p is at left and q is at left : return funCall(root->left,p,q)

    5) if p is at right and q is at right : return funCall(root->right,p,q)

#### Conditions:
    a) If root is one of the nodes: The root is the LCA.
    b)If one node is on the left and the other on the right of root: The root is the LCA.
    c)If both nodes are on the same side: Recursively call the function on the respective side of the root.

# FInd function 
    1) If Root == NULL
        return false
    2) if (root == target)
        Return true

    3) return funCall(root->left,target) OR funCall(root->right,target)



```
    Short Code
    TreeNode*lowestCommonAncestor(TreeNode*root,TreeNode*p,TreeNode*q)
    {
        if(exists(root->left,p) && exists(root->left,q))
        return lowestCommonAncestor(root->left,p,q);
        else if(exists(root->right,p) && exists(root->right,q))
        return lowestCommonAncestor(root->right,p,q);

        return root;
    }

```
