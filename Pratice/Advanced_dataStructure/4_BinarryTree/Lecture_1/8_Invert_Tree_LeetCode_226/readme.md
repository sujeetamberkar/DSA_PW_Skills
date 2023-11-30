# Invert Tree
    - 1) Use helper function to swap the leftSubTree and rightSubTree
    - 2) function (invertTree) 
        a) Base Condition, 
            if(!root) return NULL
        b) 
            i)helper(root);
            ii)invertTree(root->left);
            iii)invertTree(root->right);