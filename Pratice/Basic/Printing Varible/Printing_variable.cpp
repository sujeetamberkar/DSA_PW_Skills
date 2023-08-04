#include <iostream>
using namespace std;
int main (){
    int var;
    var = 3;
    cout << var;
    cout << endl << var + 3.5;
    cout << endl;
    int a = 10;
    int b = 3;
    int div = a / b;
    cout << div;
    cout << endl;
    
    /*
    1) The Variable name should not start with a number
    2) The Variable can start with 
            a) a,b,c,d,e....etc
            b) A,B,C,D,E....etc
            c) _
            d) $


    Valid Name
        int x_f
    */
    int x_f=5;  //Corrected variable name, you should declare a valid variable name here
    int x$e=4;
    cout <<"Invalid check";
    cout <<endl<<x_f<<x$e;
    return 0;
}
