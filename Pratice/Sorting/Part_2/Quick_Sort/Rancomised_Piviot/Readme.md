
### QuickSort: Pivot at Start vs. Pivot at Mid

#### Pivot at Start:

In this version of the quicksort algorithm, the pivot is chosen as the first element of the array/sub-array.

#### Pivot at Mid:

In this version of the quicksort algorithm, the pivot is chosen as the middle element of the array/sub-array.

---

### Dry Run with `{5,1,8,2,7,6,3,4}`:

#### Pivot at Start:

1. Initial array: `5,1,8,2,7,6,3,4`
2. Pivot: `5`
3. After partitioning: `4,1,3,2,5,7,8,6`
4. Recur for left sub-array: `4,1,3,2`
5. Recur for right sub-array: `7,8,6`

Continuing recursively, the final sorted array is: `1,2,3,4,5,6,7,8`

#### Pivot at Mid:

1. Initial array: `5,1,8,2,7,6,3,4`
2. Pivot: `2` (middle of the array)
3. After partitioning: `1,5,8,7,6,3,4,2`
4. Recur for left sub-array: `1`
5. Recur for right sub-array: `5,8,7,6,3,4`

Continuing recursively, the final sorted array is: `1,2,3,4,5,6,7,8`

---

### Dry Run for Worst-Case Scenario: `{1,2,3,4,5,6,7,8}`:

#### Pivot at Start:

1. Initial array: `1,2,3,4,5,6,7,8`
2. Pivot: `1` (first element)
3. After partitioning: `1,2,3,4,5,6,7,8` (no change as `1` is the smallest)
4. Recur for left sub-array: No left sub-array.
5. Recur for right sub-array: `2,3,4,5,6,7,8`

Continuing recursively:

6. Pivot: `2`
7. After partitioning: `2,3,4,5,6,7,8` (no change as `2` is the smallest)
8. Recur for left sub-array: No left sub-array.
9. Recur for right sub-array: `3,4,5,6,7,8`

This pattern continues, and you can see that the partition is always unbalanced, with one sub-array having a size of \( n-1 \).

#### Pivot at Mid:

1. Initial array: `1,2,3,4,5,6,7,8`
2. Pivot: `4` (middle element)
3. After partitioning: `1,2,3,8,5,6,7,4`
4. Recur for left sub-array: `1,2,3`
5. Recur for right sub-array: `8,5,6,7`

For the left sub-array:

6. Pivot: `2`
7. After partitioning: `1,3,2`
8. Recur for left sub-array: `1`
9. Recur for right sub-array: `3`

For the right sub-array:

10. Pivot: `5` (middle of the right sub-array)
11. After partitioning: `8,7,6,5`
12. Recur for left sub-array: `8,7,6`
13. Recur for right sub-array: No right sub-array

This continues but is more balanced than the "Pivot at Start" version.

---

#### Analysis:

The "Pivot at Start" version is clearly a worst-case scenario for already sorted arrays. It gives a time complexity of \( O(n^2) \) in this case. On the other hand, the "Pivot at Mid" version, even in its worst-case, is relatively more balanced and is less likely to degrade to \( O(n^2) \) in typical scenarios.
