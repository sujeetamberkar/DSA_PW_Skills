- 1) Store the inorder in a vector and then find predessor and sucessor 
- 2) Use a temporarry global Node and find predessor and sucessor 



# Inorder Predecessor 
MAIN (In general Binarry search tree)
    - 1) Go left 
    - 2) Geep Going right until you encounter NULL 


    CODE
        a) If(ROOT == NULL ): 
                            return NULL 
            Node * pred = root->left;

            while(root->right)
                root = toot->right;

            return root; 

# Inorder Sucessor 
    - 1) Go right once
    - 2) Keep going left until you encounter NULL


    CODE
        a) If(ROOT == NULL ): 
                            return NULL 
            Node * pred = root->right;

            while(root->left)
                root = toot->left;

            return root; 


- **Function `iop` (Inorder Predecessor)**
  - Input: TreeNode `root`
  - Finds predecessor in BST
  - Start from `root->left`
  - Traverse right (`pred->right`) until `NULL`

- **Function `ios` (Inorder Successor)**
  - Input: TreeNode `root`
  - Finds successor in BST
  - Start from `root->right`
  - Traverse left (`suc->left`) until `NULL`
