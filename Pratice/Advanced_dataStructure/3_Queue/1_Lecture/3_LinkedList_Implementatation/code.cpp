#include<iostream>
using namespace std;

/*
    Disadvantages
    For each element we have to store value and adress
*/
class Node {
    public:
    int val;
    Node *next;
    public:
    Node (int val) : val (val), next(NULL){}
};
class Queue {
    public:
    Node* head;
    Node* tail;
    int size;
    Queue() : head(NULL),tail(NULL),size(0) {}

    // Insert at Tail
    void push(int val)
    {
        Node * node = new Node(val);
        if(size==0)
        {
            head=node;
            tail=node;
        }
        else {
        tail->next=node;
        tail=node;

        }
        size++;

    }

    // Delete at head
    void pop()
    {
        if(size==0)
        {
            cout<<"Queue is empty";
            return;
        }
        else {
        Node *temp = head;
        head=head->next;
        size--;
        delete(temp);

        }
    }
    int front()
    {
        if(size==0)
        {
            cout<<"Queue is empty";
            return -1;

        }
        else {
            return head->val;
        }
    }
    int back()
    {
        if(size==0)
        {
            cout<<"Queue is empty";
            return -1;

        }
        else {
            return tail->val;
        }
    }
    bool isEmpty()
    {
        return head == NULL && tail == NULL ? true : false;
    }
    void display()
    {
        Node * temp = head;
        while (temp)
        {
            cout<<temp->val<<"\t";
            temp=temp->next;
        }
        cout<<endl;
        
    }
    int getSize()
    {
        return size;
    }


};
int main ()
{

    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    cout<<"Size is\t"<<q.getSize()<<endl;
    q.pop();
    q.display();
    cout<<"Size is\t"<<q.getSize()<<endl;

    // q.display();

}