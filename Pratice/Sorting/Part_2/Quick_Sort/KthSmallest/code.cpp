// WAP to find the Kth Smallest element in an array using quick sort ?
// We can do this question using
// Selection Sort --- O (K * n )

// Quick Select
// Time Complexity O(n)

//  In quick Select we will have only one Call (Not 2 Call)
// Dont always put 2 calls

#include <iostream>
#include <algorithm>
using namespace std;
int kthSmallest_Element(int[], int, int,int k);
int partition(int[], int, int);
int main()
{
    int arr[] = {5, 1, 8, 2, 7, 6, 3, 4, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k =4;
    cout <<kthSmallest_Element(arr, 0, n - 1,k);
    
}
int kthSmallest_Element(int array[], int start_index, int end_index,int k)
{
    
    int piviot_index = partition(array, start_index, end_index);
    if (piviot_index+1==k)
    {
        return array[piviot_index];
    }

    else if (piviot_index +1 <k )
    {
        return kthSmallest_Element(array,piviot_index+1,end_index,k);
    }
    else 
    {
        return kthSmallest_Element(array, start_index, piviot_index - 1,k);
    }
}
int partition(int array[], int start_index, int end_index)
{
    int piviot_Element = array[(start_index + end_index) / 2];
    int count = 0;
    for (int i = start_index; i <= end_index; i++)
    {
        if (i == (start_index + end_index) / 2) ///////////NOTE CHANGES
        {
            continue;
        }
        if (array[i] <= piviot_Element)
        {
            count++;
        }
    }
    int piviot_index = count + start_index;
    swap(array[(start_index + end_index) / 2], array[piviot_index]);

    int i = start_index;
    int j = end_index;
    while (i < piviot_index && j > piviot_index)
    {
        if (array[i] <= piviot_Element)
        {
            i++;
        }
        if (array[j] >= piviot_Element)
        {
            j--;
        }
        else if (array[i] > piviot_Element && array[j] <= piviot_Element)
        {
            swap(array[i], array[j]);
            i++;
            j--;
        }
    }

    return piviot_index;
}