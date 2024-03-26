#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;
};

void insertAtHead(node *&head, int value)
{

    node *first = new node();
    first->data = value;
    first->next = head;

    head = first;
}

void insertAtTail(node *&head, int val)
{

    node *n = new node();

    n->data = val;
    n->next = NULL;

    if (head == NULL)
    {

        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

bool serarch(node *&head, int key)
{

    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 5);

    display(head);
    cout << serarch(head, 5);
}