#include <iostream>
using namespace std;
int main()
{
    float Seling_Price, cost_Price;
    cout << "Enter a Seling Price\t";
    cin >> Seling_Price;

    cout << "Enter a Cost Price\t";
    cin >> cost_Price;

    if (Seling_Price > cost_Price)
    {
        cout << "Profit " << Seling_Price - cost_Price;
    }
    else if (cost_Price > Seling_Price)
    {
        cout << "Loss " << cost_Price - Seling_Price;
    }
    else
    {
        cout << "No Profit, No Loss";
    }

    return 0;
}