#include <iostream>
using namespace std;

class A
{
private:
    int a_private;

protected:
    int a_protected;

public:
    int a_public;
    A(int priv = 0, int prot = 0, int pub = 0)
    : a_private(priv), a_protected(prot), a_public(pub) {}
};



// If something was protected in A, It will remain protected in B

class B : public A
{ // The varibles coming from A, to B will be protected
private:
    int b_private;

protected:
    int b_protected;

public:
    int b_public;
    B(int a_priv = 0, int a_prot = 0, int a_pub = 0, 
      int b_priv = 0, int b_prot = 0, int b_pub = 0) 
        : A(a_priv, a_prot, a_pub), 
          b_private(b_priv), b_protected(b_prot), b_public(b_pub) {}

          
    void setProtectedA(int a_protected)
    {
        this -> a_protected = a_protected;
    }
    int getPtotectedA()
    {
        return a_protected;
    }

};

int main ()
{
    A demo1;
    B demo2;


    demo1.a_public=3;
    demo2.a_public=4;

    demo2.setProtectedA(34);
    cout<<demo2.getPtotectedA();
}