#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Rows of  Matrix\t";
    cin >> m;
    cout << "ENter Cols of  Matrix\t";
    cin >> n;

    int a[m][n];
    cout << "\nEnter  Matrix\t" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)

            cin >> a[i][j];
    }



    for (int i = m-1; i >=0; i--)
    {
        if (i % 2 == 0)

            for (int j = 0; j < n; j++)
                cout << a[i][j] << " ";
        else
            for (int j = n - 1; j > 0; j--)
                cout << a[i][j] << " ";
    }
}