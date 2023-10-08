#include<iostream>
using namespace std;

void print_n_to_1(int n)
{
    if (n == 0)// Base Case
    {
        return;

    }
    cout<<n<<" ";
    print_n_to_1(n-1);
}
int main()
{

    print_n_to_1(4);

}