// #include<climits>
// max= INT_MIN
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n\t";
    cin >> n;
    int array[n];
    cout << "Enter array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int max=array[0];

    for(int i=0;i<n;i++)
    {
        if (max<array[i])
        {
            max=array[i];
        }
        
    }

    cout<<"The Max value is "<<max;

}