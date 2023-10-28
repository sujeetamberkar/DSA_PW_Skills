// Given an integer array. Find the length of the longest subarray which has 
// maximum possibile bitwise and value

// Some Basic Knbowledge 
// 
//  12 & 3 < 12 (untill both the numbers are same)

#include<iostream>
#include<vector>
#include<climits>
#include <algorithm>
using namespace std;

void function3(vector<int>&);
int main() {
    int array[] = {12,3,1,6,1,6,6,6,6,4,3,8,13,13,18,13,8};
    int n = sizeof(array) / sizeof(array[0]);
    vector<int> v(array, array + n);
    function3(v);
}

void function3(vector<int>& v) {
    int n = v.size();
    int answer = 0;
    int max_element = INT_MIN;
    int current_length = 0;

    for (int element : v) {
        if (element > max_element) {
            max_element = element;
            current_length = 1;
        } else if ((element & max_element) == max_element) {
            current_length++;
        } else {
            current_length = 1;
            max_element = element;
        }
        answer = max(answer, current_length);
    }
    cout << answer;
}
