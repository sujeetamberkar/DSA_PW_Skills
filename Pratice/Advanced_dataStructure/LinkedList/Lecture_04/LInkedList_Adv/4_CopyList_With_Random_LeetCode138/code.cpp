#include<iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;
    Node(int val) : val(val), next(NULL), random(NULL) {}
};

int main ()
{
    Node * a = new Node(7);
    Node * b = new Node(13);
    Node * c = new Node(11);
    Node * d = new Node(10);
    Node * e = new Node(1);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    b->random=a;
    c->random=e;
    d->random=c;
    e->random=a;


/*
                            _________________
                            |               |
                            |               |
                            |               V
        (7) ---> (13) --> (11) --> (10) --> 1 --> NULL
         ^         |        ^       |       
         |         |        |       |
         |_________|        |_______|
         
*/

}
Node* copyRandomList(Node* head) {    
    
    // STEP 1: Create a deep coppy 
    Node *dummy = new Node(0);
    Node *tempC = dummy;
    Node *temp = head;

    while (temp)
    {
        Node * a = new Node(temp->val);
        tempC ->next = a;
        tempC = tempC->next;
        temp=temp->next;
    }

    // STEP 2: -> Alternate connections 
    Node *duplicate = dummy->next;
    Node *a = head;
    Node *b = duplicate;

    dummy = new Node (-1); 
    Node *tempD = dummy;   // USE a dummy to create CROSS connections
    while (a && b)
    {
        tempD->next=a;
        a=a->next;
        tempD=tempD->next;
        tempD->next=b;
        b=b->next;
        tempD = tempD->next;
    }
    dummy=dummy->next;

    // Step 3, Making Alternate connections 
    Node *t1= dummy;
    while (t1)
    {
            Node * t2=t1->next;
            if(t1->random !=NULL)
            {
                t2->random = t1->random->next;
            }
            t1=t1->next;
    }


    // Step 4, removing connections 
    // USING 2 dummy pointers

    Node *d1 =new Node(-1);
    Node *d2 = new Node(-1);
    t1=d1;
    Node *t2 =d2;
    Node* t = dummy;

    while (t)
    {
        t1->next=t;
        t = t->next;
        t1 = t1->next;

        t2->next=t;
        t = t->next;
        t2 = t2->next;

    }
    t1->next=NULL;
    t2->next=NULL;
    d1=d1->next;// Orignal with random
    d2=d2->next;// Duplicate with random 
    return d2;


    

    return head;
    
}

/*

LeetCODE SOlution
        Node* copyRandomList(Node* head) {
            // STEP 1: Create a deep coppy 
    Node *dummy = new Node(0);
    Node *tempC = dummy;
    Node *temp = head;

    while (temp)
    {
        Node * a = new Node(temp->val);
        tempC ->next = a;
        tempC = tempC->next;
        temp=temp->next;
    }

    // STEP 2: -> Alternate connections 
    Node *duplicate = dummy->next;
    Node *a = head;
    Node *b = duplicate;

    dummy = new Node (-1); 
    Node *tempD = dummy;   // USE a dummy to create CROSS connections
    while (a && b)
    {
        tempD->next=a;
        a=a->next;
        tempD=tempD->next;
        tempD->next=b;
        b=b->next;
        tempD = tempD->next;
    }
    dummy=dummy->next;

    // Step 3, Making Alternate connections 
    Node *t1 = dummy;
while (t1 != NULL) {
    // This will be the copied node corresponding to the original node t1
    Node *t2 = t1->next;

    // Ensure that t2 (the copy node) is not NULL before assigning the random pointer
    if (t2 != NULL) {
        if (t1->random != NULL) {
            t2->random = t1->random->next;
        } else {
            t2->random = NULL;
        }
    }

    // Safely move to the next original node if it exists
    if (t1->next != NULL) {
        t1 = t1->next->next;
    } else {
        t1 = NULL;
    }
}


    // Step 4, removing connections 
    // USING 2 dummy pointers

    Node *d1 =new Node(-1);
    Node *d2 = new Node(-1);
    t1=d1;
    Node *t2 =d2;
    Node* t = dummy;

    while (t)
    {
        t1->next=t;
        t = t->next;
        t1 = t1->next;

        t2->next=t;
        t = t->next;
        t2 = t2->next;

    }
    t1->next=NULL;
    t2->next=NULL;
    d1=d1->next;// Orignal with random
    d2=d2->next;// Duplicate with random 
    return d2;


    
        
    }

*/