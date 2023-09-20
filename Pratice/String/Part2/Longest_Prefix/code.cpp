/*
The approach to finding the longest common prefix (LCP) among a list of strings is to 
first sort the strings. 
After sorting, the LCP of the first and last strings will be the LCP of the entire list. 
This is because if two strings (the smallest and the largest in the sorted order) 
have a common prefix, then all strings in between will have the same prefix.
*/
#include <iostream>
#include <string>

using namespace std;

// Function declaration
string longestCommonPrefix(vector<string> &);

int main()
{
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    string output = longestCommonPrefix(v);
    cout << output;
}

string longestCommonPrefix(vector<string> &strs)
{
    // If there's only one string, return it as the LCP
    if (strs.size() == 1)
    {
        return strs[0];
    }

    // Sort the list of strings. This makes finding LCP efficient
    sort(strs.begin(), strs.end());

    // First and last string in the sorted list
    string first = strs[0];
    string last = strs[strs.size() - 1];
    
    string s = "";

    // Loop to find the common prefix of first and last string
    for (int i = 0; i < (min(first.length(), last.length())); i++)
    {
        if (first[i] == last[i])
        {
            s = s + first[i];
        }
        else {
            // Break out of loop at the first non-matching character
            break;
        }
    }

    return s; // Return the longest common prefix
}
