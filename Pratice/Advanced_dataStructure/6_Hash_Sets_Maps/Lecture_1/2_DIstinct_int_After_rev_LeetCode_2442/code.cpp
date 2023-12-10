#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int countDistinctIntegers(vector<int> &nums);
int main()
{
    vector<int> nums{1, 13, 10, 12, 31};
    int answer = countDistinctIntegers(nums);
}
int countDistinctIntegers(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int temp = nums[i];
        int sum = 0;
        while (temp)
        {
            sum = sum *10 + temp % 10;
            temp = temp / 10;
        }
        nums.push_back(sum);
    }


    unordered_set<int> s;
    for (int element : nums)
    {
        s.insert(element);
    }
    nums.clear();
    for (int element : s)
    {
        nums.push_back(element);
    
    }

    return s.size();
}