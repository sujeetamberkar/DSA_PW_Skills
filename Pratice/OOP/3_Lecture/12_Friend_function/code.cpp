#include<iostream>
using namespace std;


class A {
    private:
    int a;
    public :
    A () : a(100){}
    friend void show (A &a);
    void show2()
    {
        cout <<a;
    }
};

void show (A &a)
{
    cout<<a.a;
}
class B: public A {
    private:
    int b;
        B (): A(),b(10){}

};
int main ()
{
    A a;
    show(a);

}
