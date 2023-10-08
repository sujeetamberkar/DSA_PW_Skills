#include <iostream>
using namespace std;
/*
    Kam      ---> Pre
    call 1
    Kam      ---> In
    call 2
    Kam      ---> Post
*/
void pip (int n)
{
    if (n == 0)
    {
        return ;
    }
    cout << "Pre "<<n<<endl;
    pip (n-1);
    cout <<"In "<<n<<endl;
    pip(n-1);
    cout << "Post "<<n<<endl;
}
int main()
{
    pip (3);
    return 0;
}

