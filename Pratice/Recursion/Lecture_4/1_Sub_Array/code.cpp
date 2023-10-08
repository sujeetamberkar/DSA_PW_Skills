/*
Question:
Print all sub-arrays such that consecutive elements in the sub-arrays are also consecutive in the original array.

Brief Logic:
To generate these sub-arrays, we utilize a recursive approach where for each element:
1. We either exclude it from the current sub-array and move to the next element.
2. Or, if the vector is empty (indicating the start of a new sub-array) or the previous element in the original array
   matches the last element in the vector (ensuring consecutiveness), we include it in the current sub-array and move to the next element.
*/

#include <iostream>
#include <vector>
using namespace std;

void subArray(vector<int> v, int arr[], int n, int index)
{
    // Base case: If we've considered all elements
    if (index == n)
    {
        // Print the current sub-array
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    // Exclude the current element and move to the next
    subArray(v, arr, n, index + 1);

    // Check if either the vector is empty (starting a new sub-array) or
    // the previous element in the original array is the last element in the vector
    // ensuring that consecutive elements in the sub-arrays are also consecutive in the original array.
    if ((v.size() == 0) || (arr[index - 1] == v[v.size() - 1]))
    {
        v.push_back(arr[index]);  // Include the current element
        subArray(v, arr, n, index + 1);  // And move to the next
    }
}
int main()
{
    int array[] = {1, 2, 3, 4};
    int n = sizeof(array) / sizeof(array[0]);
    vector<int> v;

    /*
        for (int i = 0 ; i <n ; i ++) // Starting element
        {
            for (int k = i;  k < n ; k++) // Ending element , K only denotes number of elements
            {
                for (int j = i;j<=k;j++) // Current element
                {
                    cout <<array[j];
                }
                cout <<endl;
            }
        }
    */

    subArray(v, array, n, 0);

    return 0;
}