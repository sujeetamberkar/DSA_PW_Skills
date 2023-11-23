#include<iostream>
#include<stack>
using namespace std;
int main ()
{
    stack <int> st;
    stack <int> backup;
    stack <int> backup_2;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while (st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }// BUT THE PROBLEM IS THAT NOW THE STACK IS EMPTY
    cout<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while (st.size())
    {
        backup.push(st.top());
        st.pop();
    }
    while (backup.size())
    {
        backup_2.push(backup.top());
        backup.pop();
    }

    while (backup_2.size())
    {
        st.push(backup_2.top());
        backup_2.pop();
    }

    cout<<endl;
        while (st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }



    


    
    return 0;
}