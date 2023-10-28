#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 1, 6, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // cycle sort
    int i = 0;
    while (i < n)
    {
        int correct_index = arr[i] - 1;
        if (i == correct_index)
        {
            i++;
        }
        else
        {
            swap(arr[correct_index], arr[i]);
        }
    }
    for (int element : arr)
    {
        cout << element << " ";
    }
}
// At worst, We will have n-1 Swaps 