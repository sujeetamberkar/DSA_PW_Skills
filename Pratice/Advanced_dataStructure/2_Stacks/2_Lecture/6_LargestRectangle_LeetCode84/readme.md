# Largest Rectangle in Histogram Calculation

## Steps
1. **Calculate Next Smallest Index**: 
   - Iterate from right to left.
   - Use a stack to keep track of indices.
   - If the current bar is lower than the bar at the stack's top, pop the stack.
   - The next smallest index for the current bar is the index at the stack's top.
   - If the stack is empty, use `n`.

2. **Calculate Previous Smallest Index**: 
   - Iterate from left to right.
   - Use the same method as for the next smallest index.
   - If the stack is empty, use `-1`.

3. **Calculate Width for Each Bar**: 
   - The width is `nextSmallestIndex[i] - prevSmallestIndex[i] - 1`.

4. **Calculate Height for Each Bar**: 
   - The height is the value of the bar `v[i]`.

5. **Calculate Area for Each Bar**: 
   - The area is `width * height`.

6. **Find Max Area**: 
   - Compare the area of each bar with the current max area and update it if necessary.

## Dry Run
Given the array: `[2, 1, 5, 6, 2, 3]`

### Next Smallest Index
Result: `[1, 6, 4, 6, 5, 6]`

### Previous Smallest Index
Result: `[-1, -1, 1, 2, 1, 4]`

### Calculate Area and Max Area
- For index 2: Width = `4 - 1 - 1 = 2`, Area = `5 * 2 = 10` (max area so far).

Final Max Area: `10`
