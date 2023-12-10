#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool canArrange(vector<int> &arr, int k)
{
    unordered_map<int, int> m;

    for (int element : arr)
    {
        element = ((element % k) + k) % k;
        m[element]++;
    }
    if (m.find(0) != m.end())
    {
        if (m[0] % 2 != 0)
            return false;
        m.erase(0);
    }

    for (auto x : m)
    {
        int ele = x.first;
        int rem = k - ele;
        if (m.find(rem) == m.end())
            return false;
        if (m[rem] != m[ele])
            return false;
    }
    return true;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 10, 6, 7, 8, 9};
    int k = 5;

    cout << canArrange(arr, k);
}