## Algorithm Outline
- **Start Traversal**: Initiate traversal with `helper`, passing the root node, an empty string for the path, and an empty vector to collect the answers.
- **Node Visit**: Inside `helper`, if the current node is null, end the current path.
- **Leaf Node Check**: If the current node is a leaf (no left or right child), append its value to the path string and add the full path to the answer vector.
- **Recurse Subtrees**: If the current node is not a leaf, recursively call `helper` for the left and right children, adding the current node's value and an arrow "->" to the path string.
- **Gather Paths**: In `binaryTreePaths`, after the `helper` function completes, return the vector containing all the paths.
- **Main Execution**: In `main`, construct the binary tree, call `binaryTreePaths` to get all paths, and output each path.