// Q4: Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    if (n == 0) {
        return 1;  // Special case: If the number is 0, it has 1 digit.
    }
    
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    int numDigits = countDigits(number);
    int square = number * number;

    cout << "Number of digits in " << number << ": " << numDigits << endl;
    cout << "Square of " << number << ": " << square << endl;

    return 0;
}
