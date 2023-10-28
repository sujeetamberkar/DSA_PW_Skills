#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> array_Partition(vector<int> &);
int main()
{
    int array[] = {2, 3, 5, 8, 10, 8};
    int n = sizeof(array) / sizeof(array[0]);
    vector<int> v(array, array + n);
    vector<vector<int>> answer = array_Partition(v);

    for (vector<int> sub_vector : answer)
    {
        for (int element : sub_vector)
        {
            cout << element << " ";
        }
        cout << endl;
    }
}
vector<vector<int>> array_Partition(vector<int> &nums)
{
    vector<int> runningsum;
    vector<vector<int>> answer;
    runningsum.push_back(nums[0]);
    int n = nums.size();
    int piviot = -1;

    for (int i = 1; i < n; i++)
    {
        runningsum.push_back(runningsum[i - 1] + nums[i]);
    }

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (2 * runningsum[i] == runningsum[n - 1])
        {
            flag = true;
            piviot = i;
            break;
        }
    }
    vector<int> temp_vector1;

    if (!flag)
    {
        cout << "Cant be partiationed ";
        temp_vector1.push_back(0);
        answer.push_back(temp_vector1);
        return answer;
    }
    else
    {
        for (int i = 0; i <= piviot; i++)
        {
            temp_vector1.push_back(nums[i]);
        }
        answer.push_back(temp_vector1);

        vector<int> temp_vector2;
        for (int i = piviot + 1; i < n; i++)
        {
            temp_vector2.push_back(nums[i]);
        }
        answer.push_back(temp_vector2);

        cout << "Can be partitioned" << endl;
        return answer;
    }
}
