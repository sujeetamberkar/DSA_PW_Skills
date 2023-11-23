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

    display_UsingRecursion(st);

}