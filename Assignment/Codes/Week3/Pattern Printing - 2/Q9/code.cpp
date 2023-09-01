/*

    *
   ***
  * * *
 *  *  *
*   *   *
*********
*   *   *
 *  *  *
  * * *
   ***
    *

*/
#include <iostream>
using namespace std;
int main()
{
    int number = 5;
    int arra[number];

    int j = 1;

    for (int i = 1; i <= number; i++)
    {
        for (j = i; j < number; j++)
        {
            cout << " ";
        }

        cout << "*";
        for (int k = 2; k < i; k++)
        {

            cout << " ";
        }
        if (i != 1)
        {
            cout << "*";
        }

        for (int k = 2; k < i; k++)
        {
            cout << " ";
        }

        if (i != 1)
        {
            cout << "*";
        }

        cout << endl;

    }
    
    for(int i=1;i<2*number;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=number;i++)
    {
        for(int k=1;k<i;k++)
        {
            cout<<" ";
        }
        cout<<"*";
 
        for(int k=i;k<number-1;k++)
        {
            cout<<" ";
        }
        if(i!=number)
        {
            cout<<"*";

        }
        for(int k=i;k<number-1;k++)
        {
            cout<<" ";
        }
        if(i!=number)
        cout<<"*";
        

        cout<<endl;
  
    }
    return 0;
}