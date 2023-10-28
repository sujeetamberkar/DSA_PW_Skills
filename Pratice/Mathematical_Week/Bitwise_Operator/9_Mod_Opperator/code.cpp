#include<iostream>
using namespace std;
/*
    ( a + b ) % c = ( a % c + b % c ) % c
    ( a * b ) % c = (( a % c ) * ( b % c )) % c

    ( a - b ) % c = (a % c - b % c + c) % c
*/
int main() {
    int a = 7, b = 6, c = 5;

    // 1. Addition Modulo Property
    int lhs1 = (a + b) % c;
    int rhs1 = (a % c + b % c) % c;
    cout << "(a + b) % c = " << lhs1 << endl;
    cout << "(a % c + b % c) % c = " << rhs1 << endl << endl;

    // 2. Multiplication Modulo Property
    int lhs2 = (a * b) % c;
    int rhs2 = (a % c * b % c) % c;
    cout << "(a * b) % c = " << lhs2 << endl;
    cout << "(a % c * b % c) % c = " << rhs2 << endl << endl;

    // 3. Subtraction Modulo Property
    // We add 'c' to ensure the result is non-negative.
    int lhs3 = (a - b) % c;
    if (lhs3 < 0) lhs3 += c;
    int rhs3 = (a % c - b % c + c) % c;
    cout << "(a - b) % c = " << lhs3 << endl;
    cout << "(a % c - b % c + c) % c = " << rhs3 << endl;

    return 0;

}