#include<iostream>
#include<queue>
using namespace std;

vector <int> firstNegativeElementWindow(vector <int> , int);
int main ()
{
    int array[] = {0,-1,-2,3,4,-5,6,4,7,-8};
    int n = sizeof(array)/sizeof(array[0]);
    vector <int> v (array,array+n);
    vector < int > answer =  firstNegativeElementWindow(v,3);
    for(int element : answer)
    {
        cout<<element<<"\t";
    }
}
vector <int> firstNegativeElementWindow(vector <int> v, int k)
{
    queue <int> q;
    int n = v.size();
    for(int i = 0;i<n;i++)
    {
        if(v[i]<0)
        {
            q.push(i);
        }
    }

    
    vector <int> answer;
    for(int i = 0;i<n;i++)
    {
        cout<<v[i]<<"\t";
    }
    cout<<endl;
    for(int i = 0; i <n-k+1;i++)
    {
        // Clear the elements not in the window 
        while (q.size() && q.front()<i)
        {
            q.pop();
        }
        if(q.front() >=i+k)
        {
            answer.push_back(0);
        }
        else {
            answer.push_back(v[q.front()]);
        }
        
    }
    return answer;

}