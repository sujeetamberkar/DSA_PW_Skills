#include<iostream>
using namespace std;

class ComplexNumber{
public:
    int real;
    int imaginarry;
    ComplexNumber( ) : real(0) , imaginarry(0){}
    ComplexNumber(int real, int imaginarry ) : real(real),imaginarry(imaginarry){}
    void getNumber (){
        cout << real << " + " <<imaginarry <<" i "<<endl;
    }
    friend ComplexNumber operator  + (ComplexNumber & var, ComplexNumber & var2);
};

ComplexNumber operator  + (ComplexNumber & var, ComplexNumber & var2){
        ComplexNumber c4;
        c4.imaginarry = var2.imaginarry + var.imaginarry;
        c4.real =  var2.real + var.real;
        return c4;
    }

int main ()
{

    ComplexNumber n1 (3,4);
    ComplexNumber n2 (4,5);
    ComplexNumber n6;
    n6 = n1+n2;
    n6.getNumber();
}