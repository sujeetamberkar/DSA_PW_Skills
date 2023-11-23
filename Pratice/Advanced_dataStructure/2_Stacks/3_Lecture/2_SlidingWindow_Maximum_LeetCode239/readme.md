- 1) Find the next greatest element (INDEX)
- 2) If the next greater element is out of the window, that means the number itself is the maximum
- 3) Check if the next greater of the next greater is also in the window

- 4) Slding window + stack (GreatestNext Element)


# Maximum Sliding Window Calculation

## Objective
Calculate the maximum value in each sliding window of size `k` in an array.

## Code Explanation
1. **Special Case**:
   - If `k` is 1, each element is the maximum of its own window.

2. **Initialization**:
   - A vector `answer` is initialized to store the maximum values for each window.
   - A vector `nextGreaterIndex` is used to store the index of the next greater element for each position in the array.
   - A stack `st` is used to assist in populating `nextGreaterIndex`.

3. **Calculate Next Greater Index**:
   - Iterate backwards through `nums`.
   - Use the stack to maintain the indices of elements in descending order.
   - Pop from the stack until the current element is less than or equal to the element at the index at the top of the stack.
   - If the stack is not empty, set `nextGreaterIndex[i]` to the index at the top of the stack.
   - Push the current index onto the stack.

4. **Find Max in Each Window**:
   - Iterate over `nums` with the window's starting index `i`.
   - Ensure `j` is not behind `i`.
   - Initialize `max_number_in_window` with `nums[j]`.
   - Increment `j` until it reaches the end of the current window.
   - If `nextGreaterIndex[j]` is outside the current window, stop and set the current window's maximum to `max_number_in_window`.
   - Store the maximum value of the current window in `answer`.

5. **Return Answer**:
   - The `answer` vector contains the maximum value for each sliding window.

## Dry Run
Given the array: `[1, 3, -1, -3, 5, 3, 6, 7]` with `k = 3`

### Next Greater Index Calculation
- Start with `nextGreaterIndex` initialized to `[8, 8, 8, 8, 8, 8, 8, 8]`.
- Traverse the array from the end and fill `nextGreaterIndex` using a stack.

Resulting `nextGreaterIndex`: `[1, 4, 4, 4, 6, 6, 7, 8]`

### Sliding Window Maximum Calculation
- Start with `answer` initialized to the size of `n - k + 1`.

- For window starting at index 0: Maximum is `3`.
- For window starting at index 1: Maximum is `5`.
- For window starting at index 2: Maximum is `5`.
- For window starting at index 3: Maximum is `5`.
- For window starting at index 4: Maximum is `6`.
- For window starting at index 5: Maximum is `7`.

### Final Answer
- `answer = [3, 5, 5, 5, 6, 7]`

Each element in `answer` corresponds to the maximum value in the sliding window starting at that index.

## Conclusion
The function `maxSlidingWindow` efficiently computes the maximum values for each sliding window of size `k` in the array.
