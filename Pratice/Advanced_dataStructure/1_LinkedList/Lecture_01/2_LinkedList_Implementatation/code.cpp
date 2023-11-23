// Limitatation
// Time Complexity in linked lis is O(n) array is O(1)

#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList() : head(NULL), tail(NULL), size(0) {}

    void insertAtTail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAt(int index, int val)
    {
        if (index > size || index < 0)
        {
            cout << "Invalid Index" << endl;
        }
        else if (index == 0)
        {
            insertAtHead(val);
        }
        else if (index == size)
        {
            insertAtTail(val);
        }
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i <= index - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;

            // Node *temporary_pointer = head;
            // int count = 0;
            // while (count < index-1)
            // {
            //     temporary_pointer = temporary_pointer->next;
            //     count++;
            // }
            // t->next = temporary_pointer->next;
            // temporary_pointer->next= t;
            size++;
        }
    }
    int getValueByIndex(int index)
    {
        int answer;
        if (index < 0 || index >= size)
        {
            cout << "Invalid Index ";
            return -100;
        }
        else if (index == 0)
        {
            answer = head->val;
        }
        
        else if (index == size - 1)
        {
            answer = tail->val;
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i <= index; i++)
            {
                temp = temp->next;
            }
            answer = temp->val;
        }
        return answer;
    }

    void display()
    {
        Node *temp;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void deletedAtHead()
    {
        if (size == 0)
        {
            cout << "List is empty ";
            return;
        }
        head = head->next;
        size--;
    }

    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "List is empty ";
            return;
        }
        Node *temp = head;
        for (int i = 1; i < size - 1; i++)
        {
            temp = temp->next;
        }

        /*

        while (temp->next !=NULL)
        {
            temp = temp->next;
        }

        */

        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << " Invalid Index ";
            return;
        }
        else if (index == 0)
        {
            deletedAtHead();
        }
        else if (index == size - 1)
        {
            deleteAtTail();
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i <= index - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
        }
    }
};

int main()
{
    LinkedList ll;       //{NULL}
    ll.insertAtTail(10); //{10,NULL}
    ll.insertAtTail(20); // {10,20,NULL}
    ll.insertAtTail(30); // {10,20,30NULL}
    ll.insertAtTail(40);
    ll.insertAtTail(50);

    ll.display();

    ll.deletedAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();

    ll.deleteAtIndex(1);
    ll.display();
}