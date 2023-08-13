#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter how many terms\t";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    int a = 0;
    int b = 1;
    int temp;

    for (int i = 0; i < num; i++)
    {
        temp = a;
        a = b;
        b = temp + b;
    }

    cout << a; // Note: Displaying 'a' instead of 'b' to show the nth term.
    return 0;
}
