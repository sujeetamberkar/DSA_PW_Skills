#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10, b = 20;
    int *x = &a;
    int *y = &b;
    cout << "Before Swapping" << endl;
    cout << " a " << a << endl;
    cout << " b " << b << endl;
    swap(a, b);
    cout << "After Swapping" << endl;
    cout << " a " << a << endl;
    cout << " b " << b << endl;
    swap(x, y);
}