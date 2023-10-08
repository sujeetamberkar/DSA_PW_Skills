#include <iostream>
using namespace std;

void fun(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "Sujeet" << endl; // Recursion as for loop 
    fun(n - 1);
}

int main()
{
    /*


        What ?
        Loop ki replacement ?
            1)problem = something + subproblem
            2)FUnction calling itself

        Why ?
            1) To solve problem
    */

    fun(4);
}