#include<iostream>
using namespace std;


int max_power_of_2(int );
int max_power_of_2_BrianKernighanAlgorithm (int );

int main ()

{
    cout <<max_power_of_2(6)<<endl;
    cout<<max_power_of_2_BrianKernighanAlgorithm(6)<<endl;

return 0;
}

int max_power_of_2(int a)
{
    int count = 0;
    while (a)
    {
        a = a >> 1;
        count = count +1;
    }


    return 1<<count;
    
}

int max_power_of_2_BrianKernighanAlgorithm (int a)
{
    int var;
    while (a > 0)
    {
        var = a;
        a =  a & ( a - 1) ;
    }
    return var<<1;
    

}
