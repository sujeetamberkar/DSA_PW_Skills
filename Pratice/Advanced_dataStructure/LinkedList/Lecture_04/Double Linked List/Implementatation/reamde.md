+------+--------+------+    +------+--------+---    ---+ +------+--------+
| Prev | Data | Next | |    Prev | Data | Next |     | Prev | Data | Next |
+------+--------+------+    +------+--------+---    ---+ +------+--------+-

## Explanation

- `Prev` is a pointer to the previous node in the list.
- `Data` is the storage for the node's data.
- `Next` is a pointer to the next node in the list.

The first node's `Prev` pointer and the last node's `Next` pointer point to `NULL`, indicating the boundaries of the list.


## Advantage 
    - 1) IF any node is given, then we can acess the entire linked list 


## Circular linked list 
    We check 
    head != temp -> next

## Similarly for Circular double linked list