#include<iostream>
using namespace std;

int main() {
    int number = 5;
    cout<<"Enter a number";
    cin>>number;

    // Loop to print the upper pyramid
    for(int i = 0; i <= number; i++) {
        // Loop to print spaces before stars
        for(int j = 0; (i + j) < number; j++) {
            cout << " ";
        }
        
        // Loop to print left side of stars
        for(int k = 1; k <= i; k++) {
            cout << "*";
        }
        
        // Loop to print right side of stars
        for(int l = i - 1; l >= 1; l--) {
            cout << "*";
        }
        
        cout << endl;
    }

    int nsp = 1;
    int nst = 2 * number - 3;
    
    // Loop to print the lower inverted pyramid
    for(int i = 1; i <= number - 1; i++) {
        // Loop to print spaces before stars
        for(int k = 1; k <= nsp; k++) {
            cout << " ";
        }
        nsp++;
        
        // Loop to print stars
        for(int l = 1; l <= nst; l++) {
            cout << "*";
        }
        nst -= 2;
        
        cout << endl;
    }

    return 0;
}
