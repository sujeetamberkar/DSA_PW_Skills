#include <iostream>
#include <vector>
using namespace std;

void display_Vector(vector<int> &);
void sort1(vector<int> &);
void sort2(vector<int> &);
int main()
{
    int number;
    int temp;
    cout << "Enter a number of elements ";
    cin >> number;

    vector<int> v;
    for (int i = 0; i < number; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    sort2(v);
    display_Vector(v);
    return 0;
}
void display_Vector(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void sort1(vector<int> &a)
{
    int count_0 = 0;
    int count_1 = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 1)
        {
            count_1++;
        }
        else
        {
            count_0++;
        }
    }
    for (int i = 0; i < count_0; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < count_1; i++)
    {
        a[count_0 + i] = 1;
    }
}

void sort2(vector<int> &a)
{
    for (int i = 0, j = a.size() - 1; i < j;)
    {
        if (i==j)
        break;
        if (a[i] == 0)
        {
            i++;
        }
        else if (a[j] == 1)
        {
            j--;
        }
        else if (a[i] == 1 && a[j] == 0)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
}
