#include<iostream>
#include <cmath>
#include <string>
using namespace std;

int Binarry_to_Decimal(int);
string Decimal_to_Binarry(int);
int Binarry_to_Decimal_shift_opperator(string);

int main ()
{
    cout <<Binarry_to_Decimal_shift_opperator("11110110")<<endl;
    cout << Binarry_to_Decimal(11110110)<<endl;
    cout <<Decimal_to_Binarry(3)<<endl;

    return 0;

}
int Binarry_to_Decimal(int Binnary_NO)
{
    // cout <<Binnary_NO;
    int LSB = 0;
    int answer = 0;
    int power_value = 0;
    while (Binnary_NO >0)
    {
        LSB = Binnary_NO % 10 ;
        Binnary_NO = Binnary_NO / 10;
        answer =  answer + pow(2,power_value) * LSB ;
        power_value ++;
    }
    return answer;
    
}

int Binarry_to_Decimal_shift_opperator(string input)
{
    int n = input.size();
    int result = 0;

    for (int i = n-1; i >= 0; i--)
    {
        char ch = input [i];
        int digit = ch - '0';
        result = result + digit * (1 << (n - i -1));
    }
    return result;

}

string Decimal_to_Binarry(int deci)
{
    if ( deci == 0 )
    {
        return "0";
    }
    string answer= "";
    while (deci > 0)
    {
        if (deci % 2 == 0)
        {
            answer=answer + "0";
        }
        else {
            answer = answer + "1";
        }
        deci = deci >> 1;
        // deci = deci / 2;
        // You can do multiplication and division by 2 using left and right shift opperator
        
    }
    reverse(answer.begin(),answer.end());
    
    return answer;

}
