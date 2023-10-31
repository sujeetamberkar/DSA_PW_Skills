#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the Dimenions for Square Matrix";
    cin >> m;
    n = m;

    vector<vector<int > > matrix(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (i == j)
                continue;
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    int i,j;
    for(int k=0; k<m;k++) // Traversing Each Row
    {
        i=0;
        j=n-1;

        while(i<=j)
        {   // Swapping  matrix[k][i] and matrix [k][j]
            swap(matrix[k][i],matrix[k][j]);
            i++;
            j--;
        }
    }
    cout<<"\nAfter Rotation\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}