#include <iostream>
#include <vector>
using namespace std;

// It is important to mention the size of the array during the declration
// We cant just pass the value as parameters
void change(int arrar[3][3])
{
    arrar[0][0] = 0;
}

void change_Two_D_Vec(vector<vector<int>> &);
int main()
{
    vector<vector<int>> vector_VAr(3, vector<int>(7));
    vector<vector<int>> vector_VAr2(3, vector<int>(7,2));//  Initiall value of every vector is 2

    int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //  cout<<array[0][0];
    change(array);
    // cout<<array[0][0];
    vector<vector<int>> v;
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

    cout << "Before Change " << v[0][0] << endl;
    change_Two_D_Vec(v);
    cout << "After Change " << v[0][0] << endl;
    return 0;
}

void change_Two_D_Vec(vector<vector<int>> &v)
{
    v[0][0] = 100;
}
