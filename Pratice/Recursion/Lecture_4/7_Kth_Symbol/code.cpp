
// Question:
// We are given a table with n rows that is constructed in the following manner:
// 1. The 1st row has a single element: 0.
// 2. Each subsequent row is constructed by replacing each 0 with 01 and each 1 with 10 in the previous row.
// Our task is to find the kth symbol in the nth row of this table.
// 0 ------> 01
// 1 ------> 10

// Logic:
// Let's take any symbol at position k in row n. Its parent in the previous row would be at position ceil(k/2) in row n-1.
// 1. If k is even: The parent is at position k/2 in row n-1.
// 2. If k is odd: The parent is at position (k/2 + 1) in row n-1.
// Kth (n-1, k/2 + 1 ) source

// FLip
// K is Even, flip
// F is ODD, SAME

#include <iostream>
using namespace std;
int kthGrammar(int, int);
int main()
{
    int n, k;
    cout << "Enter n ";
    cin >> n;
    cout << "ENter k";
    cin >> k;

    int answer = kthGrammar(n, k);
    cout << answer;
}
int kthGrammar(int n, int k)
{
    // Base case: For the 1st row, the answer is always 0

    if (n == 1)
    {
        return 0;
    }
    // If k is even, the parent is at position k/2 in row n-1

    if (k % 2 == 0)
    {
        // Even Position, flip
        return !(kthGrammar(n - 1, k / 2));
    }
    else
    {
        // If k is odd, the parent is at position (k/2 + 1) in row n-1
        // Odd position same
        return kthGrammar(n - 1, k / 2 + 1);
    }
}