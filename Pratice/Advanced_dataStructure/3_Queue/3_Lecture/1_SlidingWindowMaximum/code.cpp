#include<iostream>
#include<deque>
#include<vector>
using namespace std;
vector <int> maxSlidingWindow(vector <int> & , int );
int main ()
{
    int array[] = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    int n = sizeof(array)/sizeof(array[0]);
    vector <int> v (array,array+n);
    for (int element : v)
    cout<<element<<"\t";
    cout<<endl;
    vector <int> answer = maxSlidingWindow(v,k);
    for (int element : answer)
    cout<<element<<"\t";

}
vector <int> maxSlidingWindow(vector <int> & nums, int k)
{
    if (k == 1)
    {
        return nums;
    }
    int n = nums.size();

    deque <int> dq;   // Decreasing order of element
    vector <int> ans; // i should be min k-1

    for(int i = 0; i <n ; i++)
    {
        while (dq.size() && nums[i] > nums[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);

        int j = i-k+1; // START OF the window
        while (dq.front()<j)
        {
            dq.pop_front();
        }
        
        if (i>=k-1)
        {
            ans.push_back(nums[dq.front()]);
        }
    }

    return ans;
}