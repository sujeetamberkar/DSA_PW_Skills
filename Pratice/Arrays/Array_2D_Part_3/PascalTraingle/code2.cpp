#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "Enter No of rows ";
    int rowIndex;
    cin >> rowIndex;

    vector<vector <int > > v;
    for (int i=0 ; i<=rowIndex;i++)
    {
        vector <int > a (i+1);
        v.push_back(a);
    }

    for(int i=0;i<=rowIndex;i++)
    {
        for(int j=0; j<v[i].size();j++)
        {
            if (j==0 || (i==j))
            {
                v[i][j]=1;
            }
            else {
                v[i][j]=v[i-1][j-1]+v[i-1][j];
            }
        }
    }

    // for(int i=0; i <v[rowIndex].size();i++)
    // {
    //     cout <<v[rowIndex][i];
    // }


    for(int i=0; i<=rowIndex;i++)
    {
        for(int j=0; j <v[i].size();j++)
        {
            cout<<v[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<v[rowIndex].size();i++)
    {
        cout<<v[rowIndex][i];
    }
    return 0;
}