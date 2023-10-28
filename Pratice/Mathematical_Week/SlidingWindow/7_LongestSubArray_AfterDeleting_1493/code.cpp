#include <iostream>
#include <vector>
using namespace std;
int longestSubarray(vector<int> &);

int main()
{
    int nums[] = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]);
    vector<int> v(nums, nums + n);
    cout << longestSubarray(v);
}

int longestSubarray(vector<int> &nums)
{
    int k = 1;
    int n = nums.size();
    int i = 0;
    int j = 0;
    int flips = 0;
    int len = 0;
    int maxLen = 0;

    while (j < n)
    {
        if (nums[j] == 1)
        {
            j++;
        }

        else
        {
            if (flips < k)
            {
                flips++;
                j++;
            }
            else
            {
                // Calculate length
                len = j - i;
                maxLen = max(len, maxLen);

                // flips = l
                // i ko number after first 0
                while (nums[i] == 1)
                {
                    i++;
                }    // i will point to 0
                i++; // i will point to a number ahead of the first 0
                j++;
            }
        }
    }
    // Check for the last window
    len = j - i; // Changed here
    maxLen = max(len, maxLen);

    return maxLen - 1;
}