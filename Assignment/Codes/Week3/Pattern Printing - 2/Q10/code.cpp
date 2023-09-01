/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/

#include <iostream>
using namespace std;
int main()
{
    cout<<endl<<endl;
    int number = 5;

    for (int i = 1; i < number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int k = 1; k <= (number - i - 1) * 2; k++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= number; i++)
    {
        for (int k = i; k < number; k++)
        {
            cout << "*";
        }

        for(int j=2; j<=i;j++)
        {
            cout<<"  ";
        }


        for(int k=i;k<number;k++)
        {
            cout<<"*";
        }
        cout << endl;
    }
}