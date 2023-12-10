# Algorithm 
1. **Function Purpose**: Checks if two strings `s` and `t` are anagrams of each other.

2. **Length Check**: If lengths of `s` and `t` are not equal, return `false`.

3. **Frequency Maps**: 
   - Create `freq` map for string `s`.
   - Increment count for each character in `s`.
   - Create `freq2` map for string `t`.
   - Increment count for each character in `t`.

4. **Anagram Check**: 
   - Iterate through `freq` map.
   - Compare frequency of each character in `freq` with its frequency in `freq2`.
   - If any frequency mismatch, return `false`.

5. **Return True**: If all checks pass, return `true`. 

# Dry Run
Certainly! Let's perform a dry run of the `isAnagram` function with the inputs `s = "anagram"` and `t = "nagaram"`.

1. **Check Lengths**:
   - Length of `s` (`"anagram"`) is 7.
   - Length of `t` (`"nagaram"`) is 7.
   - Lengths are equal, proceed.

2. **Create Frequency Map for `s`**:
   - freq['a'] = 3 (since 'a' appears 3 times in `s`)
   - freq['n'] = 1
   - freq['g'] = 1
   - freq['r'] = 1
   - freq['m'] = 1

3. **Create Frequency Map for `t`**:
   - freq2['n'] = 1
   - freq2['a'] = 3 (since 'a' appears 3 times in `t`)
   - freq2['g'] = 1
   - freq2['r'] = 1
   - freq2['m'] = 1

4. **Check Frequencies**:
   - Iterate through `freq`:
     - For 'a': freq['a'] = 3, freq2['a'] = 3 (match)
     - For 'n': freq['n'] = 1, freq2['n'] = 1 (match)
     - For 'g': freq['g'] = 1, freq2['g'] = 1 (match)
     - For 'r': freq['r'] = 1, freq2['r'] = 1 (match)
     - For 'm': freq['m'] = 1, freq2['m'] = 1 (match)

5. **Result**:
   - All characters have matching frequencies in `s` and `t`.
   - Function returns `true`.

Therefore, the `isAnagram` function correctly identifies "anagram" and "nagaram" as anagrams.


