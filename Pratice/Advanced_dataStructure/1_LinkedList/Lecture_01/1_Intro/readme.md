# Advantages of Array 
    If we know the memory location of the 1st element 
    Then we acess all the elements 

# Disadvantages
    - 1) Continues Memory allocation
        This is good but when we have a very big array  (Difficult to find continuous memory )

    - 2) Vector (useless coppy paste)


## Linked list
    """Mai ek bande ko janta hu wo ek bande ko janta hai"""
    - 1 ) Linked List
        If we have 5 variables (seprately)
        now we will establish some link between these 5 variables

        class NODE {
            int value;
            NODE * next; // Address of the next NODE

        }
         ______________________________      ______________________________
        |          |                  |     |          |                  |
        |    Val   |   Next Adress    |     |    Val   |   Next Adress    |
        |__________|__________________|     |__________|__________________|


     ______________________________      ______________________________    
    |          |                  |     |          |                  |
    |    10    |       x200       |---->|    20    |       x700       |
    |__________|__________________|     |__________|__________________|

```
 ________      ________      ________    
 |   |    |    |   |    |    |   |    |
 | 1 | x1 |--> | 2 | x2 |--> | 3 | x3 |
 |___|____|    |___|____|    |___|____|
                              |
                             NULL

```
 
