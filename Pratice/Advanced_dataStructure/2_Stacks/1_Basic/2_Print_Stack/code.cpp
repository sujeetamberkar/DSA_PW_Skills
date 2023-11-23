#include<iostream>
#include<stack>
using namespace std;
int main ()
{
    stack <int> st;
    stack <int> backup;

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

    // Store it in an another stack before removing
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);


    cout<<"The Size pf STACK 'st' is "<<st.size()<<endl;
    cout<<"The size of baclkup is "<<backup.size()<<endl;

    while (st.size())
    {
        cout<<st.top()<<" ";
        backup.push(st.top());
        st.pop();
    }
    cout<<"The Size pf STACK 'st' is "<<st.size()<<endl;
    cout<<"The size of baclkup is "<<backup.size()<<endl;
    


    
    return 0;
}