#include<iostream>
#include <vector>
#include<stack>
using namespace std;
vector<int> BruteForce (vector <int>);
vector<int> usingStack (vector <int> );
// Reverse Traverse
int main ()
{
    int arr[] = {3,1,2,7,4,6,2,3};
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


    // vector <int> answer = BruteForce(array);

    return 0;
}


vector<int> BruteForce (vector <int> array)
{
    int n = array.size();
    vector <int> nextGreaterElement(n,-1);
    
    for(int i = 0; i <n;i++)
    {
        for(int j = i+1; j <n;j++)
        {
            if (array[j]>array[i])
            {
                nextGreaterElement[i]=array[j];
                break;
            }
        }
    }
    return nextGreaterElement;
}
vector<int> usingStack (vector <int> array)
{
    int n = array.size();
    vector <int> answer(n,-1);

    stack <int> storage;
    storage.push(array[n-1]);

    for(int i = n-2;i>=0;i--)
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
