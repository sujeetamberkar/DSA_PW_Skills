#include <iostream>
using namespace std;
int main (){
    int x=3;
    x+=3;
    cout << x;
    // Short cut for comment is  "Cntrl + /"
    /*
        x++;
        x = x + 1 
    */

    cout<<endl<<x;
    x++; // Post Increment 
    ++x; // Pre Increment 
    cout<<endl<<x<<endl;

    cout <<"Post - Pre Increment";
    cout <<endl<<x<<endl;
    cout<<endl<<x++<<endl; // Post Increment 
    cout<<endl<<++x<<endl; // Pre Increment

    cout <<"Post - Pre Decrement";
    cout <<endl<<x<<endl;
    cout<<endl<<x--<<endl; // Post Increment 
    cout<<endl<<--x<<endl; // Pre Increment
    return 0;

}