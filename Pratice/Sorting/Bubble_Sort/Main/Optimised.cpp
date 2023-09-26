#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
void Bubble_Sort(vector<int> &);
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

    // Calling the optimized Bubble Sort function to sort the vector
    Bubble_Sort(v);   
    display_array(v); 
}

void Bubble_Sort(vector<int> &a)
{
    bool swapping = false;

    // Outer loop represents number of passes
    for (int i = 0; i < a.size()-1; i++)
    {
        swapping = false;

        // Each Pass:
        for (int j = 0 ; j < a.size()-1-i; j++)  
        {
            // Compare adjacent elements and swap them if they're in the wrong order
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                swapping = true; // Mark that a swap has happened
            }
        }
        
        // If no swaps occurred in the inner loop, array is already sorted
        if (!swapping)
            break;
    }
}

// Function to display elements of the vector
void display_array(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
}

/*
Time Complexities of Optimized Bubble Sort:
Best-case: O(n) when the list is already sorted as it breaks out of the loop.
Average-case: O(n^2) as the list is sorted in 'n' passes and each pass takes 'n' time.
Worst-case: O(n^2) when the list is reverse sorted.
*/
