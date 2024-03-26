#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
};

void displayList(Node *n)
{

    while (n != NULL)
    {

        cout << n->data << endl;
        n = n->next;
    }
}

void instertatthefront(Node **head, int instertvalue)
{

    // STEP-1: Create a new node for the inserting value
    Node *newnode = new Node;
    newnode->data = instertvalue;
    // STEP-2 : Put The node at The Front of The Current Head
    newnode->next = *head;
    // STEP-3 : Move the head of the list to the newnode
    *head = newnode;
}

void insertAtTheEnd(Node **head, int lastnode)
{
    // MAKE NEW NODE
    Node *newNode = new Node();
    newNode->data = lastnode;
    newNode->next = NULL;
    // CHECK IF NODE EMPTY
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    // FIND LAST NODE
    Node *last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    // INSERT NEW NODE AT THE LAST
    last->next = newNode;
}

void insertAfter(Node *previous, int newelement)
{
    // Check If Previous Node Is Empty
    if (previous == NULL)
    {
        cout << "Cannot add To Empty" << endl;
    }
    // Make New Node
    Node *between = new Node();
    between->data = newelement;

    // Insert In Between
    between->next = previous->next;
    previous->next = between;
}
int main()
{

    Node *head = new Node;

    Node *second = new Node;

    Node *third = new Node;

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    insertAtTheEnd(&head, 9);
    displayList(head);
}