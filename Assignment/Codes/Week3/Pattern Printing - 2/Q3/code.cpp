/*
   A
  BAB
 CBABC
DCBABCD

*/
#include <iostream>
using namespace std;



int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        // Print spaces
        for (int j = 0; j < n - i - 1; ++j) {
            cout << " ";
        }

        // Print characters in decreasing order
        for (int j = i; j >= 0; --j) {
            cout << char('A' + j);
        }

        // Print characters in increasing order, excluding the first character
        for (int j = 1; j <= i; ++j) {
            cout << char('A' + j);
        }

        cout << endl;
    }

    return 0;
}
