/*
**Question Explanation:**
- This program aims to determine the number of distinct ways to climb a staircase with 'n' steps.
  At each step, one can either take a 1-step or a 2-step jump.

**Mathematical/Recursive Expression:**
- Let f(n) represent the number of ways to climb 'n' steps.
  f(n) = f(n-1) + f(n-2)
- Base cases:
  f(1) = 1 (one way to climb one step)
  f(2) = 2 (two ways to climb two steps: 1+1 or 2)

**Solution Explanation:**
- The solution employs a top-down dynamic programming approach (also termed as memoization).
- A memoization table is used to store the results of previously computed subproblems to prevent redundant calculations.
- Recursive calls are made to determine the number of ways to reach the current step based on the previous two steps.

*/

#include <iostream>
#include<vector>
using namespace std;

int climbStairs(int );
int climbStairsMemo(int , vector<int> &);

int main()
{
    // Find and print the number of ways to climb a staircase with 5 steps
    cout << climbStairs(5);
    return 0;
}

int climbStairs(int n)
{
    // Initialize memoization table with -1 (indicating not computed)
    vector<int> memo(n + 1, -1);
    // Call the memoization function to compute the result
    return climbStairsMemo(n, memo);
}

int climbStairsMemo(int n, vector<int> &memo)
{
    // If result for current 'n' is already computed, return it
    if (memo[n] != -1)
        return memo[n];

    // Base cases
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    // Compute the result for current 'n' by summing the results for 'n-1' and 'n-2'
    memo[n] = climbStairsMemo(n - 1, memo) + climbStairsMemo(n - 2, memo);
    return memo[n];
}
