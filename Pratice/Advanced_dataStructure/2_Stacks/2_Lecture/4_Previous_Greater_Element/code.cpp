#include<iostream>
#include <vector>
#include<stack>
using namespace std;
vector<int> usingStack (vector <int> );
// Forward Traverse
int main ()
{
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector <int> array (arr,arr+n);

    for (int element :array)
    {
        cout<<element<<"\t";
    }
    cout<<endl;
    vector <int> answer = usingStack(array);
    for (int element :answer)
    {
        cout<<element<<"\t";

    }
    return 0;
}
vector<int> usingStack (vector <int> array)
{
    int n = array.size();
    vector <int> answer(n,-1);

    stack <int> storage;
    storage.push(array[0]);

    for(int i = 1;i<n;i++)
    {
        // POP
        while ( (!storage.empty()) && (storage.top() <=array[i]))
        {
            storage.pop();
        }
        // Answer
        if (!storage.empty())
        {
            answer[i] = storage.top();
        }
        // Push
        storage.push(array[i]);
        
    }   

    return answer;
}
