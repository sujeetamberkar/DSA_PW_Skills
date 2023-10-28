#include<iostream>
using namespace std;
int main ()
{
    int array[] = {2,3,4,3,2};

    int var=0;
    for (int element : array)
    {
        var = var ^ element;
    }
    cout << "The Repeated element is "<<var;
    // XOR is commutative Property 
}