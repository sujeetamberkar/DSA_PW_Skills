// Questions
// Given an array and an integer k, find the first negative integer for each and every window(contiguous subarray) of size k.
// If a window does not contain a negative integer, then return 0 for that window.



// Logic:
// 1. For the first window, iterate and find the first negative integer.
// 2. For subsequent windows, check if the previous negative integer (if any) is still within the current window.
//    If yes, use it. If not, find the first negative integer in the current window.

#include<iostream>
#include<vector>
using namespace std;



vector < int > firstNeg (vector < int > & , int );
int main()
{
    int array [] = {2,-3,4,4,-7,-1,4,-2,6};
    int k = 3;
    int n = sizeof(array)/sizeof(array[0]);
    vector < int > v (array,array+n);
    vector < int > result = firstNeg(v,k);
    for (int element : result)
    {
        cout <<element << " ";
    }

}
vector < int > firstNeg (vector < int > & v, int k)
{
    int n = v.size();
    int prev_neg_index = -1;
    vector < int > answer  (n-k+1,0);

    for (int i = 0; i < k; i++)
    {
        if (v[i] < 0)
        {
            prev_neg_index = i;
            break;
        }
    }
    if (prev_neg_index != -1)
    {
        answer[0]= v[prev_neg_index];
    }

    int i = 1;
    int j = k;
    while (j < n)
    {
        if (prev_neg_index >= i)
        {
            answer[i] = v[prev_neg_index];
        }
        else {
            prev_neg_index = -1;  
            for (int p = i+1; p <=j;p++)
            {
                if (v[p]<0)
                {
                    prev_neg_index = p;
                    answer[i] = v[prev_neg_index];
                    break;
                }
            }
            if (prev_neg_index != -1) {
                answer[i] = v[prev_neg_index];
            }

        }
        i++;
        j++;





    }
    
    return answer;

}
