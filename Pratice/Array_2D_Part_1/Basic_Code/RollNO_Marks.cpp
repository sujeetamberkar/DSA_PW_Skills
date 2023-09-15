#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter No of Students ";
    cin >> m;
    n = 2;
    int array[m][n];
    for (int i = 0; i < m; i++) // row
    {
        for (int j = 0; j < n; j++) // col
        {
            cin >> array[i][j];
        }
    }
    cout <<"\nThe Output is "<<endl;
    cout<<"Roll NO\t"<<"Marks"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
}