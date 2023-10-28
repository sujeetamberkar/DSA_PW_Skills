#include<iostream>
#include <vector>
using namespace std;
vector<int> runningSum(vector<int>& );
vector<int> runningSum_Memory(vector<int>& ) ;

int main ()
{
    int array[] = {1,2,3,4};
    int n  = sizeof(array)/sizeof(array[0]);
    vector <int >v (array,array + n);

    vector < int > answer_vector = runningSum(v);
    for ( int element : answer_vector)
    {
        cout << element <<" ";
    }
    return  0 ;
}
vector<int> runningSum(vector<int>& nums) {
    vector <int> answer ;
    answer.push_back(nums[0]);

    for (int i = 1; i <nums.size();i++)
    {
        answer.push_back(nums[i]+answer[i-1]);
    }

    return answer;
    }

    vector<int> runningSum_Memory(vector<int>& nums) {
    
    for (int i = 1; i < nums.size (); i ++)
    {
        nums[i]= nums[i]+ nums [i-1];
    }

    return nums;
    }
    