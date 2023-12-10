 -1) NOTE SubArray has to be continuous 
 -2) In +Ve it is simple
        Array = 3 2 4 5 2 8 1 2 7
    PrefixSum = 3 5 9 14 16 24 25 27 34
    Now Difference between any two index is 9, Thats our answer 
    Search Via Binarry Search 

Certainly! Let's focus solely on the logic of the algorithm for finding the number of subarrays whose sum equals a given value `k`:

### Logic for Subarray Sum Equals K Algorithm

1. **Cumulative Sum (Pre-Sum) Array**:
   - Compute a cumulative sum array (`presum`) where each element represents the sum of all elements up to that index in the original array (`nums`).

2. **Hash Map for Sum Frequencies**:
   - Use an `unordered_map` to keep track of the frequencies of cumulative sums encountered.

3. **Iterating Through the Cumulative Sum Array**:
   - For each element in the cumulative sum array (`presum`):
     - Check if the current cumulative sum is equal to `k`. If yes, increment `count`.
     - Calculate the difference between the current cumulative sum and `k` (named `rem`).
     - If `rem` is found in the hash map, it indicates that there exists a subarray ending at the current index which sums up to `k`. Add the frequency of `rem` from the map to `count`.
     - Update the hash map with the current cumulative sum, incrementing its frequency.

4. **Counting Subarrays with Sum `k`**:
   - The variable `count` maintains the number of subarrays whose sum equals `k`.

# Dry Run

`nums = [0, 0, 0, 0]` and `k = 0`

### Initial Setup
- `nums = [0, 0, 0, 0]`
- `k = 0`
- `presum = []` (Cumulative sum array)
- `unordered_map <int,int> m` (For tracking frequencies of sums)
- `count = 0` (To track the number of subarrays that sum to `k`)

### Step-by-Step Execution

1. **Calculate Cumulative Sum Array (`presum`)**:
   - `presum[0] = nums[0] = 0`
   - `presum[1] = nums[1] + presum[0] = 0 + 0 = 0`
   - `presum[2] = nums[2] + presum[1] = 0 + 0 = 0`
   - `presum[3] = nums[3] + presum[2] = 0 + 0 = 0`
   - Now, `presum = [0, 0, 0, 0]`

2. **Iterate Over `presum` and Update Map and Count**:
   - At index `0`:
     - `presum[0]` is `0`, which equals `k`. So, `count = 1`.
     - Update map: `m[0] = 1` (Frequency of sum `0` is now 1).
   - At index `1`:
     - `presum[1]` is `0`, which equals `k`. So, `count = 2`.
     - Since `m[0]` already exists, increment count by `m[0]`. Now, `count = 3`.
     - Update map: `m[0] = 2` (Frequency of sum `0` is now 2).
   - At index `2`:
     - `presum[2]` is `0`, which equals `k`. So, `count = 4`.
     - Since `m[0]` already exists, increment count by `m[0]`. Now, `count = 6`.
     - Update map: `m[0] = 3` (Frequency of sum `0` is now 3).
   - At index `3`:
     - `presum[3]` is `0`, which equals `k`. So, `count = 7`.
     - Since `m[0]` already exists, increment count by `m[0]`. Now, `count = 10`.
     - Update map: `m[0] = 4` (Frequency of sum `0` is now 4).

### Final Result:
- The `count` is `10`, meaning there are `10` subarrays in `[0, 0, 0, 0]` that sum up to `0`.

### Explanation of the Result:
- The ten subarrays are:
  - Four single-element subarrays `[0]`.
  - Three two-element subarrays `[0, 0]`.
  - Two three-element subarrays `[0, 0, 0]`.
  - One four-element subarray `[0, 0, 0, 0]`.
- Each time a `0` (which is equal to `k`) is encountered in `presum`, all previous occurrences of `0` contribute to new valid subarrays. Hence the count increases more than just linearly with each new `0` encountered.