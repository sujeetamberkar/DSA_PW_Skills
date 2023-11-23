#include <iostream>
#include <string>
#include <stack>
using namespace std;

int priority(char);
int solve(int, int, char);
int infixEvaluation(string);
int main()
{
    string s = "(7+9)*4/8-3";
    cout << (7 + 9) * 4 / 8 - 3 << endl;
    cout << s << endl;
    int ans = infixEvaluation(s);
    cout << ans;
}
int infixEvaluation(string s)
{
    int answer = 0;
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        // check if s[i] is a digit (0-9)
        if (s[i] >= int('0') && s[i] <= int('9'))
        {
            val.push(s[i] - int('0'));
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
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
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
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int answer = solve(val1, val2, ch);
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
        int answer = solve(val1, val2, ch);
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
int solve(int val1, int val2, char ch)
{
    int answer = 0;
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