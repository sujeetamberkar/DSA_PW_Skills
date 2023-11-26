#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value) : value(value), next(NULL), prev(NULL) {}
};
class Deque
{
public:
    Node *head;
    Node *tail;
    int size;
    Deque() : size(0), head(NULL), tail(NULL) {}

    void addFront(int value)
    {
        Node *node = new Node(value);
        if (size)
        {
            node->next = head;
            head->prev = node;
            head = node;
        }
        else
        {
            head = node;
            tail = node;
        }
        size++;
    }

    void addRear(int value)
    {
        Node *node = new Node(value);
        if (size)
        {
            node->prev = tail;
            tail->next = node;
            tail = node;
        }
        else
        {
            head = node;
            tail = node;
        }
        size++;
    }
    void deleteFront()
    {

        if (size)
        {
            Node *temp = head;
            if (head == tail)
            { // Only one element in the deque
                head = NULL;
                tail = NULL;
            }
            else
            {
                head = head->next;
                head->prev = NULL;
            }
            delete temp;
            size--;
        }
        else
        {
            cout << "Deque is empty\n";
        }
    }
    void deleteRear()
    {
        if (size)
        {
            Node *temp = tail;
            if (head == tail)
            { // Only one element in the deque
                head = NULL;
                tail = NULL;
            }
            else
            {
                tail = tail->prev;
                tail->next = NULL;
            }
            delete temp;
            size--;
        }
        else
        {
            cout << "Deque is empty\n";
        }
    }
    int getFront()
    {
        if (size)
        {
            return head->value;
        }
        else
        {
            cout << "Deque is empty";
            return -1;
        }
    }
    int getRear()
    {
        if (size)
        {
            return tail->value;
        }
        else
        {
            cout << "Deque is empty";
            return -1;
        }
    }

    void display()
    {
        if (size)
        {
            Node *temp = head;
            while (temp)
            {
                cout << temp->value << "\t";
                temp = temp->next;
            }
            cout << endl;
        }
        else
        {
            cout << "Deque is empty";
        }
    }
    void Revdisplay()
    {
        if (size)
        {
            Node *temp = tail;
            while (temp)
            {
                cout << temp->value << "\t";
                temp = temp->prev;
            }
            cout << endl;
        }
        else
        {
            cout << "Deque is empty";
        }
    }
};

int main()
{
    Deque q;
    q.addFront(10);
    q.addFront(20);
    q.addRear(30);
    q.deleteRear();
    q.deleteFront();
    q.display();
}