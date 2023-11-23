#include <iostream>
#include <string>
#include <stack>
using namespace std;

int priority(char);
string solve(string , string , char );
string infixEvaluation(string);
int main()
{
    string s = "(7+9)*4/8-3";
    cout << s << endl;
    string ans = infixEvaluation(s);
    cout << ans;
}
string infixEvaluation(string s)
{
    int answer = 0;
    stack<string> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is a digit (0-9)
        if (s[i] >= int('0') && s[i] <= int('9'))
        {
            val.push( to_string(s[i] - int('0') ));
        }
        else
        {

            if (op.empty())
            {
                op.push(s[i]);
            }
            else if (s[i] == '(')
            {
                op.push(s[i]);
            }
            else if (op.top() == '(')
            {
                op.push(s[i]);
            }
            else if (s[i] == ')')
            {
                // Solve until the opening parenthesis is found
                while (!op.empty() && op.top() != '(')
                {
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char optr = op.top();
                    op.pop();
                    val.push(solve(val1, val2, optr));
                }
                // Pop the '(' from the operator stack
                if (!op.empty())
                    op.pop();
            }
            else if (priority(s[i]) > priority(op.top()))
            {
                op.push(s[i]);
            }

            else
            {
                while (op.size() && priority(s[i]) <= priority(op.top()))
                {
                    //  value1 op Value 2
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string answer = solve(val1, val2, ch);
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
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string answer = solve(val1, val2, ch);
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
    else
    {
        return 2;
    }
}
string solve(string val1, string val2, char ch)
{
    string answer ="";
    answer.push_back(ch);
    answer = answer +val1;
    answer = answer + val2;
    return answer;
}