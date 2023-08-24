/*
OUTPUT:
1 
A B
1 2 3
A B C D
1 2 3 4 5

*/
#include <iostream>
using namespace std;
int main()
{
    
     int num=4;
    cout<<"Enter a number ";  
    cin>>num; 
    bool flag = true;
    for (int i = 1; i <= num + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (flag == true)
            {
                cout << j << " ";
            }

            else
            {
                cout << char(('A' + j - 1)) << " ";
            }
        }
        flag = !flag;

        cout << endl;
    }
    return 0;
}