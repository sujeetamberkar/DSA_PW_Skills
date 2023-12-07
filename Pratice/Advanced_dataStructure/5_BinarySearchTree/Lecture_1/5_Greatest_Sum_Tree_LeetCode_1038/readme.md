
# Algorithm
1. Traverse the Binary Search Tree (BST) in reverse in-order (right-root-left) fashion.
2. Maintain a `sum` variable to accumulate the values of nodes greater than the current node.
3. Update each node's value with the sum of itself and all nodes with greater values.
4. Return the modified BST, which is now a Greater Tree.