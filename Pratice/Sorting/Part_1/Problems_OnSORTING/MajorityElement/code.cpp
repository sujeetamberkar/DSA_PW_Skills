// Question Summary:
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the array is non-empty and the majority element always exists in the array.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function prototype declaration
int majorityElement(vector<int> &);

int main()
{
    vector <int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);

    // Print the majority element found in the vector
    cout << majorityElement(v);
    return 0;
}

// Function to find the majority element
int majorityElement(vector<int> &nums){
    // Sort the array
    sort(nums.begin(), nums.end());
    
    // Since the majority element will always be present in more than n/2 positions, after sorting, 
    // the majority element will always be present at the n/2 position (0-indexed)
    return nums[nums.size() / 2];
}
