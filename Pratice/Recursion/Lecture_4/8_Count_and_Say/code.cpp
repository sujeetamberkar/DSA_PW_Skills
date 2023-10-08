#include <iostream>
#include <string>
using namespace std;

// Function to compute the 'count and say' sequence
string countAndSay(int n) {
    // Base case: if n is 1, return "1"
    if (n == 1) {
        return "1";
    }

    // Recursive call: get the sequence for n-1
    string str = countAndSay(n - 1);

    // Initialize an empty answer string to build the result
    string answer_String = "";
    
    // Initialize frequency to count consecutive characters and get the first character of the sequence
    int frequency = 1;
    char ch = str[0];

    // Iterate over the sequence to count and say each segment
    for (int i = 1; i < str.length(); i++) {
        char dh = str[i];
        
        // If current character is same as previous, increment the frequency
        if (ch == dh) {
            frequency++;
        } else {
            // If current character is different, append the frequency and character to the answer
            answer_String += to_string(frequency) + ch;
            
            // Reset frequency for the new character and update the current character
            frequency = 1;
            ch = dh; 
        }
    }

    // After the loop, append the last segment to the answer
    answer_String += to_string(frequency) + ch;
    
    return answer_String;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th term of the count-and-say sequence is: " << countAndSay(n) << endl;
    return 0;
}
/*
    n = 7

    if (n == 1)
    {
        NO
    }

    check n = 6
    check n = 5
    check n = 4
    check n = 3
    check n = 2
    check n = 1
        Hit Base Case, string "1"



    for N = 2
        the result is 11
    for N = 3
        the result is 21
    for N = 4
         the result is 1211
    for N = 5
         the result is 111221

    for N = 6
         the result is 312211
    for N = 7
         the result is 1311221111
*/