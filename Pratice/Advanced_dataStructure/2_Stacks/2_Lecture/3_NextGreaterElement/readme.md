If we do brute force 
TC O(N ^2)
SC O(1)

array 
    3   1   2   5   4   6   2   3
    5   2   5   6   6   -1  3   -1


## Using STacks

    1) Revser Order
                                i
        3   1   2   5   4   6   2   3

                                    -1


        Stack 
        (3)
        check if any number in the stack is greater than the top of stack (POP)
        Answer [i] = stack of pop
        now push ith ---> stack

        if (top is NULL) push -1

        Remove, Answer , Push



   