// Question:
// Generate all possible valid combinations of parentheses for a given number 'n'.
// For example, if n=2, the valid combinations are: "()()", "(())".

// Logic:
// 1. At every instance, the number of closing brackets should be less than or equal to the number of opening brackets.
// 2. Start with an empty string and maintain two counters:
//    a) Open counter: to keep track of the number of opening brackets.
//    b) Close counter: to keep track of the number of closing brackets.
// 3. Recursively generate combinations by considering adding an opening bracket (if valid) or a closing bracket (if valid).

#include<iostream>
#include<vector>
using namespace std;

vector <string> generateParenthesis(int);
void generate(int, int, int, string, vector<string>&);

int main()
{
    int num;
    cout << "Enter a Number ";
    cin >> num;

    vector<string> answer = generateParenthesis(num);
    for (string element : answer)
    {
        cout << element << endl;
    }
}

vector<string> generateParenthesis(int num)
{
    vector<string> answer;
    // Start the recursive generation with 0 open and 0 close brackets
    generate(0, 0, num, "", answer);
    return answer;
}

void generate(int open, int close, int num, string s, vector<string>& answer)
{
    // Base case: if we have used 'num' closing brackets, add current combination to the answer
    if (close == num)
    {
        answer.push_back(s);
        return;
    }
    
    // If we can still add an opening bracket, do so
    if (open < num)
    {
        generate(open + 1, close, num, s + "(", answer);
    }
    
    // If the number of closing brackets is less than opening, we can add a closing bracket
    if (close < open)
    {
        generate(open, close + 1, num, s + ")", answer);
    }
}
