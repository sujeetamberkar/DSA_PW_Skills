#include <iostream>
#include <unordered_map>
#include<unordered_set>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> answer;
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(target - nums[i]) != m.end())
        {
            answer.push_back(m[target - nums[i]]);
            answer.push_back(i);
        }
        else
            m[nums[i]] = i;
    }
    return answer;
}
int main()
{
    vector<int> v = {2, 7, 11, 15};
    int target = 9;
    vector<int> answer = twoSum(v, 9);
    for (int element : answer)
        cout << element << "\t";
}
