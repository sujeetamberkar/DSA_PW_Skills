#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int t_val) : val(t_val), next(nullptr), prev(nullptr) {}
};

class DoubleLinkedList
{
public:
    Node *head;
    Node *tail;
    int size;

    DoubleLinkedList() : head(nullptr), tail(nullptr), size(0) {}
    void insertAtTail(int val)
    {
        Node *node = new Node(val);

        if (size == 0)
        {
            head = node;
        }
        else
        {
            tail->next = node;
            node->prev = tail;
            node->next = nullptr;
        }
        tail = node;
        size++;
    }
    void inSertAtHead(int val)
    {
        Node *node = new Node(val);
        if (size == 0)
        {
            tail = node;
        }
        else
        {
            head->prev = node;
            node->next = head;
            node->prev = nullptr;
        }
        head = node;
        size++;
    }
    void displayFromHead()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int getElementfromTail(int index)
    {
        if (index < 0 || index > size)
        {
            cout << "Invalid Index";
            return -1;
        }
        Node *temp = tail;
        for (int i = 1; i <= index - 1; i++)
        {
            temp = temp->prev;
        }
        return temp->val;
    }

    int getElementfromHead(int index)
    {
        if (index < 0 || index > size)
        {
            cout << "Invalid Index";
            return -1;
        }
        Node *temp = head;
        for (int i = 1; i <= index - 1; i++)
        {
            temp = temp->next;
        }
        return temp->val;
    }

    void insertAtIndexFromHead(int index, int val)
    {
        if (index < 0 || index > size)
        {
            cout << "Invalid Index" << endl;
            return;
        }

        else if (index == 0)
        {
            inSertAtHead(val);
        }
        else if (index == size)
        {
            insertAtTail(val);
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i < index - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            t->prev = temp;
            temp->next = t;
            t->next->prev = t; // Important
            size++;
        }
    }
    void insertAtIndexFromTail(int index, int val)
    {
        if (index < 0 || index > size)
        {
            cout << "Invalid Index" << endl;
            return;
        }

        else if (index == 0)
        {
            inSertAtHead(val);
        }
        else if (index == size)
        {
            insertAtTail(val);
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = tail;
            for (int i = 1; i < index - 1; i++)
            {
                temp = temp->prev;
            }
            t->prev = temp->prev;
            t->next = temp;
            temp->prev = t;
            t->prev->next = t;
            size++;
        }
    }
    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "List is empty";
        }
        else if (size == 1)
        {
            tail = NULL;
            head = NULL;
            size--;
        }
        else
        {
            tail = tail->prev;
            tail->next = NULL;
            size--;
        }
    }
    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "List is empty";
        }
        else if (size == 1)
        {
            tail = NULL;
            head = NULL;
            size--;
        }
        else {
            head= head->next;
            head->prev=NULL;
            size--;
        }

    }
    void deleteAtIndexfromHead(int index)
    {
    if (index < 0 || index > size)
        {
            cout << "Invalid Index" << endl;
            return;
        }

        else if (index == 0)
        {
            deleteAtHead();
        }
        else if (index == size)
        {
            deleteAtTail();
        }
        else {
            
            Node *temp = head;
            for (int i = 1; i < index - 1; i++)
            {
                temp = temp->next;
            }
            temp->next->next->prev=temp;
            temp->next=temp->next->next;
            size--;
        }
    }

    void deleteAtIndexfromTail(int index)
    {
        if (index < 0 || index > size)
        {
            cout << "Invalid Index" << endl;
            return;
        }

        else if (index == 0)
        {
            deleteAtHead();
        }
        else if (index == size)
        {
            deleteAtTail();
        }
        else {
            Node *temp = tail;
            for (int i = 1; i < index - 1; i++)
            {
                temp = temp->prev;
            }
            temp->prev->prev->next=temp;
            temp->prev=temp->prev->prev;


        }


    }

};
int main()
{
    DoubleLinkedList Dll;
    Dll.insertAtTail(10);
    Dll.insertAtTail(20);
    Dll.insertAtTail(30);
    Dll.insertAtTail(40);
    Dll.insertAtTail(50);

    Dll.displayFromHead();
    Dll.deleteAtIndexfromTail(2);
    Dll.displayFromHead();



    
}