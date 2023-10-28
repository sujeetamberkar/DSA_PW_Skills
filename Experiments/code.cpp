#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int score(vector<int> &);

int main()

{
    int n;
    int temp;
    cout << "Enter a number ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int answer = score(v);

    cout << answer;

    return 0;
}
int score(vector<int> &nums)
{
    int score_1 = 0;
    int score_2 = 0;
    vector<int> store(nums.size());
    int i = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i % 2 == 0)
        {
            score_1 += nums[i];
        }

        else
        {
            score_2 += nums[i];
        }

        if (nums[i] % 2 == 0)
        {
            reverse(nums.begin() + i+ 1, nums.end());
        }
       
    }

    cout << "Score 1: " << score_1 << "\t"
         << "Score 2: " << score_2 << "\n";
    return score_1 - score_2;
}
