#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};
class linkedlist
{
public:
    Node *head;
    linkedlist() : head(NULL) {}

    void insertAtTail(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void insertAtHead(int val)
    {

        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void insertAtIndex(int index, int value)
    {

        int count = 0;
        Node *temp = head;
        for (int i = 1; i <= index - 1; i++)
        {
            temp = temp->next;
        }

        Node *newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void displayLinkedList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int getHead()
    {
        return head->val;
    }
    int getTail()
    {
        if (head == NULL)
        {
            throw runtime_error("List is empty");
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        return temp->val;
    }
    int getElementAtIndex(int index)
    {
        if (index == 0)
        {
            return getHead();
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i <= index; i++)
            {
                temp = temp->next;
            }

            return temp->val;
        }
    }
    void delHead()
    {
        if (head == NULL)
        {
            throw runtime_error("List is empty");
        }
        head = head->next;
    }
    void delAtIndex(int index)
    {
        if (head == NULL)
        {
            throw runtime_error("List is empty");
        }

        else if (index == 0)
        {
            delHead();
            return;
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
    void delTail()
    {
        if (head == NULL)
        {
            throw runtime_error("List is empty");
        }
        else if (head->next == NULL)
        {
            head = NULL;
        }
        else
        {
            Node *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = NULL;
        }
    }
};
int main()
{
    linkedlist ll;
    // ll.displayLinkedList();
    ll.insertAtTail(10);
    // ll.displayLinkedList();
    ll.insertAtTail(20);
    // ll.displayLinkedList();
    ll.insertAtHead(23);
    // ll.displayLinkedList();
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    // ll.displayLinkedList();
    ll.insertAtIndex(3, 299);
    // ll.displayLinkedList();

    // int head_value = ll.getHead();
    // int tail_value = ll.getTail();
    // cout <<"Head "<<head_value<<endl;
    // cout<<"Tail "<<tail_value<<endl;

    // ll.displayLinkedList();
    // ll.getElementAtIndex(4);
    ll.delHead();
    // ll.displayLinkedList();
    // ll.delAtIndex(2);
    ll.displayLinkedList();
    ll.delTail();
    ll.displayLinkedList();
}