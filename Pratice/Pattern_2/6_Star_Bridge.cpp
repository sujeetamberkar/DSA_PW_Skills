#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter a number";
    cin>>number;

    for (int i = 0; i < number; i++) {
        // Print stars
        for (int j = 0; j < number - i; j++) {
            cout << "*";
        }

        // Print spaces
        for (int k = 0; k < 2 * i; k++) {
            cout << " ";
        }

        // Print stars again
        for (int j = 0; j < number - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
