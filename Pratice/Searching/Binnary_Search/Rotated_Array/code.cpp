/*
 * Problem:
 * Given a rotated sorted array (an array initially sorted in ascending order
 * but then rotated at some unknown pivot), we need to find the position of a target
 * element in it. If the target is not found, return -1.
 *
 * Logic:
 * 1. Find the pivot or rotation point in the array. This is where the array is rotated.
 * 2. Depending on the position of the target (either left or right of the pivot),
 *    search for the target in the appropriate half using binary search.
 */

#include <iostream>
#include <vector>
using namespace std;

// Function prototype
int search(vector<int> &, int);

int main()
{
    vector<int> a;
    int target = 0;

    // Sample input data
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    a.push_back(0);
    a.push_back(1);
    a.push_back(2);

    // Find the location of the target and print it
    int location = search(a, target);
    cout << location;
}

int search(vector<int> &nums, int target)
{
            // 1. Initial Setup:
        int n = nums.size();
        
        // If the array is empty, return -1
        if (n == 0) return -1;
        
        // If there's only one element, check if it's the target
        if (n == 1) return (nums[0] == target) ? 0 : -1;
        
        // 2. Finding the Pivot:
        // The pivot is the smallest element and indicates where the rotation happened
        int low = 0, high = n - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;

            // If the middle element is greater than the last element,
            // the pivot lies to the right of mid
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } 
            // Otherwise, the pivot lies to the left of mid
            else {
                high = mid;
            }
        }

        // Now, low points to the pivot

        // 3. Determine Search Range:
        // Figure out in which half of the array our target lies
        int pivot = low;
        low = 0, high = n - 1;
        if (target >= nums[pivot] && target <= nums[high]) {
            // If target is in the right half of the array
            low = pivot;
        } else {
            // If target is in the left half of the array
            high = pivot;
        }

        // 4. Regular Binary Search:
        // Search for the target within the determined half
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid; // Target found!
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // 5. Not Found:
        // If the loop completes without returning, the target isn't in the array
        return -1;

}
