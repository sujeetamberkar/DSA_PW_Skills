# Call Stack for pip Function

The call stack is a data structure that stores information about the active subroutines (functions) of a program. Each time a function is called, a new frame is added to the stack. When the function finishes executing, its frame is removed. This is how recursion is managed in most programming languages.


For the given program:

```
void pip(int n) 
{
    if (n == 0)
    {
        return;
    }
    cout << "Pre " << n << endl;
    pip(n-1);
    cout << "In " << n << endl;
    pip(n-1);
    cout << "Post " << n << endl;
}

int main() 
{
    pip(3);
    return 0;
}

```

Let's break down the call stack as the program runs:

1) Initially, the call stack has only the main function.

2) main calls pip(3). So, a new frame for pip(3) is added to the stack.

3) Inside pip(3), the program prints "Pre 3" and then calls pip(2). Thus, a new frame for pip(2) is added to the stack.

4) Similarly, pip(2) calls pip(1), and pip(1) further calls pip(0).

5) pip(0) has a base condition to return immediately, so its frame is removed from the stack. The control returns to pip(1).

6) After the first recursive call in pip(1), it prints "In 1", and then calls pip(0) again. The same process repeats, and we return to pip(1), which now prints "Post 1". After this, the frame for pip(1) is removed from the stack.

7) This pattern continues until the control is returned back to pip(3).

8) Finally, after pip(3) finishes its execution, control returns to main, and the program ends.

```
|            |
|------------|
| pip(0)     | <-- Recursion depth reached when n becomes 0
|------------|
| pip(1)     | <-- pip(1) calls pip(0), prints "In 1", calls pip(0) again, then prints "Post 1"
|------------|
| pip(2)     | <-- pip(2) calls pip(1), prints "In 2", calls pip(1) again, then prints "Post 2"
|------------|
| pip(3)     | <-- Starting point after "Pre 3" is printed
|------------|
| main()     | <-- Initial state
|------------|

```

Note: The stack grows downwards in this visualization. When a function completes, its frame is removed, and the stack "shrinks" upwards.

This visualization gives a snapshot of the program's execution at a given point in time. As the pip function is recursive, the call stack will reach its maximum depth when n becomes 0, and then it will gradually shrink back as the recursive calls return and the function continues its execution.




