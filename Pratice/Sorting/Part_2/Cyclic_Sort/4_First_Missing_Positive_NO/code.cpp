#include<iostream>
#include<vector>
using namespace std;

int firstMissingPositive(vector<int>& );
int main ()
{
    int array [] = {3,4,-1,1};
    int n = sizeof(array)/ sizeof(array[0]);

    vector < int > v (array, array + n);

    int answer = firstMissingPositive(v);

    cout <<answer;

    cout <<endl;


}
int firstMissingPositive(vector<int>& nums) {
    // Get the number of elements in the list.
    int n = nums.size ();
    int i = 0;

    // This loop rearranges the numbers in the list to have the number i at the position (i-1)
    while (i < n) {
        // If the current number is non-positive, skip to the next number.
        if (nums[i] <= 0) {
            i++;
        }
        // The following conditions check:
        // 1. If the number is non-positive
        // 2. If the number is greater than the number of elements in the list
        // 3. If the current number is already in its correct position (i+1)
        // 4. If the position the number should go to already has this number.
        else if (nums[i] <= 0 || nums[i] > n || nums[i] == i + 1 || nums[nums[i] - 1] == nums[i]) {
            i++;
        }
        // If none of the above conditions are met, swap the current number with the number at the position it should be.
        else {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }

    // This loop finds the first position where the number doesn't match the index + 1.
    for (int i = 0; i < n; i++) {
        // If the number doesn't match the index + 1, return index + 1 as the first missing positive.
        if (nums[i] != i + 1) {
            return (i + 1);
        }
    }

    // If all numbers from 1 to n are present, return n+1 as the first missing positive.
    return n + 1;
}
/*
                  0   1    2   3   
    nums = {    (3)   4   -1   1   }

                -1    4    3   1   

                -1    (4)  3   1  

                -1     1   3   4  

                -1    (1)  3   4

                 1    -1   3   4        // Pass 

                 1    -1  (3)  4      // Pass 

                 1    -1   3  (4)   // Pass

*/

int GPT(vector<int>& nums) {
        int n = nums.size();

        // Place each number in its right position
        for (int i = 0; i < n; i++) {
            while (nums[i] >= 1 && nums[i] <= n && nums[nums[i]-1] != nums[i]) {
                swap(nums[nums[i]-1], nums[i]);
            }
        }

        // Find the first place where the number is not equal to its index + 1
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }
        return n + 1;
    }
