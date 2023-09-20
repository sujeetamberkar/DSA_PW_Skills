#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    /*
    cout << "Enter a string ";
    cin >> s;
    sort(s.begin(), s.end());
    cout << s;

    */
    
    cout << "\nEnter a string ";
    getline(cin, s);// Lexicographacal order follows ACII value  
    sort(s.begin(), s.end()); // All spaces/ then letters according to ascci value 
    cout << s;
}