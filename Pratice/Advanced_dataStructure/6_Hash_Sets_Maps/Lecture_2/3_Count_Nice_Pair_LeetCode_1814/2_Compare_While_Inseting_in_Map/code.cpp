#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
    int revNumber (int num)
    {
        int sum = 0;
        while(num)
        {
            sum = sum * 10 + num % 10;
            num = num / 10;
        }
        return sum;
    }
    long long combinations(int x)
    {
        if (x<2)
        {
            return 0;
        }
        else {
            long long comb = x * (x-1);
            comb = comb/2;
            return comb; 
        }
    }


    int countNicePairs(vector<int>& nums) {

        int n = nums.size();
        long long  count = 0;
        unordered_map<int,int> m;
        for(int i = 0; i <nums.size();i++)
        {
            nums[i] = nums[i] - revNumber(nums[i]);
        }

        for(int element: nums)
        {
            if(m.find(element)!=m.end())
            {
                count = count + m[element];
            }
           
            m[element]++;
            
        }
        return count % 1000000007;
}
    int main ()
    {
        vector <int> v {42,11,1,97};
        int answer = countNicePairs(v);
        cout <<answer;
    }