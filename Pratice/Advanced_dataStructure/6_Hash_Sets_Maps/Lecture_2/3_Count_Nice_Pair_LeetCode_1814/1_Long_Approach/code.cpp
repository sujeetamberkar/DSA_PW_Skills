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
        long long sum = 0;
        vector<int> v;
    for(int element : nums)
        {
            v.push_back(element-revNumber(element));
        }
    unordered_map <int,int> m;
    for(int element: v)
    {
        m[element]++;
    }
    
    for(auto element :m)
    {
        sum = sum + combinations(element.second);
    }
    

        return sum % 1000000007; // Modulo operation to avoid overflow
    }

    int main ()
    {
        vector <int> v {42,11,1,97};
        int answer = countNicePairs(v);
        cout <<answer;
    }