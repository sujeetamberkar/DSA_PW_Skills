#include <iostream>
using namespace std;
int main()
{
    int number = 5;
    cout<<"Enter a number";
    cin>>number;
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            cout << char(j + 'A');
        }
        cout << endl;
    }
}