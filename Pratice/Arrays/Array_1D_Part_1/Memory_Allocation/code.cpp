#include <iostream>
using namespace std;
int main()
{
    int array[5];
    cout << "Adress of array[0] " << &array[0] << endl;
    cout << "Adress of array[1] " << &array[1] << endl;
    cout << "Adress of array[2] " << &array[2] << endl;
    cout << "Adress of array[3] " << &array[3] << endl;
    cout << "Adress of array[4] " << &array[4] << endl;

    // Address of the first element is printed (in C++)
    cout << "\n\n\n Array " << array;
}