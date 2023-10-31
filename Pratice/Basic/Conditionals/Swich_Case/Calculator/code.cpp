#include <iostream>
using namespace std;
int main()

{
    int temp;

    int a,b;
    char op;
    cout << "enter first number  :";
    cin >> a;

    cout << "enter Sec number  :";
    cin >> b;

    cout << "enter Opperator   :";
    cin >> op;

    switch (op)
    {
    case '+':
    cout<<a+b;
    break;
    
    case '-':
    cout<<a-b;
    break;
    

    case '*':
    cout<<a*b;
    break;
    
    case '/':
    cout<<a/b;
    break;
 
    case '%':
    cout<<a%b;
    break;
    
    default:
    cout<<"Invalid Opperator";
        break;
    }


    cout << "\nenter Mathematical statement  of form  num1opperatornum2:\t";
    cin>>a>>op>>b;
    switch (op)
    {
    case '+':
    cout<<a+b;
    break;
    
    case '-':
    cout<<a-b;
    break;
    

    case '*':
    // cout << "\na "<<a;
    // cout << "\nb "<<b<<endl;
    temp = a * b;
    cout<< temp;
    break;
    case '/':
    cout<<a/b;
    break;
    case '%':
    cout<<a%b;
    break;
    
    default:
    cout<<"Invalid Opperator";
        break;
    


    }

return 0;
}