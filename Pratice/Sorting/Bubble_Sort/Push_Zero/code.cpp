#include <iostream>
#include <vector>
using namespace std;

void Buuble_Sort(vector<int> &);
void display_array(vector<int> &);

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(4);
    v.push_back(0);
    v.push_back(3);

    Buuble_Sort(v);   
    display_array(v); 
}

void Buuble_Sort(vector<int> &a)
{
    for (int i = 0; i < a.size()-1; i++)
    {
        for (int j = 0 ; j < a.size()-1; j++) 
        {
            if (a[j] == 0)
            {
                swap(a[j], a[j+1]);
            }
        }

    }
}

void display_array(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
}
