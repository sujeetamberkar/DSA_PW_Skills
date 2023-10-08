
/*
Problem Statement:
Given two integers n and k, the task is to return the kth permutation sequence of numbers from 1 to n.

Logic:
1. Initialize a string with numbers from 1 to n.
2. The idea is to find the first digit of the kth permutation using factorials. The first digit will be determined by dividing k by the factorial of (n-1).
3. Update the string by removing the found digit, and repeat the process for the remaining string and updated k.
4. Continue this process until the string becomes empty.
*/

#include<iostream>
#include<string>
using namespace std;

string getPermutation(int , int );
string helper(string, int , string);
int factorial(int );

int main ()
{
    int n,k;
    cout << "Enter n\t";
    cin>>n;

    cout << "Enter k\t";
    cin>>k;

    string answer= getPermutation(n,k);
    cout<<answer;
    return 0;
}

string getPermutation(int n, int k)
{
    // Create a String of 1,2,3,4,5....n
    string str= "";
    for (int i = 1; i <=n; i++)
    {
        str = str + to_string(i);
    }

    string answer = helper(str, k, "");
    return answer;
}

string helper (string str, int k, string answer)
{
    int n = str.length();
    if (n == 0)
    {
        return answer;
    }
    int fact = factorial(n-1);  // calculate factorial of (n-1)

    int index = k / fact;
    if (k % fact == 0)
    {
        index--;
    }

    char ch = str[index];
    string left = str.substr(0, index);
    string right = str.substr(index + 1);
    int k_new = (k % fact == 0) ? fact : k % fact;  // simplified k_new assignment

    /*
    Dry Run Table for n=4, k=18:
    | str  | n | k | fact | index     | k update method       | answer |
    |------|---|---|------|-----------|-----------------------|--------|
    | 1234 | 4 | 18| 6    | 18/6=3-1=2| k = fact              | 3      |
    | 124  | 3 | 6 | 2    | 6/2=3-1=2 | k = fact              | 34     |
    | 12   | 2 | 2 | 1    | 2/1=2-1=1 | k = k % fact          | 342    |
    | 1    | 1 | 1 | 1    | 1/1=1-0=1 | k = k % fact          | 3421   |
    */
    return helper(left+right, k_new, answer + ch);
}

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)  // loop should go till i <= n
    {
        fact = fact * i;
    }
    return fact;
}
