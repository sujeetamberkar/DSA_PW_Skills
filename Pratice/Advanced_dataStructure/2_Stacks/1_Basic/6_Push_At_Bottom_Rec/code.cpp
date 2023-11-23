#include<iostream>
#include <stack>
using namespace std;
void display_UsingRecursion(stack <int> &st)
{
    if (st.size()==0)
    {
        return;
    }
    int x = st.top();
    cout<<x<<"\t";
    st.pop();
    display_UsingRecursion(st);
    st.push(x);


}
void pushAtBottom(int value, stack <int> &st)

{
    if (st.size()==0)
    {
        st.push(value);
        return;
    }
    int x = st.top();
    // cout<<x<<"\t";
    st.pop();
    pushAtBottom(value,st);
    st.push(x);


}
int main ()
{
    stack <int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    display_UsingRecursion(st);
    cout<<endl;
    pushAtBottom(100,st);
    display_UsingRecursion(st);


}
