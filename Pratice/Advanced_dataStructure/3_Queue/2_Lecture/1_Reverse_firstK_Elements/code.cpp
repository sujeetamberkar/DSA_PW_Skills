#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display (queue <int> &);
void reverse_K_Elements(queue <int> &, int);
int main ()
{
    queue <int> q;
    int k =2;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    display(q);
    reverse_K_Elements(q,k);
    display(q);

     
}
void display (queue <int> &q)
{
    int sizeOfQueue = q.size();
    for(int i = 0;i<sizeOfQueue;i++)
    {
        cout<<q.front()<<"\t";
        q.push(q.front());
        q.pop();
    }

    cout<<endl;
}
void reverse_K_Elements(queue <int> &q, int k)
{
    int sizeOfQueue = q.size();
    queue <int> helperQ; // Instead of using a helper Q, we can directly use that same q
    stack <int> helperStack;
    for(int i = 0;i<sizeOfQueue;i++)
    {
        if (i<k)
        {
            helperStack.push(q.front());
        }
        else {
            helperQ.push(q.front());
        }
        q.pop();
    }
    while (q.size())
    {
        q.pop();
    }
    while (helperStack.size())
    {
        q.push(helperStack.top());
        helperStack.pop();
    }
    while (helperQ.size())
    {
        q.push(helperQ.front());
        helperQ.pop();
    }
}
