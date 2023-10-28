#include <iostream>
#include <vector>
// Count the number of contiguous subarrays where the product of all its elements is less than k.

// Logic:
// 1. Two Pointers: Use two pointers, 'i' and 'j', to represent the current subarray.
// 2. Window Expansion: Move 'j' to expand the window, and update the product.
// 3. Product Check: If the product becomes >= k, move 'i' to contract the window until product is < k.
// 4. Counting Subarrays: Each time 'j' is moved, add 'j - i' to the count to account for all new valid subarrays.
// 5. Termination: Continue until 'j' reaches the end of the array.

using namespace std;
int numSubarrayProductLessthanThanK(vector < int > & , int);
int main ()
{

    int nums [] = {10,5,2,6};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 100;
    vector < int > v (nums, nums + n);
    cout << numSubarrayProductLessthanThanK(v,k);
}
int numSubarrayProductLessthanThanK(vector < int > &nums , int k)
{
    int n = nums.size();
    if (k <= 1)
    {
        return 0;
    }

    int i = 0;
    int j = 0;
    int count = 0;
    int product = 1;


    while (j < n)
    {
        product = product * nums[j];
        while (product >= k)
        {
            count = count + (j -i);
            product = product / nums [i];
            i++;
        }
        j++;
    }

    while ( i < n)
    {
        count = count + (j -i);
        product = product / nums[i];
        i++;
    }
    

    return count;
    



}
