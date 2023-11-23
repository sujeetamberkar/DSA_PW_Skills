#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node *next;

};
int main ()
{
    Node a;
    a.val = 10;
    
    Node b;
    b.val = 20;

    Node c;
    c.val = 30;

    // Forming 

    a.next = &b;
    b.next = &c;
    c.next = NULL;

}