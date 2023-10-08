#include<iostream>

/*
**Question Explanation:**
- The Tower of Hanoi is a classic problem where the objective is to transfer all discs from one peg (source) to another peg (destination) using a third peg (helper).
- The constraints are:
  1. Only one disk can be moved at a time.
  2. A larger disk cannot be placed on top of a smaller disk.

Solution: 
    1) Move N-1 discs from A to B with the help of C
    2) Then move the largest disc from A ------> C
    3) Then Transfer all the disc from B to C with help of A
*/


using namespace std;

void tower_Of_Hanoi(int n, char a, char b , char c)
{
    // Base Case 
    if (n == 0)
    {
        return;
    }


    // For first n-1 Disc on A
    // A is Source
    // C is helper 
    // B is Destination 

    tower_Of_Hanoi(n-1,a,c,b); // Transfering n-1 disc from A to B with help of C
    
    
    cout << a<< " -----> "<<c<<endl; // Transfering the largest disc from A --- > C
    
    // For N-1 Disc on B,
    // B is Source 
    // A is Helper
    // C is Destination 
    tower_Of_Hanoi(n-1,b,a,c); // Transfering the the (n-1) disc from B to A with help of C
}
int main()
{
    int n = 3;
    tower_Of_Hanoi(n,'A','B','C');
    return 0;
}



// Total NO os steps = 2^n  -1 