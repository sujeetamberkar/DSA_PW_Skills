#include<iostream>
#include<queue>
#include<stack>

// using std::vector, std::stack, std::queue, std::array, std::cout;
using namespace std;
void reorderQueue(vector <int> );

int main ()
{
    int array [] = {1,2,3,4,5,6,7,8};
    int n = sizeof(array)/sizeof(array[0]);
    vector <int> v (array,array+n);
    reorderQueue(v);
}

void reorderQueue(vector<int> v)
{
    int n = v.size();
    vector <int> answer;
    queue <int> q;
    stack <int> st;

    for(int element: v)
    {
        cout<<element<<"\t";
    }
    cout<<endl;
    for(int i =0; i <n;i++)
    {
        q.push(v[i]);
    }

    for(int i = 0; i <n/2;i++)
    {
        st.push(q.front());
        q.pop();
    }

    while (st.size())
    {
        q.push(st.top());
        st.pop();
    }
    
    for(int i = 0; i <n/2;i++)
    {
        st.push(q.front());
        q.pop();
    }

    while (st.size())
    {
        q.push(st.top());
        q.push(q.front());
        q.pop();
        st.pop();
    }
    while (q.size())
    {
        st.push(q.front());
        q.pop();
    }
    while (st.size())
    {
        q.push(st.top());
        st.pop();
    }
    for(int i =0;i<n;i++)
    {
        cout<<q.front()<<"\t";
        q.push(q.front());
        q.pop();
    }
}
