#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int numRows;
    cout << "Enter NO of rows ";
    cin >> numRows;

    vector<vector<int> > v;

    for (int i = 0; i < numRows; i++)
    {
        vector<int> a(i+1);
        v.push_back(a);
    }

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (j == 0 || (i == j))
                v[i][j] = 1;

            else
            {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }

    for (int i = 0; i <= numRows; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}