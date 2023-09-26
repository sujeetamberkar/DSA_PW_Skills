#include <vector>
#include <iostream>
using namespace std;
vector<int> searchRange(vector<int> &, int);
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
    int target = 8;

    vector<int> answer;
    answer = searchRange(v, target);

    cout << "First occrence " << answer[0] << endl;
    cout << "Last occrence" << answer[1] << endl;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int first_occurence = -1;
    int last_occurence = -1;

    int high = nums.size() - 1;
    int low = 0;
    int mid;
    vector<int> v;
    // Finding first occurrence
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            first_occurence = mid;
            high = mid - 1;
        }
        else if (target > nums[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Reset high and low for searching last occurrence
    high = nums.size() - 1;
    low = 0;

    // Finding last occurrence
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            last_occurence = mid;
            low = mid + 1;
        }
        else if (target > nums[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    v.push_back(first_occurence);
    v.push_back(last_occurence);
    return v;
}
