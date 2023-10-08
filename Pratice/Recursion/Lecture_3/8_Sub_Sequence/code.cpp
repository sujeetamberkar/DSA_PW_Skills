// There should be no repeatataion
// Subsequence
//     Formed by deleting zero or more elements without changing order.
//     Example : {1,3,5} is  a subsequence of {1,2,3,4,5} of Kvalue = 3
// Subset:
//     Any combination of elements without considering order.
//     In the context of arrays, similar to subsequences
//     Example : {3,1}, {1}, {1,2,3} is subset of {1,2,3,4,5}

// Subarray:
//     A contiguous segment of the array.
//     Exaple: {1,2,3}, {2,3,4} are subarray of {1,2,3,4,5}

#include <iostream>
#include <vector>
using namespace std;
void printSubset(int arr[], int n, int index, vector<int> answer, int k)
{
    if (index == n)
    {
        if (answer.size() == k)
        {
            for (int i = 0; i < answer.size(); i++)
            {
                cout << answer[i] << " ";
            }
            cout <<endl;
        }

        return;
    }
    if (answer.size()+ (n-index)<k)
    {
        return;
    }
    printSubset(arr, n, index + 1, answer, k);
    answer.push_back(arr[index]);
    printSubset(arr, n, index + 1, answer, k);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    printSubset(arr, n, 0, v, k);
}