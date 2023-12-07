lowest common ancestor of two nodes in a binary search tree (BST) in short phrases:

1. Start with the root node.
2. Check if the root node's value matches either of the two target node values (p or q).
   - If a match is found, return the root node as the common ancestor.
3. If the root value is greater than both p and q values, recursively call the function on the left subtree.
   - This is because both p and q are on the left side of the current root.
4. If the root value is less than both p and q values, recursively call the function on the right subtree.
   - This is because both p and q are on the right side of the current root.
5. If the root value is between p and q values (exclusive), return the root as the common ancestor.
   - This handles cases where one node is on the left and the other is on the right of the current root.
6. Repeat steps 2-5 until the common ancestor is found or the entire tree is traversed.
7. Return the lowest common ancestor once it's determined.

This algorithm takes advantage of the properties of a BST to efficiently find the lowest common ancestor.