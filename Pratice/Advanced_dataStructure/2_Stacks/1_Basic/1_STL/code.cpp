#include<iostream>
#include<stack>
using namespace std;
int main ()
{
    stack <int> st;
    st.push(1);
    st.push(6);
    st.push(90);
    cout<<"Current Size is "<<st.size()<<endl;
    cout<<"Top Most Element "<<st.top()<<endl;
    cout<<"Removing the last element"<<endl;
    st.pop();
    cout<<"Current Size is "<<st.size()<<endl;
    cout<<"Using st.empty "<<st.empty()<<endl;

    return 0;
}