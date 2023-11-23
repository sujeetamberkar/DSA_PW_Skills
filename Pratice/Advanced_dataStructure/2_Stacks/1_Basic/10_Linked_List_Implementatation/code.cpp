#include<iostream>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node (int val): val(val){}
};

class stack{
    public:
    int size;
    Node * head;

    stack () : head (NULL), size(0) {}

    void push(int val)
    {
        Node *node = new Node(val);
        node->next=head;
        head=node;
        size++;
    }
    void pop()
    {
        if (head==NULL)
        {
            cout<<"Stack is empty ";
            return;
        }
        head=head->next;
        size--;
    }
    int getTop()
    {
        if (head==NULL)
        {
            cout<<"Stack is empty ";
            return -1 ;
        }
        return head->val;
    }
    int getSize()
    {
        return size;
    }
    void revdisplay()
    {
        Node *temp = head;
        while (temp)
        {
            cout<<temp->val<<"\t";
            temp=temp->next;
        }
        cout<<endl;
        
        
    }
    void print (Node * temp)
    {
        if (!temp)
        {
            return ;
        }
        print(temp->next);
        cout<<temp->val<<"\t";
    }
    void display()
    {
        Node * temp = head;
        print(temp);
        cout<<endl;
    }
};
int main ()
{
    stack a;
    a.push(10);
    a.push(4);
    a.push(3);
    a.revdisplay();
    a.display();

}