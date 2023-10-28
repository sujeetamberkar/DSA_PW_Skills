#include<iostream>
#include <vector>
// Question: This code aims to find the maximum satisfaction value by selecting a subarray of a given array of satisfaction values.
// Solution 
    // 1) Sort the Array 
    // 2) Find Suffix sum 
    // 3) FInd Piviot Element 
    // 4) Using the piviot index, get the answer 
using namespace std;
int maxSatisfaction(vector<int>& );
int main ()
{
    int array [] = {-1,-8,0,5,-9};
    int n = sizeof(array)/sizeof(array[0]);
    vector <int > v  (array, array + n);
    int answer = maxSatisfaction(v);

}
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();

        sort (satisfaction.begin(),satisfaction.end());


        // Sufix Array 
        // Reverse the Orignal array 
        // Do Normal Prefix Array 
        // Reverse the working Array 
        vector < int > suffix_working;
        int temp = 0;
        reverse(satisfaction.begin(),satisfaction.end());
        for ( int i = 0 ; i < n ; i ++)
        {
            temp = temp + satisfaction[i]; 
            suffix_working.push_back(temp);
        }
        
        
        // Reverse the OG array 
        reverse(satisfaction.begin(),satisfaction.end());


        int index = 0;
        reverse(suffix_working.begin(),suffix_working.end());

        for ( int i = 0 ; i <n ; i ++)
        {
            if (suffix_working[i]>=0)
            {
                index=i;
                break;
            }
        }

        int answer = 0;
        for (int i = index, mul = 1 ; i < n ; i ++, mul ++)
        {
            answer= answer + mul * satisfaction[i];
        }
        
        if ( answer < 0)
        {
            answer= 0;
        }
        return answer;
    }