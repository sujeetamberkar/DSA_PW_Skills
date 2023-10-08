// Question Summary:
// Each child has a greed factor. Each cookie has a size.
// A child will be content if they receive a cookie of size >= their greed factor.
// We aim to satisfy the maximum number of children with the given cookies.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findContentChildren(vector<int>& , vector<int>& );

int main()
{
    vector<int> greed;
    vector<int> cookie;
    greed.push_back(1);
    greed.push_back(2);
    greed.push_back(3);

    cookie.push_back(1);
    cookie.push_back(1);

    // For the above example, only two children can be satisfied.
    // The first and second children can be satisfied with cookies of size 1.
    // The third child remains unsatisfied.
    cout << findContentChildren(greed, cookie);
    return 0;
}

int findContentChildren(vector<int>& g, vector<int>& s)
{
    // Sort both lists.
    // E.g., after sorting, greed becomes [1,2,3] and cookies become [1,1].
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    
    int count = 0; // This will keep the count of satisfied children.

    int i = 0; // Pointer for children's greed list.
    int j = 0; // Pointer for cookie sizes list.

    // Loop until either we've considered all children or all cookies.
    while (i < g.size() && j < s.size())
    {
        // Check if the current cookie can satisfy the current child.
        if (s[j] >= g[i])
        {
            // For the example: cookie of size 1 satisfies the first child's greed of 1.
            // Then, the next cookie of size 1 satisfies the second child's greed of 2.
            count++; // Increase the satisfied children count.
            i++;    // Move to the next child.
            j++;    // Move to the next cookie.
        }
        else 
        {
            // If the current cookie cannot satisfy the current child, 
            // we move on to the next larger cookie to try and satisfy the same child.
            j++;
        }
    }
    return count;   // Return the total number of content children. For the example, it will be 2.
}
