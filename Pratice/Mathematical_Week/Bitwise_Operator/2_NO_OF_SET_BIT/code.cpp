#include <iostream>
#include <string>
using namespace std;
int count_set_bits(int );
int count_set_bits_handmade(int );
int count_set_bits_handmade2(int );



int main ()
{
    cout<<count_set_bits_handmade(3)<<endl;
    cout << count_set_bits_handmade2(3);
    return 0;
}
int count_set_bits(int a)
{
    return __builtin_popcount(a);
}
int count_set_bits_handmade(int a)
{
    int count = 0;
    int rem = 0;

    while (a > 0)
    {
        
        if (a & 1)
        {
            count = count + 1;
        }
        a = a >> 1;
    }
    return count;
}
int count_set_bits_handmade2(int a)
// Brian Kernighan’s Algorithm.
{

    int count = 0;
    while (a > 0)
    {
        count =  count +1;
        a = (a & (a-1));
    }

    return count;    
}