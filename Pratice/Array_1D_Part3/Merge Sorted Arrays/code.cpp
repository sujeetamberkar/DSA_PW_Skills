#include <iostream>
#include<vector>
using namespace std;
void display_Vector(vector<int> &);
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n);
int main()
{
    vector<int> vec1;
    vector<int> vec2;
    int num;
    cout << "Enter Length of Array 1 ";
    cin >> num;
    int temp;
    for (int i = 0; i < num; i++)
    {
        cin >> temp;
        vec1.push_back(temp);
    }
    cout << "\nEnter Length of Array 2 ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> temp;
        vec2.push_back(temp);
    }

    merge(vec1, vec1.size(), vec2, vec2.size());
}
void display_Vector(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> vec3(m + n);
    int i = 0; // array 1
    int j = 0; // array 2
    int k = 0; // array 3

    while (i <= m - 1 && j <= n - 1)
    {
        if (nums1[i] < nums2[j])
        {
            vec3[k] = nums1[i];
            i++;
        }
        else
        {
            vec3[k] = nums2[j];
            j++;
        }
        k++;
    }
    if (i == m)
    {
        while (j <= n - 1)
        {
            vec3[k] = nums2[j];
            k++;
            j++;
        }
    }

    else {
        while (i <= m - 1)
        {
            vec3[k] = nums1[i];
            k++;
            i++;
        }

    }
    nums1=vec3;
    display_Vector(nums1);
}