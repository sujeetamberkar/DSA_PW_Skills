#include <vector>
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> m;
    vector<vector<string>> answer;
    for (string x : strs)
    {
        string temp = x;
        sort(temp.begin(), temp.end());

        if (m.find(temp) == m.end())
        {
            vector<string> v;
            v.push_back(x);
            m[temp] = v;
        }
        else
        {
            m[temp].push_back(x);
        }
    }
    for (auto x : m)
    {
        answer.push_back(x.second);
    }
    return answer;
}

int main()
{
    vector<string> v = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> answer = groupAnagrams(v);
    for (auto x : answer)
    {
        for (auto y : x)
            cout << y << "\t";
        cout << endl;
    }
}