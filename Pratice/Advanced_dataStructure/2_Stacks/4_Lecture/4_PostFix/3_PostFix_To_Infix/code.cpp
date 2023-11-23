#include<iostream>
#include<stack>
#include<string>
using namespace std;

string solve(string);
string calculate(string , string, char);

int main ()
{
    string s = "79+4*8/3-";
    string answer = solve(s);
    cout<<answer;


}
string solve(string s)
{
    stack <string> val;

    for(int i = 0; i <s.length();i++)
    {
        if(s[i] >= int('0') && (s[i] <= int('9')))
        {
            val.push(to_string( s[i]-'0'));
        }
        else {
            string val2 = val.top();
            val.pop();
            string val1 = val.top(); 
            val.pop();
            string answer = calculate(val1,val2,s[i]);
            val.push(answer);
        }
    }    
    
    return val.top();
}
string calculate(string val1, string val2, char ch)
{
    string answer = "";
    answer = answer + val1;
    answer.push_back(ch);
    answer=answer+val2;
    return answer; 
}
