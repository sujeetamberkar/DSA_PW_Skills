#include<iostream>
using namespace std;
void print_1_to_n(int n)
{
    if (n == 0)
    {
        return ;
    }
    print_1_to_n(n-1);
    cout<<n<<" ";
}
void print_n_to_1(int n)
{
    if (n == 0)
    {
        return ;
    }
    cout<<n<<" ";
    print_n_to_1(n-1);

}
int main()
{
    print_1_to_n(4);
    cout<<endl;
    print_n_to_1(4);
}