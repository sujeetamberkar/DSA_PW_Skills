#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n\t";
    cin >> n;
    int array[n];
    int s_element;
    bool search = false;
    cout << "Enter array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Input what you want to search\t";
    cin >> s_element;
    int i;
    for (i = 0; i < n; i++)
    {
        if (array[i] == s_element)
        {
            search = true;
            break;
            ;
        }
    }

    if (search)
    {
        cout << "Element found at " << i;
    }
    else
    {
        cout << "No element found";
    }
}