#include<iostream>
#include<queue>
#include <stack>
using namespace std;


void displayQueue( queue <int> &);
void reverseQueue(queue <int> &);
int main ()
{
    queue<int> q; // Insertion happens only at the back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    displayQueue(q);
    reverseQueue(q);
    displayQueue(q);

/*
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<"Size "<<q.size()<<endl;
    q.pop(); // Pop : Happens only at the front
    cout<<endl<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<"Size "<<q.size()<<endl;

*/


}
void displayQueue( queue <int> &q)
{
    int queueLength = q.size();
    for(int i = 0;i <queueLength;i++)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
void reverseQueue(queue <int> &q)
{
    stack <int> st;
    int queueLength = q.size();
    for(int i = 0;i <queueLength;i++)
    {
        st.push(q.front());
        q.pop();
    }

    while (st.size())
    {
        q.push(st.top());
        st.pop();
    }
}
