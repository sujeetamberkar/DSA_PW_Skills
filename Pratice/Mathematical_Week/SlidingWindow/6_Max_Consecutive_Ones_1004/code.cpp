#include<iostream>
#include<vector>
using namespace std;

// Problem:
// Find the longest subarray (contiguous sequence) of 1s that can be obtained by 
// flipping at most 'k' zeros to ones.

// Logic:
// 1. Window Expansion:
//    - When encountering a '1', just expand the window by moving the 'j' pointer.
//    - When encountering a '0', decide whether to flip it or not based on available flips.
//
// 2. Flipping 0s:
//    - If the number of zeros flipped is less than 'k', flip the current zero and expand the window.
//    - Increment the 'flips' counter each time a zero is flipped.
//
// 3. Window Contraction:
//    - If the number of zeros flipped exceeds 'k', then the window needs to be contracted.
//    - Move the starting point of the window ('i' pointer) past the first zero in the current window.
//
// 4. Updating Maximum Length:
//    - Calculate the length of the current sequence of 1s.
//    - Update 'maxLen' if the current sequence is longer.
//
// 5. End Consideration:
//    - After processing all elements, check the length of the last window and update 'maxLen' if necessary.


int longestOnes(vector<int>& , int );
int main ()
{

    int nums []= {1,1,1,0,0,0,1,1,1,1,0};
    int  k = 2;
    int n = sizeof(nums)/sizeof(nums[0]);
    vector <int> v (nums,nums+n);

    cout <<longestOnes(v,2);


    return 0;


}
int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        int flips = 0;
        int len = 0;
        int maxLen = 0;


        while (j < n )
        {
            if (nums [j] == 1)
            {
                j++;
            }

            else {
                if (flips<k)
                {
                    flips ++;
                    j++;
                }
                else {
                    // Calculate length 
                    len = j -i;
                    maxLen = max (len,maxLen);


                    // flips = l
                    // i ko number after first 0
                    while ( nums [i] == 1)
                    {
                        i++;
                    } // i will point to 0
                    i++; // i will point to a number ahead of the first 0
                    j++;
                }

            }
        }
            // Check for the last window
    len = j - i; // Changed here
    maxLen = max(len, maxLen);

        return maxLen;
    }