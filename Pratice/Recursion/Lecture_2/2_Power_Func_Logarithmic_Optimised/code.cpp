#include<iostream>
using namespace std;

int powerfunc_log(int x, int n)
{

    if ( n == 0)
    {
        return 1;
    }
    else if ( n == 1)
    {
        return x;
    }
    int answer;
    answer= powerfunc_log(x,n/2);
    if (n % 2 == 0)
    {
        return answer * answer;
    }
    else {
        return answer * answer * x;
    }
}

int main()
{
    cout<<powerfunc_log(2,3);
    return 0;
}


// Log (n) to base to 2 , Time Complexity