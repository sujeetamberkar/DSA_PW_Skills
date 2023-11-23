#include<iostream>
#include <vector>
#include <stack>
using namespace std;
int LargestRectangleArea (vector <int> );
int main ()
{
    int arr[] = {2,1,5,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> array (arr,arr+n);

    for (int element :array)
    {
        cout<<element<<"\t";
    }
    cout<<endl;
    int answer = LargestRectangleArea(array);
    cout<<answer;

    return 0;
}
int LargestRectangleArea (vector <int> v)
{
    stack <int> st;
    int n = v.size();
    vector <int> nextSmallestIndex(n,n);
    vector <int> prevSmallestIndex(n,-1);
    vector <int> area(n,1);
    st.push(n-1);
    for(int i=n-2;i>=0;i--)
    {
        while ( (!st.empty()) && (v[st.top()] >=v[i]))
        {
            st.pop();
        }
        if (!st.empty())
        {
            nextSmallestIndex[i] = st.top();
        }
        st.push(i);
    }

    while (st.size())
    {
        st.pop();
    }

    st.push(0);
    for(int i = 1; i <n;i++)
    {
        while ( (!st.empty()) && (v[st.top()] >=v[i]))
        {
            st.pop();
        }
        if (!st.empty())
        {
            prevSmallestIndex[i] = st.top();
        }
        st.push(i);
        
    }

    int maxArea=0;
    for (int i = 0; i <n;i++)
    {
        int height = v[i];
        int breadth = nextSmallestIndex[i]-prevSmallestIndex[i]-1;
        int area =  height *breadth;
        maxArea=max(maxArea,area);
    }

    return  maxArea;
}
