#include<iostream>
using namespace std;

class ComplexNumber{
public:
    int real;
    int imaginarry;
    ComplexNumber( ) : real(0),imaginarry(0){}

    ComplexNumber(int real, int imaginarry ) : real(real),imaginarry(imaginarry){}

    void getNumber ()
    {
        cout << real << " + " <<imaginarry <<" i "<<endl;
    }

    ComplexNumber add (ComplexNumber &var)
    {
        ComplexNumber c4;
        c4.imaginarry = this->imaginarry + var.imaginarry;
        c4.real =  this->real + var.real;
        return c4;

    }

    ComplexNumber operator  + (ComplexNumber & var)
    {
        ComplexNumber c4;
        c4.imaginarry = this->imaginarry + var.imaginarry;
        c4.real =  this->real + var.real;
        return c4;

    }
};

int main ()
{
    ComplexNumber n1 (3,4);
    ComplexNumber n2 (4,5);

    n2 = n1.add(n2);
    n2.getNumber();

    ComplexNumber n6;
    n6 = n1+n2;
    n6.getNumber();



// You cannot overload 
// 1) .
// 2) ?: (Ternnry)
// 3) :: 
// 4) sizeof

}