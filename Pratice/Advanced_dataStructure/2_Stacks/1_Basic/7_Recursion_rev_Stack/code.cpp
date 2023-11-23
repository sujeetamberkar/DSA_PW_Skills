#include<iostream>
#include<stack>
using namespace std;
void display(stack <int> & st)
{
    if(st.size()==0)
    {
        return ;
    }
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<"\t";

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

void rev(stack <int > & st)
{
    if (st.size()==1)
    {
        return;
    }
    int x = st.top();
    st.pop();
    rev(st);
    pushAtBottom(x,st);
}
int main ()
{
    stack < int > st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    display(st);
    cout<<endl;
    rev(st);
    display(st);
}