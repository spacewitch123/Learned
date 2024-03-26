#include <iostream>
#include <stack>

using namespace std;
#define n = 100;
class Stack
{

    int *arr int top;

public:
    Stack()
    {
        arr = new arr[n];
        top = -1;
    }

    void push(int x)
    {
        if (top = n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {

        if (top == -1)
        {
            cout << "No element" << endl;
            return;
        }

        top--;
    }

    void Top()
    {
        if (top == -1)
        {
            cout << "No element" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {

        return top == -1;
    }
}