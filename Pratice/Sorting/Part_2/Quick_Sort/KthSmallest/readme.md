
# Kth Smallest Element using Quick Select

## Introduction
The provided program finds the \(k\)th smallest element in an array using the Quick Select algorithm. Quick Select is a selection algorithm closely related to the Quick Sort sorting algorithm. It works by narrowing down the search range by half at each recursion level, similar to a binary search.

## Time Complexity
The average case time complexity for Quick Select is \(O(n)\), whereas its worst-case time complexity can be \(O(n^2)\) (though the average case is typically encountered with well-chosen pivots).

## Code Explanation

1. **Purpose**: 
   - Find the \(k\)th smallest element in an array.
   
2. **Quick Select Approach**: 
   - In this approach, the partitioning step of quicksort is employed. However, instead of recursively processing both sides of the partition, only one side is processed. This reduces the time complexity to \(O(n)\) on average.
   
3. **Code Breakdown**: 
   - The `main()` function initializes an array and a variable `k` (for the \(k\)th smallest element). It then calls the `kthSmallest_Element()` function and prints the returned result.
   - The `kthSmallest_Element()` function recursively finds the \(k\)th smallest element. It partitions the array and determines which side of the partition to process further based on the pivot's index and the desired \(k\).
   - The `partition()` function is responsible for choosing a pivot and rearranging the array such that all elements to the left of the pivot are less than the pivot, and all elements to the right of the pivot are greater than the pivot.

## Dry Run

1. **Initialization**: 
   - `arr = [5, 1, 8, 2, 7, 6, 3, 4, -8]`
   - `n = 9`
   - `k = 4`
   
2. Call `kthSmallest_Element(arr, 0, 8, 4)`:
   - Pivot element: 7
   - Pivot index after partitioning: 6
   - Array after partitioning: `[-8, 1, 5, 2, 6, 3, 4, 8, 7]`
   - Since the pivot index is greater than \(k\), we search on the left side.
   - Recursive call: `kthSmallest_Element(arr, 0, 5, 4)`

3. Call `kthSmallest_Element(arr, 0, 5, 4)`:
   - Pivot element: 5
   - Pivot index after partitioning: 3
   - Array after partitioning: `[-8, 1, 2, 3, 6, 5, 4, 8, 7]`
   - Since the pivot index is equal to `k-1`, we've found the \(k\)th smallest element.
   - Return value: 3
   
4. **Output**: 3


## Time and Space Complexity of Quick Select

### Time Complexity:

**Best and Average Case**: \(O(n)\)
- In the best and average scenarios, the partition function divides the array roughly in half with each recursive call.
- For every recursion, the size of the array to be processed is reduced by approximately half, leading to the recurrence relation \(T(n) = T(n/2) + n\). Solving this recurrence gives a complexity of \(O(n)\).

**Worst Case**: \(O(n^2)\)
- The worst case happens when the array is already sorted or is in reverse order. In such situations, the partition function divides the array such that one part contains just one element. This results in the recurrence relation \(T(n) = T(n-1) + n\), which simplifies to \(O(n^2)\).
- However, it's worth noting that this worst-case scenario is rare, especially if good strategies for pivot selection, such as random choice or the median-of-three method, are employed.

### Space Complexity: \(O(\log n)\)
- The space complexity of Quick Select is determined by the maximum depth of recursion, which, on average, is \(O(\log n)\). This space is required for the call stack.

