#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
void Buuble_Sort(vector<int> &);
void display_array(vector<int> &);

int main()
{
    vector<int> v;
    // Populating the vector with some sample data
    v.push_back(5);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);

    // Calling the Bubble Sort function to sort the vector
    Buuble_Sort(v);   
    // Displaying the sorted array
    display_array(v); 
}

// Bubble Sort function
void Buuble_Sort(vector<int> &a)
{
    // Outer loop represents number of passes
    for (int i = 0; i < a.size()-1; i++)
    {
        // Each Pass:
        for (int j = 0 ; j < a.size()-1; j++)  // Note: We can optimize the inner loop 
        // by subtracting 'i' as the last 'i' elements are already in place
        {
            // Compare adjacent elements and swap them if they're in the wrong order
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }

        // After each pass, the largest element 'bubbles' up to its correct position at the end
        // Example after first pass: If original array was [5, 1, 4, 3, 2], it becomes [1, 4, 3, 2, 5]
    }
}

// Function to display elements of the vector
void display_array(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
}

/*
Time Complexities of Bubble Sort:
Best-case: O(n) when the list is already sorted. 
However, with the current implementation, even if the list is sorted, 
the algorithm still goes through all the passes.  Optimized Bubble Sort can handle this 
scenario better.

Average-case: O(n^2) as the list is sorted in 'n' passes and each pass takes 'n' time.
Worst-case: O(n^2) when the list is reverse sorted.

1) In a stable sort, if two elements A and B are equal and appear in the input as A before B,
   then A will still precede B in the sorted output.
2. Stability in sorting ensures that the original relative order of equal elements remains unchanged.
3. This is particularly useful when sorting based on multiple criteria, as stability ensures the results of prior sorts are preserved.
*/
