#include <iostream>
#include <string>
using namespace std;

void generate(string s, int n)
{
    if (s.length() == n)
    {
        cout << s << endl;
        return;
    }
    if ((s.length() == 0) || (s[s.length()-1] == '0') )
    {
        generate(s+"1",n);
        generate(s+"0",n);
    }
    else {
        generate(s+"0",n);
    }
}

int main()
{
    int n = 4;
    generate("", 3);
}