#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout<<"Enter a number\t";
    cin >> number; // Input the value of 'number'

    int size = 2 * number - 1; // Calculate the size of the pattern matrix

    int pattern[size][size]; 

    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // The value at each position is determined by its distance from the center (number - 1, number - 1)
            pattern[i][j] = 1 + max(abs(number - 1 - i), abs(number - 1 - j));
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << pattern[i][j]; // Print the value at the current position
        }
        cout << endl; // Move to the next line after each row is printed
    }

    cout<<endl<<endl;

    // Fill the pattern matrix with the appropriate values
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // The value at each position is determined by its distance from the center (number - 1, number - 1)
            pattern[i][j] = abs(number - max(abs(number - 1 - i), abs(number - 1 - j)));
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << pattern[i][j]; 
        }
        cout << endl; 
    }
    return 0;
}
