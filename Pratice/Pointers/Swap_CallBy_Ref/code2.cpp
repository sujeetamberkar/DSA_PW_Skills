#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
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