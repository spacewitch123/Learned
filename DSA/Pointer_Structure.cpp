#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int width;
};

int main()
{
    struct Rectangle r = {10, 5};

    cout << r.length << endl;
    cout << r.width << endl;

    Rectangle *p = &r;
    p->length = 20;
    p->width = 40;

    cout << p->length << endl;
    cout << p->width << endl;
}