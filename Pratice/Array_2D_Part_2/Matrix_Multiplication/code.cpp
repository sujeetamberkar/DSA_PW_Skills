#include <iostream>
using namespace std;
int main()
{
    int m, n, p, q;
    cout << "Enter Rows of 1st Matrix\t";
    cin >> m;
    cout << "ENter Cols of 1st Matrix\t";
    cin >> n;

    cout << "Enter Rows of 2nd Matrix\t";
    cin >> p;
    cout << "ENter Cols of 2nd Matrix\t";
    cin >> q;

    if (n != p)
    {
        cout << "Matrix cannot be multiplied";
        return 0;
    }

    int a[m][n];
    int b[p][q];

    cout << "\nEnter 1st Matrix\t" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nEnter 2nd Matrix\t" << endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> b[i][j];
        }
    }
    int res[m][q];

    /*
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            // MULTIPLY
            // 0th Row x 0th Col
            res[0][0]= a[0][0] x b [0][0] + a[0][1] x b[1][0] + a[0][2] x b[2][0]


        }
    }
    */

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j]=0;
            // Less than the common number 
            for(int k=0;k<p;k++)
            {
                res[i][j]= res[i][j] + a[i][k] * b[k][j];
            }
        }
    }


    for(int i=0;i<m;i++)
    {

        for(int j=0;j<q;j++)
        {
            cout<<res[i][j]<<"\t";
        }
        cout<<endl;
    }

    
}