#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int missingNumber(vector<int>& );
int main ()
{
    int array []= {9,6,4,2,3,5,7,0,1};
    int n = sizeof(array)/sizeof(array[0]);
    vector <int> v (array,array+n);

    int answer = missingNumber(v);
    cout <<answer;
   
}
int missingNumber(vector<int>& nums) {
    int i =0;
    while (i < nums.size())
    {
        // Increment when we have correct location or the last element 
        if (nums[i] == i || nums[i]== nums.size())
        {
            i++;
        }

        else {
            swap(nums[i],nums[nums[i]]);
        }
    }

    for (int i = 0 ; i <nums.size();i++)
    {
        if (nums[i]!=i)
        {
            return i;
        }
    }
    return nums.size();
}

int missingNumber2(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i <n;i++)
        sum+=nums[i];
        int answer = ((n+1)*(n))/2;
        answer = answer - sum; 
        return answer;
    }