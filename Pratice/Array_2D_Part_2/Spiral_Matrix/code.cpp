#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter Rows of  Matrix\t";
    cin >> m;
    cout << "ENter Cols of  Matrix\t";
    cin >> n;

    int matrix[m][n];
    cout << "\nEnter  Matrix\t" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)

            cin >> matrix[i][j];
    }

    int max_row = m - 1, max_col = n - 1, min_col = 0, min_row = 0;
    while (max_row >= min_row && max_col >= min_col)
    {
        for (int i = min_col; i <= max_col; i++)
        {
            cout << matrix[min_row][i] << " ";
        }
        min_row++;

        if(max_row >= min_row && max_col >= min_col)
        {for (int i = min_row; i <= max_row; i++)
        {
            cout << matrix[i][max_col] << " ";
        }}
        max_col--;
        if(max_row >= min_row && max_col >= min_col)
{        for (int i = max_col; i >= 0; i--)
        {
            cout << matrix[max_row][i] << " ";
        }
}
        max_row--;
        if(max_row >= min_row && max_col >= min_col)
        {for (int i = max_row; i >= 0; i--)
        {
            cout << matrix[i][min_col] << " ";
        }}
        min_col++;
    }
}