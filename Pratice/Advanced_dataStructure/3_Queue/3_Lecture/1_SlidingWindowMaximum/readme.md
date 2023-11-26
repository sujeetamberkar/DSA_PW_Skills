# Maximum Sliding Window Calculation

This C++ program calculates the maximum value for each sliding window of size `k` within an array of integers.

## Algorithm Overview
The program uses a double-ended queue (deque) to track the indices of the elements in the current window. The deque maintains the indices in such a way that the elements they refer to are in decreasing order. This way, the front of the deque always contains the index of the maximum element for the current window.

## Code Explanation
1. **Special Case Handling**:
   - If `k` is `1`, each element forms a window by itself, and the input array is returned as-is.

2. **Initialization**:
   - A `deque` is initialized to maintain the indices of the elements in decreasing order.
   - A `vector<int>` named `ans` is used to store the maximum values of each window.

3. **Main Loop**:
   - Iterate over all elements in the input array.
   - If the current element is greater than the element at the back of the deque, pop elements from the back of the deque until this is no longer the case. This ensures elements in the deque are in decreasing order.
   - Add the current element's index to the back of the deque.
   - If the index at the front of the deque is outside the current window (i.e., less than the start index of the window), pop it from the front.
   - Once the index `i` is at least `k - 1`, indicating that the first window is fully traversed, start adding the front element of the deque to the answer list, as it represents the maximum of the current window.

## Function: `maxSlidingWindow`
- Parameters:
    - `vector<int>& nums`: The input array of integers.
    - `int k`: The size of the sliding window.
- Returns: A `vector<int>` containing the maximum value for each sliding window.

## Example Execution
Given the input array `[1, 3, -1, -3, 5, 3, 6, 7]` with `k = 3`, the algorithm works as follows:

1. Start with the deque empty and `ans` vector empty.
2. Iterate through the elements, pushing back the current index, and maintaining the decreasing order in the deque.
3. Once the first `k` elements have been processed, start recording the front of the deque as the maximum for each window.
4. Slide the window by one element, ensuring the deque's front is within the window and back elements are less than the current element.

The output after processing the input array will be `[3, 3, 5, 5, 6, 7]`, where each element is the maximum of its corresponding sliding window.



- Initialize an empty deque and an empty answer vector.
- Begin iterating through the array:

### Iteration 1: Element = 1
- Deque: `[]`
- Add index `0`.
- Deque becomes: `[0]`
- No output yet (window size not reached).

### Iteration 2: Element = 3
- Deque: `[0]`
- Element `3` is greater than `1` (deque back), so pop `0`.
- Add index `1`.
- Deque becomes: `[1]`
- No output yet (window size not reached).

### Iteration 3: Element = -1
- Deque: `[1]`
- Element `-1` is not greater than `3` (deque back), so just add index `2`.
- Deque becomes: `[1, 2]`
- Window size reached, output `nums[deque.front()]` which is `3`.

### Iteration 4: Element = -3
- Deque: `[1, 2]`
- Element `-3` is not greater than `-1` (deque back), so just add index `3`.
- Deque becomes: `[1, 2, 3]`
- Remove front if it's out of the current window. Window start is `1` (i-k+1), so remove `1`.
- Deque becomes: `[2, 3]`
- Output `nums[deque.front()]` which is `-1`.

### Iteration 5: Element = 5
- Deque: `[2, 3]`
- Element `5` is greater than `-1` and `-3` (deque back), so pop `2` and `3`.
- Add index `4`.
- Deque becomes: `[4]`
- Output `nums[deque.front()]` which is `5`.

### Iteration 6: Element = 3
- Deque: `[4]`
- Element `3` is not greater than `5` (deque back), so just add index `5`.
- Deque becomes: `[4, 5]`
- Output `nums[deque.front()]` which is `5`.

### Iteration 7: Element = 6
- Deque: `[4, 5]`
- Element `6` is greater than `3` (deque back), so pop `5`.
- Element `6` is also greater than `5`, so pop `4`.
- Add index `6`.
- Deque becomes: `[6]`
- Output `nums[deque.front()]` which is `6`.

### Iteration 8: Element = 7
- Deque: `[6]`
- Element `7` is greater than `6` (deque back), so pop `6`.
- Add index `7`.
- Deque becomes: `[7]`
- Output `nums[deque.front()]` which is `7`.

## Final Output
The resulting vector after processing all sliding windows is `3, 3, 5, 5, 6, 7`.

## Conclusion
The deque-based sliding window maximum calculation ensures efficient computation by avoiding redundant comparisons and maintaining a sorted index order within each window. Each step involves potential deque operations, such as adding an index, popping from the back to maintain order, or popping from the front if an index is outside the current window.
