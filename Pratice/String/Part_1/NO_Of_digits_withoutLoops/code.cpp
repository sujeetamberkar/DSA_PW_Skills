#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number ";
    cin >> number;
    string str = to_string(number);
    cout << "The length of the number is " << str.length();
}