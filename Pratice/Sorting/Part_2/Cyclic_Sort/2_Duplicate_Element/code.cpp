// Question:
// Given an array containing 'n + 1' integers where each integer is between 1 and n (inclusive),
// prove that at least one duplicate number must exist. Return any duplicate number found.

// Logic:
// The idea is to place each number at its correct position in the array.
// If the current number is already at its correct position, then it's a duplicate.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findDuplicate(vector<int> &);

int main()
{
    int array[] = {3, 1, 3, 4, 2};
    int n = sizeof(array) / sizeof(array[0]);

    vector<int> v(array, array + n);
    int answer = findDuplicate(v);
    cout << answer;
}
int findDuplicate(vector<int> &nums)
{
    int i = 0;
    while (i < nums.size())
    {
        int correct_index = nums[i];
        if (nums[correct_index] == nums[i])
        {
            // If the number is at its correct index, then it's a duplicate.
            return nums[i];
        }
        else
        {
            swap(nums[correct_index], nums[i]);
            // Swap to place the number at its correct position.

        }
    }
    return -1;
}
int findDuplicate2(vector<int> &nums)
{
    int i = 0;
    while (i < nums.size())
    {
        if (nums[i] != nums[nums[i]])
        {
            swap(nums[i], nums[nums[i]]);
        }
        else
        {
            return nums[i];
        }
    }
    return -1;
}