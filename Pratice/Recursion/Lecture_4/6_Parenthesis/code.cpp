// Logic 

// At every instance, 
        // the NO of Closing bracket > = the NO of Openeing bracket 

// We start with empty string and we keep two counter 
// 1) Opening counter, 
// 2) Closing counter 


// Base Case,
// When closing = n, return 

#include<iostream>
#include<vector>
#include<string>
using namespace std;

void generate ( string s , int open, int close, int n)
{
        if (close == n)
        {
                cout <<s <<endl;
                return;
        }

        if (open < n)
        {
                generate(s+'(',open+1,close,n);
        }
         if (close < open)
        {
                generate(s+')',open,close+1,n);
        }
}
int main()
{
        generate("",0,0,3);

}