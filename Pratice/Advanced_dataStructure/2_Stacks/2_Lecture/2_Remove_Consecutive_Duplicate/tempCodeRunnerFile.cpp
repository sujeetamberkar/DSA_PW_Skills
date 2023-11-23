#include<iostream>
#include<string>
#include<stack>
using namespace std;

string RemoveDuplicateConsecutive(string );
int main ()
{
    string s = "aaabbc";
    string answer = RemoveDuplicateConsecutive(s);
    cout<<answer;
}
string RemoveDuplicateConsecutive(string temp)
{
    stack <char> stackData;
    for ( char element : temp)
    {
        if (element!=stackData.top())
        {
            stackData.push(element);
        }
        else {
            continue;
        }
    }
    string answer= "";
    while (stackData.size()!=0)
    {
        answer=answer+stackData.top();
        stackData.pop();
    }
    reverse(answer.begin(),answer.end());
    return answer;
    
}
