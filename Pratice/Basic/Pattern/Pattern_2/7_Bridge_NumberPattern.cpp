#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter a number";
    cin>>number;

    for (int i = 0; i < number; i++) {
        // Print stars
        for (int j = 1; j <= number - i; j++) {
            cout << j;
        }

        // Print spaces
        for (int k = 0; k < 2 * i; k++) {
            cout << " ";
        }

        // Print stars again
        for (int j = 1; j <= number - i; j++) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}


/*
Enter a number7
12345671234567
123456  123456
12345    12345
1234      1234
123        123
12          12
1            1

*/