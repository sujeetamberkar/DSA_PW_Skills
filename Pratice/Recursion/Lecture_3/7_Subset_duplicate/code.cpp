// Necessary header files for input-output operations, strings, and vectors.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// This function computes the subsets of the string `orignal` 
// and stores them in the vector `v`.
// `answer` keeps track of the current subset being formed,
// and `flag` is a boolean to control the inclusion of duplicate characters.
void storeSubset(string answer, string orignal, vector<string> &v, bool flag)
{
    // Base Case: If `orignal` is empty, we've considered all characters.
    // The current subset `answer` is added to the vector `v` and the function returns.
    if (orignal == "")
    {
        v.push_back(answer);
        return;
    }
    
    // Extract the first character from the `orignal` string.
    char ch = orignal[0];
    
    // If there's only one character left in `orignal`,
    // make a recursive call including that character in the subset if `flag` is true.
    // Then, always make another call without including the character.
    if (orignal.length() == 1)
    {
        if (flag == true)
        {
            storeSubset(answer + ch, orignal.substr(1), v, true);
        }
        storeSubset(answer, orignal.substr(1), v, true);
        return;
    }
    
    // Extract the second character of `orignal` (if it exists).
    char dh = orignal[1];
    
    // If the first two characters of `orignal` are the same,
    // make a recursive call including the first character if `flag` is true.
    // Then, make another call without including the character and set the `flag` to false.
    if (ch == dh)
    {
        if (flag == true)
        {
            storeSubset(answer + ch, orignal.substr(1), v, true);
        }
        storeSubset(answer, orignal.substr(1), v, false);
    }
    // If the first two characters are different,
    // make two recursive calls: one including the first character (if `flag` is true)
    // and one without it. For both calls, set the `flag` to true for the next level.
    else
    {
        if (flag == true)
        {
            storeSubset(answer + ch, orignal.substr(1), v, true);
        }
        storeSubset(answer, orignal.substr(1), v, true);
    }
}

// Main function
int main()
{
    // Set the input string as "aab".
    string str = "aab";
    
    // Initialize a vector `v` to store the subsets.
    vector<string> v;
    
    // Compute all subsets of the string using the `storeSubset` function.
    storeSubset("", str, v, true);
    
    // Print all subsets to the console.
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
