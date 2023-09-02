#include <iostream>
using namespace std;
void printNumber(int num) {
    cout << "Integer: " << num <<endl;
}

void printNumber(double num) {
    cout << "Double: " << num <<endl;
}

int main() {
    int a = 5;
    double b = 3.14;
    printNumber(a);  // Calls the first function
    printNumber(b);  // Calls the second function

    return 0;
}
