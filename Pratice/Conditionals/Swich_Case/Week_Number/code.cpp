#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter day number :";
    cin >> x;
    // Check once and then print all the cases
    switch (x)
    {
    case 1:
        cout << "Monday";
    case 2:
        cout << "Tueday";
    case 3:
        cout << "Wedday";
    case 4:
        cout << "Thursday";
    case 5:
        cout << "Friday";
    case 6:
        cout << "Saturday";
    case 7:
        cout << "Sunday";
    }
    // Check once and then print all the cases
   
   cout <<"\n\n\nWhy break statement is important "<<endl;
    switch (x)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tueday";
        break;
    case 3:
        cout << "Wedday";
        break;
        ;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Not a week number";
    }
}