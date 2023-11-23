#include<iostream>
#include<string>
#include <stack>
using namespace std;

int priority(char);
int solve(int,int,char);
int infixEvaluation(string );
int main ()
{
    // How would you make sure precedence is follwed ?
        // We will use two stacks
        // 1) Stack to store values 
        // 2) Stack to store opperator 

        // DM > AS (Priority of Division and Multiplication is same)
        // Left to write 
            // We will a variable (Priority to set the power)
    string s = "2+6*4/8-3";
    cout <<s<<endl;
    int ans = infixEvaluation(s);
    cout<<ans;

}
int infixEvaluation(string s)
{
    int answer = 0;
    stack <int> val;
    stack <char> op;
    for (int i = 0; i <s.length();i++)
    {
        // check if s[i] is a digit (0-9)
        if (s[i]>=int('0') && s[i] <= int('9'))
        {
            val.push(s[i]-48);
        }

        else { // s[i] =  { + , - , * , / }
            if (op.empty() || priority(s[i])>priority(op.top()))
            {
                op.push(s[i]);
            }
            else {
                while(op.size() && priority(s[i]) <= priority(op.top()))
                {
                    //  value1 op Value 2
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int answer = solve(val1,val2,ch);
                    val.push(answer);
                }
                op.push(s[i]);

            }
        }
    }

    while (op.size())
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int answer = solve(val1,val2,ch);
        val.push(answer);
    }
    
    return val.top();
}
int priority(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else {
        return 2;
    }
}
int solve (int val1, int val2, char ch)
{
    int answer =0;
    switch (ch)
    {
    case '+':
        answer = val1 + val2;   
        break;
    case '-':
        answer = val1 - val2;
        break;
    case '*':
        answer = val1 * val2;
        break;

    case '/':
        answer = val1 / val2;
        break;
    }

    return answer;
}