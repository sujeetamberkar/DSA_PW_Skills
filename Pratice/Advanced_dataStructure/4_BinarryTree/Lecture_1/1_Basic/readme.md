# Tree
    - 1) Tree may have mutiple next
    - 2) Important terms 
        a) Root 
        b)Child Node
        c)Parent Node 
        d) Sibling Node
        e) leaf Node (WITH NNOI CHILD) f)  
        f) Internal Node
        g) Ancestor Node
        h) Decendent Node
        i) Level (Generation)
        j) Size (Number of Nodes)
        k) Number of Edges (Size -1) (Arrow)
        l) Height = Level -1

    - 3) Tree will never have a close (SELF loop)


## Types of Tree
    1) Generic Tree: 
        Tree can have any number of childers,
        some may have 2 childer, some may have 4 childern

    2) Binnary Tree : 0, 1, 2 children at max

## Binarry Tree 
    1) Every node will have value and adress of the left child, right child

## Binnary Search tree: 
    1) Left everything is smaller, 
## AVL : Balances BST



### Notes

    -1 ) These two are different trees because the order is different 
            1                      1
           / \                    / \
          2   3                  3   2


    - 2) You will be only given the head of the tree
    - 3) Now display using recursion 

# PRO Advice:
    -1) Always divide the tree into 3 parts
        - 1) Root
        - 2) Left Sub tree
        - 3) RIght Sub Tree
        
## Full Binary tree
    -1 ) Every node in a tree will have 0 or 2 child
    ```
        1
       / \
      2   3
     /     \
    4       5
    ```    
## Perfect Binary tree 
    - 1) Only leaf node will have 0 child
    - 2) All other nodes will have 2 cild nodes 
```
        1
       / \
      2   3
     / \ / \
    4  5 6  7
```


## Complete Binarry tree

    1) Only one elelement in the last level is incomplete (RIght most)

    ```
        1
       / \
      2   3
     / \  /
    4  5 6 

    ```

## Balanced Binary Tree
    -1) For every node difference between the leftmost and rightmost tree atmost is 1

## Degenerate of skewed Binarry Tree
    -1) Only one left or right child is present in each node of a tree