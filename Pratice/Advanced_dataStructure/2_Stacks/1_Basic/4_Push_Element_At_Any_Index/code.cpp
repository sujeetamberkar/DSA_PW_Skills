#include<iostream>
#include <stack>
using namespace std;


void pushAtBottom(stack <int> &st, int val)
{
    stack <int> helper;
    while (st.size())
    {
        helper.push(st.top());
        st.pop();
    }
    st.push(val);
    while (helper.size())
    {
        st.push(helper.top());
        helper.pop();
    }
    
    
}

void display (stack <int> st)
{
    while (st.size())
    {
        cout<<st.top()<<"\t";
        st.pop();
    }
    cout <<endl;
    
}
void pushAtIndex(stack <int> &st, int value, int index)
{
    stack <int> helper;
    while (st.size()>= index+1)
    {
        helper.push(st.top());
        st.pop();
    }
    st.push(value);
        while (helper.size())
    {
        st.push(helper.top());
        helper.pop();
    }



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
    display(st);
    pushAtBottom(st,80);
    display(st);
    pushAtIndex(st,100,200);
    display(st);

}