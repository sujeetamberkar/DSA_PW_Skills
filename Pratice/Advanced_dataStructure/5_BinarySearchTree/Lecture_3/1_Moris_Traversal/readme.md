    -1) Start the algorithm with the root of the tree
        - a) curr-> left exist  
                Find predecessor
        - b) curr-> left == NULL  
                i) visit
                ii) Unlink
                ii) Go Rigth
                

Alright, let's do a dry run of the Morris Inorder Traversal on the updated binary tree:

```
         10
        /  \
       5   15
      / \    \
     3   8   20
        /     /
       6     18
```

### Morris Inorder Traversal Steps:

1. **Start with the root**: current = 10.
2. **current (10) has a left child (5)**: 
   - Find predecessor of 10 in the left subtree (which is 8).
   - 8 has a left child (6), but 6's right is null. Link 6's right back to 8.
   - Link 8's right back to 10. Move to left child of 10, current = 5.
3. **current (5) has a left child (3)**: 
   - 3 has no left child, and its right is null, visit 3 and unlink if needed (nothing to unlink here).
   - Move to right, current = 5.
4. **Visit 5 and move right to 8**.
5. **current (8) has a left child (6)**: 
   - 6's right is linked to 8 (from a previous step). Unlink it, visit 6.
   - Move to right (which is null), so back up to 8.
6. **Visit 8**. 
7. **Move to the right of 8 which is linked back to 10**: 
   - Unlink and move up to 10.
8. **Visit 10 and move right to 15**.
9. **current (15) has no left child**: 
   - Visit 15 and move right to 20.
10. **current (20) has a left child (18)**: 
    - 18's right is null. Link 18's right back to 20.
    - Move to left child of 20, current = 18.
11. **Visit 18**.
12. **Move to the right of 18, which is linked back to 20**: 
    - Unlink and move up to 20.
13. **Visit 20**.
14. **Move to right of 20, which is null**: End of traversal.

### Inorder Traversal Result:

`[3, 5, 6, 8, 10, 15, 18, 20]`