// " ()()()" True
/*
    1) Is this balanced or not ?
    For every opening bracket there is a closing bracket 

    2) (())() : True

    3) ()(()() : False 

    4) )() ( : False 

    if length is odd, its always false 

*/
#include<iostream>
#include <stack>
using namespace std;

bool isBalanced(string );
int main ()
{
    string s ="(())()";
    if (isBalanced(s))
    {
        cout<<"Parenthesis is balanced";
    }
    else {
        cout<<"Parenthesis is not balanced";

    }
}
bool isBalanced(string s)
{   
    stack <char> stackData; 

    if (s.length() % 2 ==1)
    {
        return false;
    }
    else {
        for(char element : s)
        {
            if(element =='(')
            {
                stackData.push(element);
            }
            else if (stackData.size()==0)
            {
                return false;
            }
            else {
                stackData.pop();
            }
        }
        return true;
    }
}
