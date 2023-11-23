#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k);
vector<int> BruteForce(vector<int>& nums, int k);

int main()
{
    int array[] = {1,3,-1,-3,5,3,6,7};
    int k =3;
    int n = sizeof(array)/sizeof(array[0]);
    vector < int > v (array,array+n);
    // vector <int > answer = BruteForce(v,k);
    vector <int > answer = maxSlidingWindow(v,k);

    for (int element : answer)
    cout<<element<<"\t";

}
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        if(k==1)
    {
        return nums;
    }

    int n = nums.size();
    vector <int> answer(n-k+1);
    int counter =0;

    vector <int> nextGreaterIndex(n,n);
    stack  <int> st;
    st.push(n-1);
    for(int i = n-2;i>=0;i--)
    {

        while (st.size() && (nums[st.top()] <=nums[i]))
        {
            st.pop();
        }
        if (!st.empty())
        {
            nextGreaterIndex[i] = st.top();
        }
        st.push(i);  
    }
    int j =0;
    for (int i = 0;i <n-k+1;i++)
    {
        if (j<i)
        {
            j=i;
        }
        int max_number_in_window=nums[j];

        while (j<i+k)
        {
            max_number_in_window = nums[j];
            if(nextGreaterIndex[j]>=i+k)
            break;
            j=nextGreaterIndex[j];
        }
        answer[counter]=max_number_in_window;
        counter++;
    }
    return answer;

    }
vector<int> BruteForce(vector<int>& nums, int k)
{
    vector <int> answer;
    int n = nums.size();
    for (int i = 0; i <n-k+1;i++)
    {
        int mx= INT_MIN;
        for (int j = i; j<i+k;j++)
        {
            mx=max(mx,nums[j]);
        }
        answer.push_back(mx);
    }
    return answer;
}