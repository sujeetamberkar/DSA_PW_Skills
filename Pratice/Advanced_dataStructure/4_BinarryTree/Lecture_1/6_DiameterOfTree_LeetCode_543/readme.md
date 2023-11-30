# Diameter of a Tree
    - 1) Wrong Approach
        1 + levels (Left Sub Tree) + levels (right sub tree)

    - 2) Visit every node and find the diameter
         Then find the max value

## Algorithm 
    - 1) Travel to each node using a helper function 
    - 2) On Each node call the level function to get the level
    - 3) Use a global variable to store the max value or pass it by refrence  