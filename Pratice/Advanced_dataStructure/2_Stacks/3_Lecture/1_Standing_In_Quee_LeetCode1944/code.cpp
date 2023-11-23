#include<iostream>
#include<stack>
#include<vector>
using namespace std;


vector<int> canSeePersonsCount(vector<int>& );
int main ()
{
    int array [] = {10,6,8,5,11,9};
    int n = sizeof(array)/sizeof(array[0]);
    vector <int> v (array,array+n);

    vector <int> answer = canSeePersonsCount(v);

    for(int element : answer)
    cout<<element<<" ";
}
vector<int> canSeePersonsCount(vector<int>& heights) {
    int n = heights.size();
    vector <int> answer (n,0); // intially everyone can see NONE
    stack <int> st;
    st.push(heights[n-1]);


    for (int i = n-2; i >=0;i--)
    {
        int count  = 0;

        // POP
        while (st.size()>0 && heights [i] > st.top())
        {
            st.pop();
            count++;

        }

        // COUNT
        answer[i]=count;
        if(st.size()!=0) // IF stack is not empty, add 1
        {
            answer[i]++;
        }

        st.push(heights[i]);
        
    }
    return answer;
    
}