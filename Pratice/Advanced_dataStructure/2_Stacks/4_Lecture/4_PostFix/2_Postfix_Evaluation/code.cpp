#include<iostream>
#include<stack>
#include<string>
using namespace std;
int solve(string);
int calculate (int , int , char );

int main()
{
    string s = "79+4*8/3-";
    int answer = solve(s);
    cout<<answer; 

}
int solve(string s)
{
    stack <int> val;

    for(int i = 0; i <s.length();i++)
    {
        if(s[i] >= int('0') && (s[i] <= int('9')))
        {
            val.push(s[i]-'0');
        }
        else {
            int val2 = val.top();
            val.pop();
            int val1 = val.top(); 
            val.pop();
            int answer = calculate(val1,val2,s[i]);
            val.push(answer);
        }
    }    
    
    return val.top();
}
int calculate (int val1, int val2, char ch)
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