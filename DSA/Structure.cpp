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

    struct Rectangle r;
    r.length = 20;
    r.width = 39;

    cout << r.length << endl;
    cout << r.width;
}