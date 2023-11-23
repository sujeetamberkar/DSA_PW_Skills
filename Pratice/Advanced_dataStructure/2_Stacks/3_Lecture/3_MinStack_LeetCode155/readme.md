# Method 1
    - 1) Solve it using TC O(N)
# Method 2:
    -2) While pushing each element in stack also push the smallest element
        TC O(1) but SC O(N)

# Method 3:
    - 1) Implementattion of stack using linked list or vector


# Method 4:
    Use a Varible to store minimum value,
    Store a sudo Value (FakeValue) in stack
    - 1) push (val)
    {
        if (val<min)
        {
            st.push (val + (val - min ))
        }
    }