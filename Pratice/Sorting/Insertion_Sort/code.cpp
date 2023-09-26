#include <iostream>
using namespace std;

int main()
{
    // Explanation of the sorting process with an example:
    /*
    SORTED/ UNSORTED PART
    Keep Swapping until the current element is in its correct position.
    
     1)         5 | (3) 1 4 2
              3 5 | 1 4 2
              
     2)       3 5 | (1) 4 2
            1 3 5 | 4 2
            
     3)     1 3 5 | (4) 2
          1 3 4 5 | 2
          
     4)   1 3 4 5 | (2)
        1 2 3 4 5
    */

    // Declaring and initializing the array and other variables.
    int n = 5;
    int j;
    int arr[] = {5, 3, 1, 4, 2};

    // Display the unsorted array.
    for (int ele : arr)
    {
        cout << ele << " ";
    }

    // Insertion Sort Algorithm.
    for (int i = 1; i < n; i++)
    {
        j = i;
        // For each element, we move it left until it's greater than the element to its left.
        while (j > 0 && arr[j] < arr[j - 1]) // Combined both conditions.
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    // Display the sorted array.
    cout << "\n After Sorting \n";
    for (int ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}

// Time and Space Complexity Analysis
/*
    The outer loop runs for n-1 times.
    The inner loop runs a variable number of times, up to i.

    Worst case: O(n^2) - This happens when the list is reverse sorted.
    Average Case: O(n^2) - On average, each element has to be moved halfway through the already sorted list.
    Best Case: O(n) - This occurs when the list is already sorted, and we only need to run through the list once.

    Stability: The algorithm is stable, as we are only swapping adjacent elements. Hence, equal elements retain their relative order.
*/
