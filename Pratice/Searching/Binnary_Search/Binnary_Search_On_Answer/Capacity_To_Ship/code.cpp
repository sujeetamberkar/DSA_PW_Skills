/*

Question : 1011. Capacity To Ship Packages Within D Days
A conveyor belt has packages that must be shipped from one port to another within days days.
The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship
with packages on the conveyor belt (in the order given by weights). We may not load more weight
than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the
conveyor belt being shipped within days days.

Example 1:
Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5
Output: 15
Explanation:
A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
1st day: 1, 2, 3, 4, 5
2nd day: 6, 7
3rd day: 8
4th day: 9
5th day: 10



*/
#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int shipWithinDays(vector<int> &, int);
bool check(int mid, vector<int> &, int);

int main()
{
    vector<int> weights;
    int n;
    int days;

    cout << "Enter the number of weights: ";
    cin >> n;

    cout << "Enter the weights:" << endl;
    for (int i = 0; i < n; i++)
    {
        int weight;
        cin >> weight;
        weights.push_back(weight);
    }

    cout << "Enter the number of days: ";
    cin >> days;

    int result = shipWithinDays(weights, days);
    cout << "Minimum capacity: " << result << endl;

    return 0;
}
bool check(int mid, vector<int> &weights, int days)
{
    int n = weights.size();
    int temp_capacity = mid;
    int no_of_days = 0;

    for (int i = 0; i < n; i++)
    {
        if (temp_capacity >= weights[i])
        {
            temp_capacity = temp_capacity - weights[i];
        }
        else
        {
            no_of_days++;
            temp_capacity = mid;
            temp_capacity = temp_capacity - weights[i];
        }
    }
    no_of_days++;
    if (no_of_days <= days)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int shipWithinDays(vector<int> &weights, int days)
{
    int n = weights.size();
    int sum = 0;
    int max_element = INT_MIN;
    
    // Calculate total weight and find the heaviest package
    for (int i = 0; i < n; i++)
    {
        sum += weights[i];
        if (max_element < weights[i])
        {
            max_element = weights[i];
        }
    }
    int low = max_element;
    int high = sum;
    int minCapacity = sum;
    int mid;

    // Binary search on ship's capacity
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (check(mid, weights, days))
        {
            minCapacity = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return minCapacity;
}
