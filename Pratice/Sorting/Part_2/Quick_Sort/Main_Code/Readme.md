
# Quicksort Dry Run

### Initial Array:
\[5, 1, 8, 2, 7, 6, 3, 4\]

### Step 1: Choose Pivot
- **Pivot = 5**

### Step 2: Partition
- Count elements < pivot.
  - 4 elements < 5.
- Set pivot index.
  - Index = Count + Starting Index = 4

#### Process:
1. `i` starts from beginning, `j` starts from end.
2. Move `i` until element > pivot is found.
3. Move `j` until element < pivot is found.
4. Swap elements at `i` and `j`.
5. Repeat until `i` and `j` cross.

#### Progress:
1. \[5, 1, 8, 2, 7, 6, 3, 4\]
2. \[7, 1, 8, 2, 5, 6, 3, 4\]
3. \[4, 1, 8, 2, 5, 6, 3, 7\]
4. \[4, 1, 3, 2, 5, 6, 8, 7\]
5. \[4, 1, 3, 2, 5, 6, 8, 7\] - Pivot in place.

### Step 3: Recursion
- **Left Sub-array**: \[4, 1, 3, 2\]   (Start, Piviot -1)
- **Left Sub-array**: \[4, 1, 3, 2\]   (Piviot +1, End)

### Not stable 
-  There is no order followed 

### Application of Quick Sort 
  - 1) Internal SOrting 
  - 2) Quick Select 
  - 3) Whenever there is no need of stability 
