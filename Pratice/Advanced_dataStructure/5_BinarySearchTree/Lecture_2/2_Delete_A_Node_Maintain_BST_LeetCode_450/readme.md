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

- **Function `deleteNode`**
  - Input: TreeNode `root`, int `key`
  - If `root` is `NULL`, return `NULL`
  - If `root->val == key` (Node to delete found)
    - **Case 1**: No child (`root->left` & `root->right` are `NULL`)
      - Return `NULL`
    - **Case 2**: One child
      - Return non-NULL child
    - **Case 3**: Two children
      - Replace `root->val` with inorder predecessor's value
      - Delete inorder predecessor
  - If `root->val > key`
    - Recur on `root->left`
  - Else
    - Recur on `root->right`
  - Return `root` at the end

Remember, this algorithm is specifically for deleting a node in a Binary Search Tree (BST) considering different scenarios like no child, one child, or two children.