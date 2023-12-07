
### Method 1: Storing Nodes in a Vector
- **Technique**: Preorder Traversal using Stack.
- **Steps**:
  1. Perform preorder traversal of the tree using a stack.
  2. Store each node in a vector in the order of traversal.
  3. Reconnect nodes in the vector linearly (right child only).
- **Key Points**:
  - `TreeNode* temp` used for temporary storage during traversal.
  - After traversal, use loop to adjust `right` and `left` pointers.
  - Leaves `left` pointer of each node as `NULL`.
- **Use Case**: When you want to use additional space for clearer logic.

### Method 2: Using Recursion
- **Technique**: Recursive Flattening.
- **Steps**:
  1. Recursively flatten left and right subtrees.
  2. Set the right child of the current node to the flattened left subtree.
  3. Append the flattened right subtree to the end of the flattened left subtree.
- **Key Points**:
  - Temporarily stores left and right children.
  - Uses while loop to find the end of the right subtree.
  - Modifies the tree in place with no additional space.
- **Use Case**: Efficient in-place transformation without extra space.

### Method 3: Similar to Morris Traversal
- **Technique**: In-Place Rearrangement.
- **Steps**:
  1. Traverse the tree while maintaining a pointer to the current node.
  2. If the current node has a left child, find the rightmost node (predecessor) in the left subtree.
  3. Make the right subtree of the predecessor point to the right subtree of the current node.
  4. Move the left subtree to the right and continue the process.
- **Key Points**:
  - Does not use recursion or a stack.
  - Involves finding the predecessor and altering the `right` pointers.
  - Finally, sets all `left` pointers to `NULL`.
- **Use Case**: Space-efficient, no extra space or stack used.

Each method has its unique approach and use cases. Method 1 is straightforward with additional space, Method 2 is a classic recursive approach, and Method 3 is an advanced, space-efficient technique. Remembering these key aspects will help you recall the methods easily after a few months.