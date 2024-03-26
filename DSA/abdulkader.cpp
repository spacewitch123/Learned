#include <iostream>
using namespace std;

class Node
{

    int data;
    Node *next;
};

class List
{
    Node *head;

public:
    List(void)
    {
        head = NULL;
    }

    int inserNode(int val)
    {

        int currIndex = 0;
        Node *currnode = head;
        Node *prevNode = NULL;

        while (currnode && val > currnode->data)
        {

            prevNode = currnode;
            currnode = currnode->next;
            currIndex++;
        }

        Node *newNode = new Node();
        newNode->data = val;

        if (currIndex == 0)
        {

            newNode->next = head;
            head = newNode;
        }

        else
        {

            newNode->next = prevNode->next;
            prevNode->next = newNode;
        }

        return newNode;
    }

    int insertNode(int index, int val)
    {

        if (index < 0)
        {
            return NULL;
        }

        int currIndex = 1;
        Node *currNode = head;
        while (currNode && index > currIndex)
        {

            currNode = currNode->next;
            currIndex++
        }

        if (currNode == NULL && index > 0)
        {
            return NULL;
        }

        Node *newNode = new Node();
        newNode->data = val;

        if (index == 0)
        {

            newNode->next = head;
            head = newNode;
        }

        else
        {

            newNode->next = currNode->next;
            currNode->next = newNode;
        }

        return newNode;
    }

    int findNode(int val)
    {

        Node *currNode = head;
        int currIndex = 1;

        while (currNode && currNode->data != x)
        {

            currNode = currNode->next;
            currIndex++;
        }

        if (currNode)
        {

            return currIndex;
        }
        else
        {

            return 0;
        }
    }

    int deleteNode(int val)
    {

        Node *currNode = head;
        Node *prevNode = NULL;
        int currIndex = 1;

        while (currNode && currNode->data != val)
        {
            prevNode = currNode;
            currNode = currNode->next;
            currIndex++
        }

        if (currNode)
        {
            if (prevNode)
            {

                prevNode->next = currNode->next;
                delete currNode;
            }

            else
            {
                head = currNode->next;
                delete currNode;
            }
            return currIndex;
        }
    }

    void printData()
    {

        int num;
        Node *currNode = head;

        while (currNode != NULL)
        {

            cout << currNode->data << endl;
            currNode = currNode->next;
            num++
        }

        cout << "The Values for the linked list are" << num << endl;
    }
};