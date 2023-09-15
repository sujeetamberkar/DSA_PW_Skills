#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector < vector <int> > v;
// Increse rows 
// Variable Columns 
// 2 D array is not just a grid. 
// It is Array of Array 

// vector<int> v(Size);

vector<int> v1; // 1 2 3
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
v1.push_back(4);

vector<int> v2; // 10 20 30 40 50 
v2.push_back(10);
v2.push_back(20);
v2.push_back(30);
v2.push_back(40);
v2.push_back(50);

vector<int> v3;
v3.push_back(0);

v.push_back(v1);
v.push_back(v2);
v.push_back(v3);

for(int i=0;i <v.size();i++)
{
    for(int j=0;j<v[i].size();j++)
    {
        cout<<v[i][j]<<"\t";
    }
    cout<<endl;
}

}