/*
Required Output:

   *
  **
 ***
****
 ***
  **
   *
   * 
*/
#include <iostream>
using namespace std;
int main()
{

    int n = 4;
    cout << "ENter a number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n -i; j >= 1; j--)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        for (int k =1; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
