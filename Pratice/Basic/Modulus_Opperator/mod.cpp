#include <iostream>
using namespace std;
int main (){
    int a=10;
    int b=2;
    cout << a%b;

    cout << b%a;



    /*

        a % b

        if a > b :

                   % remainder of a / b

        if a < b: 
                    Remainder when b is divided by a
                    But Unfortunetly When the divisor is greater than the devided
                    Not Possible to divide

                    So, in this case 
                        a % b = a


        if -ve ;
            Properties
               1)  a % (-b) = a % b

               2) (-a) % b =  - (a % b) 
               
               3) (-a) % (-b) = - (a % b)

                Proof
                  (-a) % (-b) = (-a) % b
                              = - (a % b) 
    */


    return 0;
}