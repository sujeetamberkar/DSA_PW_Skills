#include<iostream>
#include<queue>
using namespace std;
void displayQueue( queue <int> &);
void removeEvenIndex(queue <int> &);
int main ()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    displayQueue(q);
    removeEvenIndex(q);
    displayQueue(q);


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
void removeEvenIndex(queue <int> &q)
{
int queueLength = q.size();

    for(int i =0; i<queueLength;i++)
    {
        if(i%2==0)
        {
            q.pop();
        }
        else{
            q.push(q.front());
            q.pop();
        }
    }
}