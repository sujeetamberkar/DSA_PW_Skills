#include<iostream>
#include<climits>
#include <algorithm>
using namespace std;

float max_value(float, float);
float min_value(float, float);

int main()
{
    int arr[] = {5,3,10,3};
    int n = 4;

    // Print the original array
    for (int element : arr)
    {
        cout <<element<<" ";
    }
    cout << endl;

    // Initialize the minimum and maximum possible values for K
    float kMin = (float)(INT_MIN);
    float kMax = (float)(INT_MAX);

    // Flag to check whether the current K is valid or not
    bool flag = true;

    // Iterate through the array
    for(int i=0; i < n-1; i++)
    {
        // Check if current element is greater than or equal to the next
        if (arr[i] - arr[i + 1] >= 0)
        {
            // Update kMin if necessary. kMin is calculated based on the average 
            // of current and next element if current element is greater than next.
            kMin = max_value(kMin, (float) (arr[i] + arr[i + 1]) / 2.0); 
        }
        else 
        {
            // Update kMax if necessary. kMax is calculated based on the average 
            // of current and next element if current element is less than next.
            kMax = min_value(kMax, (float) (arr[i] + arr[i + 1]) / 2.0);
        }

        // If at any point kMin becomes greater than kMax, the K range is invalid
        if (kMin > kMax)
        {
            flag = false;
            break;
        }
    }

    // Calculate the integer range for K based on the float values of kMin and kMax
    int kMinimumRange = (kMin != (int)kMin) ? int(kMin + 1) : int(kMin);
    int kMaximumRange = int(kMax);

    if(flag)
        cout << "The range of k is [" << kMinimumRange << "," << kMaximumRange << "]";
    else
        cout << "-1";

    return 0;
}

// Function to return the maximum of two float numbers
float max_value(float a, float b)
{
    return (a >= b) ? a : b;
}

// Function to return the minimum of two float numbers
float min_value(float a, float b)
{
    return (a < b) ? a : b;
}
