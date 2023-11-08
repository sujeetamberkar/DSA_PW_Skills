## Overview
The `flatten` function is designed to flatten a doubly linked list where nodes can have a child pointer that points to a separate doubly linked list. These child lists may also have one such child pointer themselves, creating a multilevel data structure.



# SOlution

    -1) a while loop checking all the elements 

    1   2   3   4   5   6   ->NULL
            |
            7   8   9   10
                |
                11 - 12

    - 2) When You enconuter 3, (ANY node that has child)
        FLATEN it using recursion 

    - 3)   
    1   2   3   4   5   6   ->NULL
            |
            7   8   11  12  9   10

    - 4) Make temp -> child (STORE the next of temp) (A)

    - 5) Temp- > next = CHILD's Address

    - 6) In the child, Itteratre till NULL and then append the last child->next = STORE Address
    A->prev = child's last address

    -7) IF ais NULL, lea

- **Iterate through the list:** Start with the head and move through each node.
- **Encounter a node with a child:** When a node with a child is found, recursively flatten the child list.
- **Integrate the child list:** Insert the flattened child list in place of the original child pointer.
- **Re-adjust pointers:** Ensure the `next` and `prev` pointers are correctly set to maintain the doubly linked list's properties.

## Diagram
The flattening process can be visualized as follows:

\`\`\`
Initial list:
1 - 2 - 3 - 4 - 5 - 6
        |
        7 - 8 - 9 - 10
            |
            11 - 12

After flattening node 3's child:
1 - 2 - 3 - 7 - 8 - 11 - 12 - 9 - 10 - 4 - 5 - 6
\`\`\`

## Key Points
- **Temporary Storage:** Store the `next` of the current node before flattening the child list.
- **Child Processing:** Set the current node's `next` to the child, and recursively flatten it.
- **Tail Attachment:** After flattening, attach the stored `next` node to the end of the flattened child list.
- **Null Checks:** Always check for null before setting the `prev` pointer of any node.  (LINE, a->prev = c)
"""


 