# Comparison: Merge Sort vs Quick Sort

| Feature                | Merge Sort         | Quick Sort          |
|------------------------|:------------------:|:------------------:|
| Best-case Complexity   | \(O(n \log n)\)    | \(O(n \log n)\)     |
| Average Complexity     | \(O(n \log n)\)    | \(O(n \log n)\)     |
| Worst-case Complexity  | \(O(n \log n)\)    | \(O(n^2)\)          |
| Space Complexity       | \(O(n)\)           | \(O(\log n)\)       |
| Stability              | Yes                | No                  |
| Applications           | - Linked list <br> - Inversion Count | Quick Select |

## Notes:

- While both Merge Sort and Quick Sort have an average time complexity of \(O(n \log n)\), the worst-case time complexity for Quick Sort can be \(O(n^2)\) if not optimized.
- Merge Sort's best, average, and worst-case time complexities are all \(O(n \log n)\).
- Merge Sort requires additional space to store the divided halves, leading to a space complexity of \(O(n)\).
- Quick Sort, on the other hand, sorts in-place and requires only a stack depth of \(O(\log n)\) for recursion.
- Merge Sort maintains the relative order of equal elements, making it stable. Quick Sort does not guarantee this.
- Merge Sort is particularly useful for sorting linked lists and for counting inversions in a sequence.
- Quick Sort is often used in the Quick Select algorithm, which is used to find the kth smallest (or largest) element in an unordered list.
