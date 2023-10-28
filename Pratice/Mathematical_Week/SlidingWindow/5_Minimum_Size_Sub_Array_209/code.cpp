// Question:
// Find the length of the smallest contiguous subarray of a given array with a sum greater than or equal to a specified target.
// If no such subarray exists, return 0.

// Logic:
// Use the sliding window technique:
// 1. Expand the window by moving the 'j' pointer and adding to the sum.
// 2. When sum becomes >= target, try to minimize the window by moving the 'i' pointer.
// 3. Keep track of the minimum length of subarray found that satisfies the condition.

#include <iostream>
#include <vector>
using namespace std;

int minSubArrayLen(int , vector <int> & );
int main ()
{
    int target = 7;
    int nums []= {1,2,4,5,3,4,3};
    int n = sizeof(nums)/sizeof(nums[0]);
    vector < int > v (nums,nums+n);
    int answer = minSubArrayLen(target,v);
    cout <<answer;

}
int minSubArrayLen(int target, vector <int> & nums)
{
    int n = nums.size();
    int i = 0;
    int j = 0;
    int min_len = INT_MAX;
    int len = 0;
    int sum = 0;

    while (j < n)
    {
        sum = sum + nums[j];
        while (sum >= target)
        {
            len = j - i +1;
            min_len = min (len, min_len);
            sum = sum - nums[i];
            i++;
        }
        j++;
    }
    if (min_len == INT_MAX)
    {
        return 0;
    }
    return min_len;
    }    


