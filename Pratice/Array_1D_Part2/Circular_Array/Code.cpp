#include <iostream>
#include <vector>
using namespace std;

void desplay_Array(vector<int> &);
void reverse_sub_Array(vector<int>&,int,int);
int main()
{
    int number;
    vector<int> v;
    cout << "Number of elements in an array\t";
    cin >> number;
    int temp;
    for (int i = 0; i < number; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }

    int shift_Key=0;
    cout<<"Enter Shift Key ";
    cin>>shift_Key;

    if (shift_Key>number)
    {
        shift_Key=shift_Key%n;
    }
    

    reverse_sub_Array(v,0,v.size()-1-shift_Key);
    reverse_sub_Array(v,v.size()-shift_Key,v.size()-1);
    reverse_sub_Array(v,0,v.size()-1);
desplay_Array(v);

}
void reverse_sub_Array(vector<int> &a,int low,int high)
{
    for(int i=low,j=high;i<j;i++,j--)
    {
        swap(a[i],a[j]);
    }


}

void desplay_Array(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
