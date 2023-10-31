#include <iostream>
using namespace std;
int main()
{
    int rows;
    int cols;
    cout << "Enter NO of Rows ";
    cin >> rows;

    cout << "Enter NO of Col";
    cin >> cols;

    for(int i=0;i<rows;i++)
    {
        for (int j=0; j<cols;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
