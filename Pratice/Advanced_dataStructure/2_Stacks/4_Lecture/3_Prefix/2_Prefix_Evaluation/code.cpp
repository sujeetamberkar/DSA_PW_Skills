#include<iostream>
#include<string>
#include<stack>
using namespace std;

int evaluate_Prefix(string );
int solve (int , int , char );
int main ()
{
    string s = "-/*+79483";
    int answer = evaluate_Prefix(s);
    cout<<answer;
}
int evaluate_Prefix(string s)
{
    stack <int> st;

    for(int i = s.length()-1; i >=0;i--)
    {
        if(s[i]>= int('0') && s[i] <= int ('9'))
        {
            st.push(s[i]-int('0'));
        }
        else {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            int answer = solve(val1,val2,s[i]);
            st.push(answer);
        }
    }
    
    return st.top();
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
