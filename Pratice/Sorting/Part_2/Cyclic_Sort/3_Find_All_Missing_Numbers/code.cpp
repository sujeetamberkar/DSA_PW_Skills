/*
 * Problem Statement:
 * Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array),
 * some elements appear twice and others appear once.
 * Find all the elements of [1, n] inclusive that do not appear in this array.
 *
 * Example:
 * Input: [4,3,2,7,8,2,3,1]
 * Output: [5,6]
 *
 * Logic:
 * 1. Iterate through the array, and for each number, try to place it in its "correct" position.
 *    For instance, number 1 should be at index 0, number 2 at index 1, and so on.
 * 2. After the first pass, iterate through the array again and find any position where the number
 *    doesn't match the index, those positions + 1 are our missing numbers.
 */

#include<iostream>
#include<vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>&);

int main ()
{
    int array[] = {4,3,2,7,8,2,3,1};

    int n = sizeof(array)/sizeof(array[0]);

    vector<int> v(array, array + n);

    vector<int> answer = findDisappearedNumbers(v);

    // Print the result
    for (int element : answer)
    {
        cout << element << " ";
    }
    return 0;
}
vector < int > findDisappearedNumbers(vector <int >  &nums )
{
    int n = nums.size();
    vector < int > answer;

    int i = 0;
    while (i < n)
    {
        int correct_Index = nums[i]-1;
        if (nums[correct_Index] == nums[i]  || correct_Index == i)
        {
            i++;
        }
        else {
            swap(nums[i],nums[correct_Index]);
        }

    }

    for (int i = 0; i <nums.size();i++)
    {
        if (i != nums[i]-1)
        {
            answer.push_back(i+1);
        }
    }
    
    return answer;
}