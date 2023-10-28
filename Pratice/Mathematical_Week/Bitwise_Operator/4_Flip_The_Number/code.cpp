#include<iostream>
#include<string>
using namespace std;
string Decimal_to_Binarry(int );
int Binarry_to_Decimal_shift_opperator(string );


int main ()
{
    int n;
    cin >> n;
    int a = n;
    int length = 0;
    while (a)
    {
        length = length + 1;
        a=a>>1;
    }
    int largest_NO = 0;

    for (int i = 1 ; i < length; i++)
    {

        largest_NO = largest_NO | 1;
        largest_NO = largest_NO << 1;

    }
    largest_NO = largest_NO | 1;


    cout <<"Orignal NO "<<n<<"\t"<<Decimal_to_Binarry(n)<<endl;
    int answer = largest_NO ^ n;
    cout <<"Flip NO "<<answer<<"\t"<<Decimal_to_Binarry(answer)<<endl;

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

