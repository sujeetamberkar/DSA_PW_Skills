#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
bool closeStrings(string word1, string word2)
{

    if (word1.length() != word2.length())
        return false;

    unordered_map<char, int> m1, m2;
    unordered_map<int, int> h1, h2;

    for (auto x : word1)
        m1[x]++;

    for (auto x : word2)
        m2[x]++;

    for (auto x : m1)
    {
        char ch = x.first;
        if (m2.find(ch) == m2.end())
            return false;
    }

    for (auto x : m1)
    {
        int freq = x.second;
        h1[freq]++;
    }

    for (auto x : m2)
    {
        int freq = x.second;
        h2[freq]++;
    }

    for (auto x : h1)
    {
        int key = x.first;
        if (h2.find(key) == h2.end())
            return false;
        if (h2[key] != h1[key])
            return false;
    }

    return true;
}

int main()
{
    string string1 = "cabbba";
    string string2 = "abbccc";
    cout << closeStrings(string1, string2);
}