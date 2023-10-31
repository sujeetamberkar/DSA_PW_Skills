#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n\t";
    cin >> n;
    int array[n];
    int s_element;
    bool search = false;
    cout << "Enter array\n";

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Input what you want to compare\t";
    cin >> s_element;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>s_element)
        count++;
    }   

    cout<<"The No of elements greater than "<<s_element<< " in the given array is "<< count;  
}