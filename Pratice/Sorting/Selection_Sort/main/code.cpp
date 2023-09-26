// Selection Sort Algorithm to sort an array in ascending order.
// The core idea is to divide the input list into two parts: 
// a sorted sublist and an unsorted sublist.
// During each pass, the unsorted element with the smallest (or largest) value is moved to its proper position in the sorted list.

#include<iostream>
using namespace std;

int main()
{
    // Initializing the array with given values
    int arr[] = {5, 3, 1, 4, 2};
    int n = 5;

    // Printing the unsorted array
    for(int element : arr)
    {
        cout << element << " ";
    }
    cout << endl;

    // Selection sort algorithm
    for(int i = 0; i < n - 1; i++)
    {
        // Initializing the minimum value and its index
        int min = INT_MAX;
        int mindx = -1;
        
        // Searching for the smallest element in the unsorted sublist
        for(int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                mindx = j;
            }
        }

        // Swapping the found smallest element with the first element
        // of the unsorted sublist
        swap(arr[i], arr[mindx]);
    }

    // Printing the sorted array
    for(int element : arr)
    {
        cout << element << " ";
    }

    return 0;
}

// Space Complexity:
// Average Case: O(1) - Since we only use a constant amount of extra memory.
// Best Case: O(1) - Remains constant irrespective of the input size.
// Worst Case: O(1) - Remains constant irrespective of the input size.

// Time Complexity:
// Average Case: O(n^2) - We perform n-1 comparisons for the first element, n-2 for the second, and so on.
// Best Case: O(n^2) - Even if the array is sorted, we're still making comparisons.  In Bubble sort(it was O(N))

// Worst Case: O(n^2) - The nested loop structure always runs in quadratic time for any input.


// In Buuble, after ever pass the max goes to rightmost end but in selection sort the smallest goes to left most 

// Stability : IT IS NOT STABLE 
// USE IT WHEN YOU WANT TO REDUCE NUMBER OF SWAPPING 
// SORTING ONLY 2 min value 