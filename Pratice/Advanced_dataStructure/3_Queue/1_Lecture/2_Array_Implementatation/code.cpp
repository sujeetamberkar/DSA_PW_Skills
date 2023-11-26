#include<iostream>
using namespace std;

/*
    Problem in Array Implementatation 
        - 1 ) Wastage of space in array 
               Can be solved using Circular Array
*/
class Queue{
    private:
    int size;
    int front;
    int rear;
    int maxSize;
    int *array;
    public:
    Queue(int maxSize):size(0),front(0),rear(0),maxSize(maxSize),array(new int[maxSize]) {}
    void push(int val)
    {
        if(rear-front <=maxSize-1)
        {
            array[rear]=val;
            rear++;
            size++;
        }
        else {
            cout<<"Queue is full"<<endl;
            return;
        }
    }
    void pop()
    {
        if(rear-front>0)
        {
            front++;
        }
        else {
            cout<<"Queue is empty"<<endl;
        }
    }

    void display()
    {
        for(int i =front;i<rear;i++)
        {
            cout<<array[i]<<"\t";
        }
        cout<<endl;
    }
    int getfront()
    {
        if (rear-front)
        {
            return array[front];
        }
        else {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        return !rear-front ? true : false;
    }

    bool isFull()
    {
        return rear-front == maxSize ? true : false;
    }


};
int main ()
{
    Queue q(5);
    // cout<<q.isEmpty();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.isFull()<<endl;
    q.display();



    




}